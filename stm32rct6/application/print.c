#include "stdio.h"
#include "stm32f1xx_hal.h"


extern UART_HandleTypeDef huart2;


#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif




/** 
  * @brief  Retargets the C library printf function to the USART. 
  * @param  None 
  * @retval None 
  */  
PUTCHAR_PROTOTYPE  
{  
	HAL_UART_Transmit(&huart2, (uint8_t *)&ch,1,0xFF);
	return ch;
} 



