/*
  ************************************************************************
  *   pins_energia.h
  *
  *   Energia core files for MSP430
  *     Copyright (c) 2012 Robert Wessels. All right reserved.
  *
  *     Contribution: Rei VILO
  *	    Modified for G2955: Frank Milburn
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
#define __MSP430_HAS_PORT3_R__           // Is this really needed?
#define __MSP430_HAS_Port4_R__           // Is this really needed?
#ifndef Pins_Energia_h
#define Pins_Energia_h
#ifndef BV
#define BV(x) (1 << (x))
#endif

static const uint8_t SS       	  = 8;  		// P1.2 
static const uint8_t SCK      	  = 7;   		// P3.3 
static const uint8_t MOSI     	  = 15;  		// P3.1 
static const uint8_t MISO     	  = 14;  		// P3.2 
static const uint8_t TWISCL1  	  = 9;   		// P1.3 SW I2C 
static const uint8_t TWISDA1  	  = 10;  		// P1.4 SW I2C 
static const uint8_t TWISDA0 	  = 15;  		// P3.1 
static const uint8_t TWISCL0  	  = 14;  		// P3.2 
static const uint8_t DEBUG_UARTRXD = 3;  		// Receive  Data (RXD) at P3.5 
static const uint8_t DEBUG_UARTTXD = 4;  		// Transmit Data (TXD) at P3.4 

#define TWISDA1_SET_MODE  (INPUT)
#define TWISCL1_SET_MODE  (INPUT)
#if defined(__MSP430_HAS_USCI__)
#define TWISDA0_SET_MODE  (PORT_SELECTION0 | PORT_SELECTION1) // do not enable the pull ups for this device 
#define TWISCL0_SET_MODE  (PORT_SELECTION0 | PORT_SELECTION1) // do not enable the pull ups for this device 
#define DEBUG_UARTRXD_SET_MODE (PORT_SELECTION0 | PORT_SELECTION1 | INPUT)
#define DEBUG_UARTTXD_SET_MODE (PORT_SELECTION0 | PORT_SELECTION1 | OUTPUT)
#define SPISCK_SET_MODE (PORT_SELECTION0 | PORT_SELECTION1)
#define SPIMOSI_SET_MODE (PORT_SELECTION0 | PORT_SELECTION1)
#define SPIMISO_SET_MODE (PORT_SELECTION0 | PORT_SELECTION1)
#endif
#if defined(__MSP430_HAS_USI__)
#define TWISDA0_SET_MODE  (PORT_SELECTION0 | INPUT_PULLUP)
#define TWISCL0_SET_MODE  (PORT_SELECTION0 | INPUT_PULLUP)
#define DEBUG_UARTRXD_SET_MODE (PORT_SELECTION0 | INPUT)
#define DEBUG_UARTTXD_SET_MODE (PORT_SELECTION0 | OUTPUT)
#define SPISCK_SET_MODE (PORT_SELECTION0)
#define SPIMOSI_SET_MODE (PORT_SELECTION0)
#define SPIMISO_SET_MODE (PORT_SELECTION0)
#endif
 
// Define the default I2C settings 
#define DEFAULT_I2C -1                             // indicates SW I2C on pseudo module 1 
#define TWISDA TWISDA1
#define TWISCL TWISCL1
#define TWISDA_SET_MODE  TWISDA1_SET_MODE
#define TWISCL_SET_MODE  TWISCL1_SET_MODE

#define DEBUG_UART_MODULE_OFFSET 0x0

#define DEBUG_UART_MODULE 0x0

static const uint8_t A0  = 2;
static const uint8_t A1  = 23;
static const uint8_t A3  = 24;
static const uint8_t A4  = 25;
static const uint8_t A6  = 13;
static const uint8_t A7  = 26;               // Is the numbering right here?  Add in remaining Timer B ones?
                                             // Is there an internal temp sensor like the G2553?

// Pin names based on the silkscreen
static const uint8_t P1_0 = 5;
static const uint8_t P1_1 = 12;
static const uint8_t P1_2 = 8;
static const uint8_t P1_3 = 9;
static const uint8_t P1_4 = 10;
static const uint8_t P1_5 = 19;
static const uint8_t P1_6 = 40;
static const uint8_t P1_7 = 39;

static const uint8_t P2_0 = 2;
static const uint8_t P2_1 = 23;
static const uint8_t P2_2 = 11;
static const uint8_t P2_3 = 24;
static const uint8_t P2_4 = 25;
static const uint8_t P2_5 = 18;
static const uint8_t P2_6 = 27;
static const uint8_t P2_7 = 28;

static const uint8_t P3_0 = 6;
static const uint8_t P3_1 = 15;
static const uint8_t P3_2 = 14;
static const uint8_t P3_3 = 7;
static const uint8_t P3_4 = 4;
static const uint8_t P3_5 = 3;
static const uint8_t P3_6 = 13;
static const uint8_t P3_7 = 26;

static const uint8_t P4_0 = 38;
static const uint8_t P4_1 = 37;
static const uint8_t P4_2 = 36;
static const uint8_t P4_3 = 35;
static const uint8_t P4_4 = 34;
static const uint8_t P4_5 = 33;
static const uint8_t P4_6 = 32;
static const uint8_t P4_7 = 31;



static const uint8_t RED_LED = 19;
//static const uint8_t GREEN_LED = 14;            Not yet defined
//static const uint8_t PUSH1 =
//static const uint8_t PUSH2 = 5;



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

const uint16_t port_to_sel0[] = {  // put this PxSEL register under the group of PxSEL0 
   NOT_A_PORT,
   (uint16_t) &P1SEL,
   (uint16_t) &P2SEL,
   (uint16_t) &P3SEL,
   (uint16_t) &P4SEL
};

const uint16_t port_to_sel2[] = {
   NOT_A_PORT,
#ifdef P1SEL2_
   (uint16_t) &P1SEL2,
#else
        NOT_A_PORT,
#endif
#ifdef P2SEL2_
   (uint16_t) &P2SEL2,
#else 
        NOT_A_PORT,
#endif
#ifdef P3SEL2_
   (uint16_t) &P3SEL2,
#else
        NOT_A_PORT,
#endif
#ifdef P4SEL2_
   (uint16_t) &P4SEL2,
#else
        NOT_A_PORT,
#endif

};


/* 
 * Defines for devices with 2x TA3 timers (e.g. MSP430g2553). On the 20pin devices, upto 3 analog outputs are available
 * T0A1, T1A1 and T1A2 
 */
const uint8_t digital_pin_to_timer[] = {
   NOT_ON_TIMER, 	//  dummy    
   NOT_ON_TIMER, 	//  1 - VCC  
   NOT_ON_TIMER, 	//  2 - P2.0 
   NOT_ON_TIMER,	 	//  3 - P3.5
   NOT_ON_TIMER, 	//  4 - P3.4 
   NOT_ON_TIMER, 	//  5 - P1.0 
   NOT_ON_TIMER, 	//  6 - P3.0 
   NOT_ON_TIMER, 	//  7 - P3.3 
   T0A1,         	//  8 - P1.2 
   T0A2,         	//  9 - P1.3 
   NOT_ON_TIMER, 	// 10 - P1.4 
   T0A0,         	// 11 - P2.2, note: A0 output cannot be used with analogWrite 
   T0A0,         	// 12 - P1.1, note: A0 output cannot be used with analogWrite 
   T1A1,         	// 13 - P3.6 
   NOT_ON_TIMER, 	// 14 - P3.2 
   NOT_ON_TIMER, 	// 15 - P3.1 
   NOT_ON_TIMER, 	// 16 - RST  
   NOT_ON_TIMER, 	// 17 - TST  
   T1A0,         	// 18 - P2.5, note: A0 output cannot be used with analogWrite 
   T0A0,         	// 19 - P1.5, note: A0 output cannot be used with analogWrite 
   NOT_ON_TIMER, 	// 20 - GND  
   NOT_ON_TIMER, 	// 21 - 5V   
   NOT_ON_TIMER, 	// 22 - GND  
   NOT_ON_TIMER, 	// 23 - P2.1  
   T0A1,         	// 24 - P2.3 
   T0A2,         	// 25 - P2.4 
   T1A2,         	// 26 - P3.7 
   NOT_ON_TIMER, 	// 27 - P2.6 
   NOT_ON_TIMER, 	// 28 - P2.7 
   NOT_ON_TIMER, 	// 29 - not connected 
   NOT_ON_TIMER, 	// 30 - not connected 
   NOT_ON_TIMER, 	// 31 - P4.7 
   NOT_ON_TIMER, 	// 32 - P4.6 
   T0B2,         	// 33 - P4.5 
   T0B1,         	// 34 - P4.4 
   T0B0,         	// 35 - P4.3 
   T0B2,         	// 36 - P4.2 
   T0B1,         	// 37 - P4.1 
   T0B0,         	// 38 - P4.0 
   T0A2,         	// 39 - P1.7 
   T0A1          	// 40 - P1.6 
};

const uint8_t digital_pin_to_port[] = {
       NOT_A_PIN, 	// 0,  pin count starts at 1 */
       NOT_A_PIN, 	// 1,  VCC */
       P2,        	// 2,  port P2.0 
       P3,        	// 3,  port P3.5 
       P3,        	// 4,  port P3.4 
       P1,        	// 5,  port P1.0 
       P3,        	// 6,  port P3.0 
       P3,        	// 7,  port P3.3 
       P1,        	// 8,  port P1.2 
       P1,        	// 9,  port P1.3 
       P1,        	// 10, port P1.4 
       P2,        	// 11, port P2.2 
       P1,        	// 12, port P1.1 
       P3,        	// 13, port P3.6 
       P3,        	// 14, port P3.2 
       P3,        	// 15, port P3.1 
       NOT_A_PIN, 	// 16, RST 
       NOT_A_PIN, 	// 17, TEST 
       P2,        	// 18, port P2.5 
       P1,        	// 19, port P1.5 
       NOT_A_PIN, 	// 20, GND 
       NOT_A_PIN, 	// 21, 5V 
       NOT_A_PIN, 	// 22, GND 
       P2,        	// 23, port P2.1 
       P2,        	// 24, port P2.3 
       P2,        	// 25, port P2.4 
       P3,        	// 26, port P3.7 
       P2,        	// 27, port P2.6 
       P2,        	// 28, port P2.7 
       NOT_A_PIN,	// 29, NC       - Possibly make 3V3? 
       NOT_A_PIN, 	// 30, NC       - Possibly make GND? 
       P4,        	// 31, port P4.7 
       P4,        	// 32, port P4.6 
       P4,        	// 33, port P4.5 
       P4,        	// 34, port P4.4 
       P4,        	// 35, port P4.3 
       P4,       	// 36, port P4.2 
       P4,       	// 37, port P4.1 
       P4,       	// 38, port P4.0 
       P1,       	// 39, port P1.7 
       P1         	// 40, port P1.6 
};

const uint8_t digital_pin_to_bit_mask[] = {
       NOT_A_PIN, // 0,  pin count starts at 1 
       NOT_A_PIN,      // 1,  VCC 
       BV(0),          // 2,  port P2.0 
       BV(5),          // 3,  port P3.5 
       BV(4),          // 4,  port P3.4 
       BV(0),          // 5,  port P1.0 
       BV(0),          // 6,  port P3.0 
       BV(3),          // 7,  port P3.3 
       BV(2),          // 8,  port P1.2 
       BV(3),          // 9,  port P1.3 
       BV(4),          // 10, port P1.4 
       BV(2),          // 11, port P2.2 
       BV(1),          // 12, port P1.1 
       BV(6),          // 13, port P3.6 
       BV(2),          // 14, port P3.2 
       BV(1),          // 15, port P3.1 
       NOT_A_PIN,      // 16, RST 
       NOT_A_PIN,      // 17, TEST 
       BV(5),          // 18, port P2.5 
       BV(5),          // 19, port P1.5 
       NOT_A_PIN,      // 20, GND 
       NOT_A_PIN,      // 21, 5V 
       NOT_A_PIN,      // 22, GND 
       BV(1),          // 23, port P2.1 
       BV(3),          // 24, port P2.3 
       BV(4),          // 25, port P2.4 
       BV(7),          // 26, port P3.7 
       BV(6),          // 27, port P2.6 
       BV(7),          // 28, port P2.7 
       NOT_A_PIN,      // 29, NC       - Possibly make 3V3? 
       NOT_A_PIN,      // 30, NC       - Possibly make GND? 
       BV(7),          // 31, port P4.7 
       BV(6),          // 32, port P4.6 
       BV(5),          // 33, port P4.5 
       BV(4),          // 34, port P4.4 
       BV(3),          // 35, port P4.3 
       BV(2),          // 36, port P4.2 
       BV(1),          // 37, port P4.1 
       BV(0),          // 38, port P4.0 
       BV(7),          // 39, port P1.7 
       BV(6)           // 40, port P1.6 
};

const uint32_t digital_pin_to_analog_in[] = {
        NOT_ON_ADC,     //  dummy   
        NOT_ON_ADC,     //  1 - VCC 
        0,     		  //  2 - P2.0 A0 
        NOT_ON_ADC,     //  3 - P3.5 
        NOT_ON_ADC,     //  4 - P3.4 
        NOT_ON_ADC,     //  5 - P1.0 
        NOT_ON_ADC,     //  6 - P3.0 
        NOT_ON_ADC,     //  7 - P3.3 
        NOT_ON_ADC,     //  8 - P1.2 
        NOT_ON_ADC,     //  9 - P1.3 
        NOT_ON_ADC,     //  10 - P1.4  - ? could be A ? 
        NOT_ON_ADC,     //  11 - P2.2 
        NOT_ON_ADC,     //  12 - P1.1 
        6,     		  //  13 - P3.6, A6 
        NOT_ON_ADC,     //  14 - P3.2 
        NOT_ON_ADC,     //  15 - P3.1 
        NOT_ON_ADC,     //  16 - RST 
        NOT_ON_ADC,     //  17 - TST 
        NOT_ON_ADC,     //  18 - P2.5 
        NOT_ON_ADC,     //  19 - P1.5 
        NOT_ON_ADC,     //  20 - GND 
        NOT_ON_ADC,     //  21 - 5V 
        NOT_ON_ADC,     //  22 - GND 
        1,              //  23 - P2.1 A1 
        3,              //  24 - P2.3 A3 
        4,              //  25 - P2.4 A4 
        7,              //  26 - P3.7 A7 
        NOT_ON_ADC,     //  27 - P2.6 
        NOT_ON_ADC,     //  28 - P2.7 
        NOT_ON_ADC,     //  29 - NC       - Possibly make 3V3? 
        NOT_ON_ADC,     //  30 - NC       - Possibly make GND? 
        NOT_ON_ADC,     //  31 - P4.7 
        NOT_ON_ADC,     //  32 - P4.6 - ? could be A ? 
        NOT_ON_ADC,     //  33 - P4.5 - ? could be A ? 
        NOT_ON_ADC,     //  34 - P4.4 - ? could be A ? 
        NOT_ON_ADC,     //  35 - P4.3 - ? could be A ? 
        NOT_ON_ADC,     //  36 - P4.2 
        NOT_ON_ADC,     //  37 - P4.1 
        NOT_ON_ADC,     //  38 - P4.0 
        NOT_ON_ADC,     //  39 - P1.7 
        NOT_ON_ADC,     //  40 - P1.6 
};

#endif
#endif
