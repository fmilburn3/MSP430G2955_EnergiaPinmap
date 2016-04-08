/*
  ************************************************************************
  *	pins_energia.h
  *
  *	Energia core files for MSP430
  *		Copyright (c) 2012 Robert Wessels. All right reserved.
  *
  *     Contribution: Rei VILO
  *     Contribution: Eric Brundick <spirilis@linux.com>
  *
  ***********************************************************************
  Derived from:
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA
*/

#ifndef Pins_Energia_h
#define Pins_Energia_h
#ifndef BV
#define BV(x) (1 << (x))
#endif

static const uint8_t SS            = 8;  // P4.2 
static const uint8_t SCK           = 7;  // P3.3 
static const uint8_t MOSI          = 15; // P3.1 
static const uint8_t MISO          = 14; // P3.2 
static const uint8_t TWISCL1       = 9;  // P1.3 SW I2C 
static const uint8_t TWISDA1       = 10; // P1.4 SW I2C 	
static const uint8_t TWISDA0       = 15; // P3.1 
static const uint8_t TWISCL0       = 14; // P3.2 
static const uint8_t DEBUG_UARTRXD = 3;  // Receive  Data (RXD) at P3.5 
static const uint8_t DEBUG_UARTTXD = 4;  // Transmit Data (TXD) on P3.4 

#define TWISDA0_SET_MODE       (PORT_SELECTION0) 
#define TWISCL0_SET_MODE       (PORT_SELECTION0)
#define DEBUG_UARTRXD_SET_MODE (PORT_SELECTION0 | INPUT)
#define DEBUG_UARTTXD_SET_MODE (PORT_SELECTION0 | OUTPUT)
#define SPISCK_SET_MODE        (PORT_SELECTION0)
#define SPIMOSI_SET_MODE       (PORT_SELECTION0)
#define SPIMISO_SET_MODE       (PORT_SELECTION0)

#define DEBUG_UART_MODULE_OFFSET 0x0
#define DEBUG_UART_MODULE        0x0

static const uint8_t A0  = 2;
static const uint8_t A1  = 24;
static const uint8_t A2  = 25;
static const uint8_t A3  = 12;
static const uint8_t A4  = 13;
static const uint8_t A5  = 6;
static const uint8_t A6  = 29;
static const uint8_t A7  = 11;
static const uint8_t A12 = 28;
static const uint8_t A13 = 27;
static const uint8_t A14 = 26;
static const uint8_t A15 = 5;

static const uint8_t A8 = 128 + 8;   // special. This is the VeREF+ signal
static const uint8_t A9 = 128 + 9;   // special. This is Vref- / VeREF-
static const uint8_t A10 = 128 + 10; // special. This is the internal temp sensor
static const uint8_t A11 = 128 + 11; // special. This is Vcc/2

//                           RobG's MSP430G2955 40-pin LaunchPad XL
//                           Utilizing the MSP430G2955IDA38 (TSSOP-38)
//
//             J1         J3                                 J4          J2
//        +---------------------------------------------------------------------+
//        | Vcc  (1) | (21) 5V                            P1.7 (40) | (20) GND  |
//        | P2.0 (2) | (22) GND                           P1.6 (39) | (19) P2.6 |
//        | P3.5 (3) | (23) P2.5                          P1.5 (38) | (18) P2.7 |
//        | P3.4 (4) | (24) P2.1                          P1.4 (37) | (17) TEST |
//        | P4.6 (5) | (25) P2.2                          P1.3 (36) | (16) RST# |
//        | P3.0 (6) | (26) P4.5                          P1.2 (35) | (15) P3.1 |
//        | P3.3 (7) | (27) P4.4                          P1.1 (34) | (14) P3.2 |
//        | P4.2 (8) | (28) P4.3                          P1.0 (33) | (13) P2.4 |
//        | P4.1 (9) | (29) P3.6                          P4.7 (32) | (12) P2.3 |
//        | P4.0 (10)| (30) N/A                           N/A  (31) | (11) P3.7 |
//        +---------------------------------------------------------------------+
//

// Pin names based on the silkscreen

static const uint8_t P2_0 = 2;
static const uint8_t P3_5 = 3;
static const uint8_t P3_4 = 4;
static const uint8_t P4_6 = 5;
static const uint8_t P3_0 = 6;
static const uint8_t P3_3 = 7;
static const uint8_t P4_2 = 8;
static const uint8_t P4_1 = 9;
static const uint8_t P4_0 = 10;
static const uint8_t P3_7 = 11;
static const uint8_t P2_3 = 12;
static const uint8_t P2_4 = 13;
static const uint8_t P3_2 = 14;
static const uint8_t P3_1 = 15;
static const uint8_t P2_7 = 18;
static const uint8_t P2_6 = 19;
static const uint8_t P2_5 = 23;
static const uint8_t P2_1 = 24;
static const uint8_t P2_2 = 25;
static const uint8_t P4_5 = 26;
static const uint8_t P4_4 = 27;
static const uint8_t P4_3 = 28;
static const uint8_t P3_6 = 29;
static const uint8_t P4_7 = 32;
static const uint8_t P1_0 = 33;
static const uint8_t P1_1 = 34;
static const uint8_t P1_2 = 35;
static const uint8_t P1_3 = 36;
static const uint8_t P1_4 = 37;
static const uint8_t P1_5 = 38;
static const uint8_t P1_6 = 39;
static const uint8_t P1_7 = 40;

static const uint8_t PUSH1 = 12;
static const uint8_t PUSH2 = 13;
static const uint8_t TEMPSENSOR = 128 + 10;
static const uint8_t RED_LED = 2;
// static const uint8_t GREEN_LED = 14;


#ifdef ARDUINO_MAIN

const uint16_t port_to_input[] = {
	NOT_A_PORT,
	(uint16_t) &P1IN,
	(uint16_t) &P2IN,
	(uint16_t) &P3IN,
	(uint16_t) &P4IN
};

const uint16_t port_to_output[] = {
	NOT_A_PORT,
	(uint16_t) &P1OUT,
	(uint16_t) &P2OUT,
	(uint16_t) &P3OUT,
	(uint16_t) &P4OUT
};

const uint16_t port_to_dir[] = {
	NOT_A_PORT,
	(uint16_t) &P1DIR,
	(uint16_t) &P2DIR,
	(uint16_t) &P3DIR,
	(uint16_t) &P4DIR
};

const uint16_t port_to_ren[] = {
	NOT_A_PORT,
	(uint16_t) &P1REN,
	(uint16_t) &P2REN,
	(uint16_t) &P3REN,
	(uint16_t) &P4REN
};

const uint16_t port_to_sel0[] = {  // put this PxSEL register under the group of PxSEL0 */
	NOT_A_PORT,
	(uint16_t) &P1SEL,
	(uint16_t) &P2SEL,
	(uint16_t) &P3SEL,
	(uint16_t) &P4SEL
};

const uint16_t port_to_sel2[] = {
	NOT_A_PORT,
	(uint16_t) &P1SEL2,
	(uint16_t) &P2SEL2,
	(uint16_t) &P3SEL2,
	(uint16_t) &P4SEL2
};


//  * PWM output for Timer_A3 and Timer_B3 instances.

const uint8_t digital_pin_to_timer[] = {
	NOT_ON_TIMER, //  dummy    
	NOT_ON_TIMER, // 1.  Vcc   
	NOT_ON_TIMER, // 2.  P2.0  
	NOT_ON_TIMER, // 3.  P3.5  
	NOT_ON_TIMER, // 4.  P3.4  
	NOT_ON_TIMER, // 5.  P4.6  
	NOT_ON_TIMER, // 6.  P3.0  
	NOT_ON_TIMER, // 7.  P3.3  
	T0B2,         // 8.  P4.2  
	T0B1,         // 9.  P4.1  
	T0B0,         // 10. P4.0  
	T1A2,         // 11. P3.7  
	T0A1,         // 12. P2.3  
	T0A2,         // 13. P2.4  
	NOT_ON_TIMER, // 14. P3.2  
	NOT_ON_TIMER, // 15. P3.1  
	NOT_ON_TIMER, //   RST#    
	NOT_ON_TIMER, //   TEST    
	NOT_ON_TIMER, // 18. P2.7  
	NOT_ON_TIMER, // 19. P2.6  
	NOT_ON_TIMER, //   GND     
	NOT_ON_TIMER, //   5V      
	NOT_ON_TIMER, //   GND     
	T1B0,         // 23. P2.5  
	NOT_ON_TIMER, // 24. P2.1  
	T0B0,         // 25. P2.2  
	T0B2,         // 26. P4.5  
	T0B1,         // 27. P4.4  
	T0B0,         // 28. P4.3  
	T1A1,         // 29. P3.6  
	NOT_ON_TIMER, // 30. N/A   
	NOT_ON_TIMER, // 31. N/A   
	NOT_ON_TIMER, // 32. P4.7  
	NOT_ON_TIMER, // 33. P1.0  
	T0A0,         // 34. P1.1  
	T0A1,         // 35. P1.2  
	T0A2,         // 36. P1.3  
	NOT_ON_TIMER, // 37. P1.4  
	T0A0,         // 38. P1.5  
	T0A1,         // 39. P1.6  
	T0A2          // 40. P1.7 
};

const uint8_t digital_pin_to_port[] = {
	NOT_A_PIN,    //  dummy    
	NOT_A_PIN,    // 1.  Vcc   
	P2,           // 2.  P2.0  
	P3,           // 3.  P3.5  
	P3,           // 4.  P3.4  
	P4,           // 5.  P4.6  
	P3,           // 6.  P3.0  
	P3,           // 7.  P3.3  
	P4,           // 8.  P4.2  
	P4,           // 9.  P4.1  
	P4,           // 10. P4.0  
	P3,           // 11. P3.7  
	P2,           // 12. P2.3  
	P2,           // 13. P2.4  
	P3,           // 14. P3.2  
	P3,           // 15. P3.1  
	NOT_A_PIN,    //   RST#    
	NOT_A_PIN,    //   TEST    
	P2,           // 18. P2.7  
	P2,           // 19. P2.6  
	NOT_A_PIN,    //   GND     
	NOT_A_PIN,    //   5V      
	NOT_A_PIN,    //   GND     
	P2,           // 23. P2.5  
	P2,           // 24. P2.1  
	P2,           // 25. P2.2  
	P4,           // 26. P4.5  
	P4,           // 27. P4.4  
	P4,           // 28. P4.3  
	P3,           // 29. P3.6  
	NOT_A_PIN,    // 30. N/A   
	NOT_A_PIN,    // 31. N/A   
	P4,           // 32. P4.7  
	P1,           // 33. P1.0  
	P1,           // 34. P1.1  
	P1,           // 35. P1.2  
	P1,           // 36. P1.3  
	P1,           // 37. P1.4  
	P1,           // 38. P1.5  
	P1,           // 39. P1.6  
	P1,           // 40. P1.7 
};

const uint8_t digital_pin_to_bit_mask[] = {
	NOT_A_PIN,    //  dummy    
	NOT_A_PIN,    // 1.  Vcc   
	BV(0),        // 2.  P2.0  
	BV(5),        // 3.  P3.5  
	BV(4),        // 4.  P3.4  
	BV(6),        // 5.  P4.6  
	BV(0),        // 6.  P3.0  
	BV(3),        // 7.  P3.3  
	BV(2),        // 8.  P4.2  
	BV(1),        // 9.  P4.1  
	BV(0),        // 10. P4.0  
	BV(7),        // 11. P3.7  
	BV(3),        // 12. P2.3  
	BV(4),        // 13. P2.4  
	BV(2),        // 14. P3.2  
	BV(1),        // 15. P3.1  
	NOT_A_PIN,    //   RST#    
	NOT_A_PIN,    //   TEST    
	BV(7),        // 18. P2.7  
	BV(6),        // 19. P2.6  
	NOT_A_PIN,    //   GND     
	NOT_A_PIN,    //   5V      
	NOT_A_PIN,    //   GND     
	BV(5),        // 23. P2.5  
	BV(1),        // 24. P2.1  
	BV(2),        // 25. P2.2  
	BV(5),        // 26. P4.5  
	BV(4),        // 27. P4.4  
	BV(3),        // 28. P4.3  
	BV(6),        // 29. P3.6  
	NOT_A_PIN,    // 30. N/A   
	NOT_A_PIN,    // 31. N/A   
	BV(7),        // 32. P4.7  
	BV(0),        // 33. P1.0  
	BV(1),        // 34. P1.1  
	BV(2),        // 35. P1.2  
	BV(3),        // 36. P1.3  
	BV(4),        // 37. P1.4  
	BV(5),        // 38. P1.5  
	BV(6),        // 39. P1.6  
	BV(7)         // 40. P1.7 
};
const uint32_t digital_pin_to_analog_in[] = {
	NOT_ON_ADC,   //  dummy    
	NOT_ON_ADC,   // 1.  Vcc   
	0,            // 2.  P2.0 - A0 
	NOT_ON_ADC,   // 3.  P3.5  
	NOT_ON_ADC,   // 4.  P3.4  
	15,           // 5.  P4.6 - A15 
	5,            // 6.  P3.0 - A5 
	NOT_ON_ADC,   // 7.  P3.3  
	NOT_ON_ADC,   // 8.  P4.2  
	NOT_ON_ADC,   // 9.  P4.1  
	NOT_ON_ADC,   // 10. P4.0  
	7,            // 11. P3.7 - A7 
	3,            // 12. P2.3 - A3 
	4,            // 13. P2.4 - A4 
	NOT_ON_ADC,   // 14. P3.2  
	NOT_ON_ADC,   // 15. P3.1  
	NOT_ON_ADC,   //   RST#    
	NOT_ON_ADC,   //   TEST    
	NOT_ON_ADC,   // 18. P2.7  
	NOT_ON_ADC,   // 19. P2.6  
	NOT_ON_ADC,   //   GND     
	NOT_ON_ADC,   //   5V      
	NOT_ON_ADC,   //   GND     
	NOT_ON_ADC,   // 23. P2.5  
	1,            // 24. P2.1 - A1 
	2,            // 25. P2.2 - A2 
	14,           // 26. P4.5 - A14 
	13,           // 27. P4.4 - A13 
	12,           // 28. P4.3 - A12 
	6,            // 29. P3.6 - A6 
	NOT_ON_ADC,   // 30. N/A   
	NOT_ON_ADC,   // 31. N/A   
	NOT_ON_ADC,   // 32. P4.7  
	NOT_ON_ADC,   // 33. P1.0  
	NOT_ON_ADC,   // 34. P1.1  
	NOT_ON_ADC,   // 35. P1.2  
	NOT_ON_ADC,   // 36. P1.3  
	NOT_ON_ADC,   // 37. P1.4  
	NOT_ON_ADC,   // 38. P1.5  
	NOT_ON_ADC,   // 39. P1.6  
	NOT_ON_ADC    // 40. P1.7 
};

#endif
#endif

