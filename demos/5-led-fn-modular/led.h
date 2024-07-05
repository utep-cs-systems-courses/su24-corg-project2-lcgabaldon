#ifndef led_included
#define led_included

#define LED_RED BIT6               // P1.0
#define LED_GREEN BIT0             // P1.6
#define LEDS (BIT6 | BIT0)

void greenOn(int on);

#endif // included
