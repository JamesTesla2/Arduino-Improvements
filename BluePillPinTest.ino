/*
 * STM32F103C8 aka "Blue Pill"
 * ---------------------------
 * (EN) All renamed pins test with 200ms blink on each one (running light effect)
 * (CZ) Test všech přejmenovaných pinů bliknutím 200ms nakaždém (efekt běžícího světla)
 * 
 * Autor: Jonáš Kubát, JKtech
 * Kontakt: jonaskubat@volny.cz
 * Datum: 28.12.2018
 */


#include <MyBluePillPinout.h>


void setup() {
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A6, OUTPUT);
  pinMode(A7, OUTPUT);
  pinMode(A8, OUTPUT);
  pinMode(A9, OUTPUT);
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D9, OUTPUT);
  pinMode(D10, OUTPUT);
  pinMode(D11, OUTPUT);
  pinMode(D12, OUTPUT);
  pinMode(D13, OUTPUT);
  pinMode(D14, OUTPUT);
  pinMode(D15, OUTPUT);
  pinMode(D16, OUTPUT);
  pinMode(D17, OUTPUT);
  pinMode(D18, OUTPUT);
  pinMode(INLED, OUTPUT);
}

void loop() {
  Serial.println("Ahoj");

  digitalWrite(A0, HIGH);
  delay(200);
  digitalWrite(A0, LOW);

  digitalWrite(A1, HIGH);
  delay(200);
  digitalWrite(A1, LOW);

  digitalWrite(A2, HIGH);
  delay(200);
  digitalWrite(A2, LOW);

  digitalWrite(A3, HIGH);
  delay(200);
  digitalWrite(A3, LOW);

  digitalWrite(A4, HIGH);
  delay(200);
  digitalWrite(A4, LOW);

  digitalWrite(A5, HIGH);
  delay(200);
  digitalWrite(A5, LOW);

  digitalWrite(A6, HIGH);
  delay(200);
  digitalWrite(A6, LOW);

  digitalWrite(A7, HIGH);
  delay(200);
  digitalWrite(A7, LOW);

  digitalWrite(A8, HIGH);
  delay(200);
  digitalWrite(A8, LOW);

  digitalWrite(A9, HIGH);
  delay(200);
  digitalWrite(A9, LOW);

  digitalWrite(D0, HIGH);
  delay(200);
  digitalWrite(D0, LOW);

  digitalWrite(D1, HIGH);
  delay(200);
  digitalWrite(D1, LOW);

  digitalWrite(D2, HIGH);
  delay(200);
  digitalWrite(D2, LOW);

  digitalWrite(D3, HIGH);
  delay(200);
  digitalWrite(D3, LOW);

  digitalWrite(D4, HIGH);
  delay(200);
  digitalWrite(D4, LOW);

  digitalWrite(D5, HIGH);
  delay(200);
  digitalWrite(D5, LOW);

  digitalWrite(D6, HIGH);
  delay(200);
  digitalWrite(D6, LOW);

  digitalWrite(D7, HIGH);
  delay(200);
  digitalWrite(D7, LOW);

  digitalWrite(D8, HIGH);
  delay(200);
  digitalWrite(D8, LOW);
  
  digitalWrite(D9, HIGH);
  delay(200);
  digitalWrite(D9, LOW);
  
  digitalWrite(D10, HIGH);
  delay(200);
  digitalWrite(D10, LOW);

  digitalWrite(D11, HIGH);
  delay(200);
  digitalWrite(D11, LOW);

  digitalWrite(D12, HIGH);
  delay(200);
  digitalWrite(D12, LOW);

  digitalWrite(D13, HIGH);
  delay(200);
  digitalWrite(D13, LOW);

  digitalWrite(D14, HIGH);
  delay(200);
  digitalWrite(D14, LOW);

  digitalWrite(D15, HIGH);
  delay(200);
  digitalWrite(D15, LOW);

  digitalWrite(D16, HIGH);
  delay(200);
  digitalWrite(D16, LOW);

  digitalWrite(D17, HIGH);
  delay(200);
  digitalWrite(D17, LOW);

  digitalWrite(D18, HIGH);
  delay(200);
  digitalWrite(D18, LOW);

  digitalWrite(INLED, HIGH); // INLED je proti +3V3, takže její bliknutí je inverzní (dáno zhasnutím)
  delay(200);
  digitalWrite(INLED, LOW);

}
