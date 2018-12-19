#include "led.h"
#include "delay.h"
#include "sys.h"

 int main(void)
 {	
	delay_init();
	LED_Init();
	while(1)
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_8);
		GPIO_SetBits(GPIOD,GPIO_Pin_2);
		delay_ms(300);
		GPIO_SetBits(GPIOA,GPIO_Pin_8);
		GPIO_ResetBits(GPIOD,GPIO_Pin_2);
		delay_ms(300);
	}
}
