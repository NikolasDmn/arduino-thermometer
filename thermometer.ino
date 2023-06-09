#include <dht.h>
#include <LiquidCrystal.h>

#define DHT_PIN 12
#define SOUND_PIN 4
#define LCD_BACKLIGHT 3
#define LIGHT_PIN A0
#define DISPLAY_MS 5000

const int rs = 6, en = 7, d4 = 8, d5 = 9, d6 = 10, d7 = 11;
int LIGHT_ANALOG_THRESHOLD;

dht DHT;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  pinMode(SOUND_PIN, INPUT);
  pinMode(LCD_BACKLIGHT, OUTPUT);
  lcd.begin(16, 2);
  LIGHT_ANALOG_THRESHOLD = analogRead(LIGHT_PIN)-10;
  display();
}

void loop()
{
  if (digitalRead(SOUND_PIN) != 0 || analogRead(LIGHT_PIN) > LIGHT_ANALOG_THRESHOLD)
  {
    display();
  }
}

void display()
{
  digitalWrite(LCD_BACKLIGHT, HIGH);
  lcd.display();
  int dhtData = DHT.
  read11(DHT_PIN);
  float temp = DHT.temperature;
  float hum = DHT.humidity;
  lcd.setCursor(0, 0);
  lcd.print("Temperature: ");
  lcd.print((int)temp);
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Humidity:    ");
  lcd.print((int)hum);
  lcd.print("%");
  delay(DISPLAY_MS);
  lcd.noDisplay();
  digitalWrite(LCD_BACKLIGHT, LOW);
}
