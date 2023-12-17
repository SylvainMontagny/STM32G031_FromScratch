#include <stdint.h>
#include <stm32g031xx.h>
#include <stdio.h>
#include "main.h"
#include "gpio.h"
#include "timer.h"


int main(void)
{
	GPIO_Init();
	SYSTICK_Init();

	while(1){
		SYSTICK_Delay(1000);

		/* Led blinking on USMB Board */
		GPIOB->ODR 	 ^= 1 << GPIO_ODR_OD1_Pos;

		/* Led blinking on NUCLEO-G031K8 examen*/
		GPIOC->ODR 	 ^= 1 << GPIO_ODR_OD6_Pos;
	}
}

