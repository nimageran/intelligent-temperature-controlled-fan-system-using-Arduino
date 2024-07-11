#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR 0x20
#define TMP36_PIN A0
Servo myservo;
LiquidCrystal_I2C lcd(I2C_ADDR, 16, 2);
const int servoPin = 9;
int servoSpeed = 90; // Neutral position

void setup() {
  myservo.attach(servoPin);
  Serial.begin(9600);
  
  lcd.init();
  lcd.backlight();
  delay(1000);
  lcd.clear();
}

void loop() {
  int sensorValue = analogRead(TMP36_PIN);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0;
  
  if (temperatureC <= 0) {
    // For temperatures 0°C and below, don't send any signal to the servo
    myservo.detach(); // Detach the servo to stop any signal
    servoSpeed = 0; // Use 0 to indicate the fan is off
  } else {
    if (!myservo.attached()) {
      myservo.attach(servoPin); // Re-attach the servo if it was detached
    }
    servoSpeed = map(temperatureC, 0, 40, 91, 180);
    servoSpeed = constrain(servoSpeed, 91, 180);
    myservo.write(servoSpeed);
  }

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatureC);
  lcd.print(" C    ");
  
  lcd.setCursor(0, 1);
  lcd.print("Fan Speed: ");
  if (servoSpeed == 0) {
    lcd.print("OFF  ");
  } else {
    lcd.print(servoSpeed);
    lcd.print("   ");
  }

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" - Servo Speed: ");
  if (servoSpeed == 0) {
    Serial.println("OFF");
  } else {
    Serial.println(servoSpeed);
  }

  delay(1000);
}