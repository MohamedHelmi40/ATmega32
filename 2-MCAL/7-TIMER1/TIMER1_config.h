#ifndef TIMER1_CONFIG_H
#define TIMER1_CONFIG_H

#define F_CPU 8000000
#define RESOLUTION 65536

#define COM_U_A                              NON_INVERTING_OC1A
/*
OC1A_DISCONNECTED
TOGGLE_OC1A
NON_INVERTING_OC1A
INVERTING_OC1A
     
*/
#define COM_U_B                               NON_INVERTING_OC1B
/*
 OC1B_DISCONNECTED
 TOGGLE_OC1B
 NON_INVERTING_OC1B
 INVERTING_OC1B
*/
#define WAVE_GEN                              FAST_PWM_ICR1
/*
NORMAL
PWM_PHASE_CORRECT_8_BIT
PWM_PHASE_CORRECT_9_BIT
PWM_PHASE_CORRECT_10-BIT
CTC_OCR1A
FAST_PWM_8_BIT
FAST_PWM_9_BIT
FAST_PWM_10_BIT
PWM_PHASE_FREQ_CORRECT_ICR1
PWM_PHASE_FREQ_CORRECT_OCR1A
PWM_PHASE_CORRECT_ICR1
PWM_PHASE_CORRECT_OCR1A
CTC
RESERVED
FAST_PWM_ICR1
FAST_PWM_OCR1A

*/
#define CLOCK_SOURCE                           PRESCALER_8
/*
NO_CLOCK_SOURCE
NO_PRESCALING 
PRESCALER_8   
PRESCALER_64  
PRESCALER_256 
PRESCALER_1024
T0_FALLING    
T0_RISING     
*/
#define ICP_INTERRUPT                           DISABLE
/*
ENABLE
DISABLE
*/
#define OCA_INTERRUPT                           ENABLE
/*
ENABLE
DISABLE
*/
#define OCB_INTERRUPT                           DISABLE
/*
ENABLE
DISABLE
*/
#define OVF_INTERRUPT_ENABLE                     DISABLE
/*
ENABLE
DISABLE
*/
#define INPUT_CAPTURE_NOISE_CANCELER             DISABLE
/*
ENABLE
DISABLE
*/
#define INPUT_CAPTURE_EDGE_SELECT                FALLING_EDGE_TRIGGER
/*
FALLING_EDGE_TRIGGER
RISING_EDGE_TRIGGER
*/

#define OCR1B_VALUE 0
#define OCR1A_VALUE 0
#define ICR1_VALUE  0

#endif