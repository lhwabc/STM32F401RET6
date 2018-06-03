#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "stm32f4xx.h"

int main(void)
{ 
	delay_init(84);		  //��ʼ����ʱ����
	LED_Init();		        //��ʼ��LED�˿�
	
	while(1)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_3);  
		delay_ms(2000);  		   //��ʱ2000ms
		GPIO_SetBits(GPIOB,GPIO_Pin_3);	   
		delay_ms(2000);  		   //��ʱ2000ms
	}
}

