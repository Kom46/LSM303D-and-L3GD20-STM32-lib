#if defined STM32F1XX
#include "stm32f10x.h"
#elif defined STM32F4XX
#include "stm32f4xx.h"
#endif
#include "lsm303d.h"
 
#define LSM303D_ADDR	0x3a
