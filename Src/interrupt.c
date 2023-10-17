
#include <stdint.h>
#include "interrupt.h"

extern uint32_t ticks;

// Interrupt Handler for SysTick Interrupt
void SysTick_Handler(void){
	ticks++;
}
