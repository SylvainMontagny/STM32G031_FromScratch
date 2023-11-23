#include <stdint.h>
#include <stm32g031xx.h>
#include "main.h"
#include "gpio.h"

void GPIO_Init(void){
	/* Clock Init */
	RCC->IOPENR   |= RCC_IOPENR_GPIOBEN | RCC_IOPENR_GPIOCEN;

	/* GPIO Init for User Led on USMB Board */
	GPIOB->MODER  &= ~(GPIO_MODER_MODE1_Msk);
	GPIOB->MODER  |= OUTPUT_MODE << GPIO_MODER_MODE1_Pos;	// PB1 Output LED

	/* GPIO Init for User Led on NUCLEO-G031K8 */
	GPIOC->MODER  &= ~(GPIO_MODER_MODE6_Msk);
	GPIOC->MODER  |= OUTPUT_MODE << GPIO_MODER_MODE6_Pos;	// PC6 Output LED
}

