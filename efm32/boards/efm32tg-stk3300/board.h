/* Pinout definitions for the EnergyMicro EFM32TG STK3300 board
 *
 * Only some of those are used in the enchw shipped here, but it is nontheless
 * prudent to declare all utilized pins in a single board definition.
 * */

#include <em_gpio.h>

#define EXT3_PORT gpioPortC
#define EXT3_PIN 4
#define EXT4_PORT gpioPortD
#define EXT4_PIN 0
#define EXT5_PORT gpioPortC
#define EXT5_PIN 5
#define EXT6_PORT gpioPortD
#define EXT6_PIN 1
#define EXT7_PORT gpioPortC
#define EXT7_PIN 12
#define EXT8_PORT gpioPortD
#define EXT8_PIN 2
#define EXT9_PORT gpioPortC
#define EXT9_PIN 13
#define EXT10_PORT gpioPortD
#define EXT10_PIN 3
#define EXT11_PORT gpioPortB
#define EXT11_PIN 11
#define EXT12_PORT gpioPortD
#define EXT12_PIN 4
#define EXT13_PORT gpioPortB
#define EXT13_PIN 12
#define EXT14_PORT gpioPortD
#define EXT14_PIN 5
#define EXT15_PORT gpioPortD
#define EXT15_PIN 7
#define EXT16_PORT gpioPortD
#define EXT16_PIN 6
#define EXT17_PORT gpioPortD
#define EXT17_PIN 8

#define LED0_PORT gpioPortD
#define LED0_PIN 7

#define BUTTON0_PORT gpioPortD
#define BUTTON0_PIN 8

#define BUTTON1_PORT gpioPortB
#define BUTTON1_PIN 11

#define EXT_USART USART1
#define EXT_USART_CLOCK cmuClock_USART1
#define EXT_USART_LOCATION 1

#define EXT_LEUART LEUART0
#define EXT_LEUART_CLOCK cmuClock_LEUART0
#define EXT_LEUART_ROUTELOCATION LEUART_ROUTE_LOCATION_LOC0
#define EXT_LEUART_NVIC_IRQ NVIC_LEUART0_IRQ
#define EXT_LEUART_ISR leuart0_isr

void board_setup(void);
void led0_on(void);
void led0_off(void);
bool button0_pressed(void);
bool button1_pressed(void);

/* kept for compatibility with similar boards ... remove at will and fix what breaks */

#define led2_on led0_on
#define led2_off led0_off
#define button_pressed button0_pressed
