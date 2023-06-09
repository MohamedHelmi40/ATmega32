#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H



/*PORTA*/
#define PORTA  (*(volatile u8 *)(0x3B)) /*PORTA Macro Definition*/
#define DDRA   (*(volatile u8 *)(0x3A)) /*DDRA  Macro Definition*/
#define PINA   (*(volatile u8 *)(0x39)) /*PINA  Macro Definition*/

/*PORTB*/
#define PORTB  (*(volatile u8 *)(0x38)) /*PORTB Macro Definition*/
#define DDRB   (*(volatile u8 *)(0x37)) /*DDRB  Macro Definition*/
#define PINB   (*(volatile u8 *)(0x36)) /*PINB  Macro Definition*/


/*PORTC*/
#define PORTC  (*(volatile u8 *)(0x35)) /*PORTC Macro Definition*/
#define DDRC   (*(volatile u8 *)(0x34)) /*DDRC  Macro Definition*/
#define PINC   (*(volatile u8 *)(0x33)) /*PINC  Macro Definition*/

/*PORTD*/
#define PORTD  (*(volatile u8 *)(0x32)) /*PORTD Macro Definition*/
#define DDRD   (*(volatile u8 *)(0x31)) /*DDRD  Macro Definition*/
#define PIND   (*(volatile u8 *)(0x30)) /*PIND  Macro Definition*/



#endif