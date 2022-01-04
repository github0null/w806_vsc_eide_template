
#include <stdio.h>

#include "wm_hal.h"

void Error_Handler(void);

int main(void)
{
	SystemClock_Config(CPU_CLK_160M);

	printf("enter main\r\n");
	
	__HAL_RCC_GPIO_CLK_ENABLE();

	GPIO_InitTypeDef gpioDef = {
		.Mode = GPIO_MODE_OUTPUT,
		.Pin = GPIO_PIN_2,
		.Pull = GPIO_PULLDOWN,
	};

	HAL_GPIO_Init(GPIOB, &gpioDef);

	while (1)
	{
		printf(".");
		HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_2);
		HAL_Delay(500);
	}
}

void Error_Handler(void)
{
	while (1)
	{
	}
}

void assert_failed(uint8_t *file, uint32_t line)
{
	printf("Wrong parameters value: file %s on line %d\r\n", file, line);
}