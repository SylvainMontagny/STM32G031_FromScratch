#include <stdint.h>
#include <stm32g031xx.h>
#include "main.h"
#include "gpio.h"

void GPIO_Init(void){
	/* Clock Init */
	RCC->IOPENR   |= RCC_IOPENR_GPIOBEN;

	/* GPIO Init */
	GPIOB->MODER  &= ~(GPIO_MODER_MODE1_Msk);
	GPIOB->MODER  |= OUTPUT_MODE << GPIO_MODER_MODE1_Pos;	// PB1 Output LED

}

