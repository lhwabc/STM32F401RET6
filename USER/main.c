#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "stm32f4xx.h"

int main(void)
{ 
	delay_init(84);		  //初始化延时函数
	LED_Init();		        //初始化LED端口
	
	while(1)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_3);  
		delay_ms(2000);  		   //延时2000ms
		GPIO_SetBits(GPIOB,GPIO_Pin_3);	   
		delay_ms(2000);  		   //延时2000ms
	}
}

