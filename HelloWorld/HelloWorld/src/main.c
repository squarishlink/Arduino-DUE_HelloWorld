/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
#include <asf.h>
#include <io.h>
#include <stdio.h>
#include <ioport.h>

#include "Delay/Delay.h"
int main (void)
{
	board_init();
	sysclk_init();

	REG_PIOB_OER = (1 << 27); // Set Output for pin 27 on portC 
	
	while(1){
		Delay_s(1);
		REG_PIOB_SODR = (1 << 27); // Set the led high SODR = SET OUTPUT DATA REGISTER
		Delay_s(1);
		REG_PIOB_CODR = (1 << 27); // Set the led high CODR = CLEAR OUTPUT DATA REGISTER  
		
	}

}
