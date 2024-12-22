#include <stdint.h>
#include <stm32g031xx.h>
#include "main.h"
#include "gpio.h"

void GPIO_Init(void){
	RCC->IOPENR   |= RCC_IOPENR_GPIOBEN | RCC_IOPENR_GPIOCEN;
	GPIOC->MODER  &= ~(GPIO_MODER_MODE6_Msk);
	GPIOC->MODER  |= OUTPUT_MODE << GPIO_MODER_MODE6_Pos;	// PC6 Output LED
}

