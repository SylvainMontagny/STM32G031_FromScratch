

#ifndef TIMER_H_
#define TIMER_H_

void SYSTICK_Init(void);
void SYSTICK_Delay(uint32_t Delay);
uint32_t SYSTICK_Get(void);

#endif
