/*
 * STM32F103C8 aka "Blue Pill"
 * ---------------------------
 * (EN) Pin redefinition for easier orientation on the board. See attached picture.
 * (CZ) P�edefinov�n� pin� pro snaz�� orientaci na desti�ce. Viz p�ilo�en� obr�zek.
 * 
 * Autor: Jon� Kub�t, JKtech
 * Kontakt: jonaskubat@volny.cz
 * Datum: 28.12.2018
 */

 
// Piny, kter� mohou b�t i analogov�m vstupem //
// Tyto piny nejsou 5V tolerantn�. //

#define A0  PA0   // PWM
#define A1  PA1   // PWM
#define A2  PA2   // PWM
#define A3  PA3   // PWM
#define A4  PA4
#define A5  PA5
#define A6  PA6   // PWM
#define A7  PA7   // PWM
#define A8  PB0   // PWM
#define A9  PB1   // PWM


// Piny, kter� mohou b�t pouze digit�ln� I/O //
// Tyto piny jsou 5V tolerantn�. //

#define D0  PB10
#define D1  PB11
#define D2  PB9   // PWM
#define D3  PB8   // PWM
#define D4  PB7   // PWM
#define D5  PB6   // PWM
#define D6  PB5   // Tento nen� 5V tolerantn�
#define D7  PB4
#define D8  PB3
#define D9  PA15
#define D10 PA10  // PWM
#define D11 PA9   // PWM
#define D12 PA8   // PWM
#define D13 PB15
#define D14 PB14
#define D15 PB13
#define D16 PB12

#define D17 PA14  // SWDCLK - JTAG
#define D18 PA13  // SWDIO  - JTAG

#define USBP PA12  // USB - D+ p�i vyu�it� STM32duino bootloaderu
#define USBN PA11  // USB - D- p�i vyu�it� STM32duino bootloaderu

#define INLED PC13  // LED_BUILTIN, nezat�ovat (max. +0.1mA, -1mA)
                    // Pozor! LEDka je proti +3V3, tak�e sv�t� p�i digitalWrite(INLED, LOW);

#define OSC32IN PC14   // Krystal 32.768kHz vstup  (max. 0.1mA)
#define OSC32OUT PC15  // Krystal 32.768kHz v�stup (max. 0.1mA)