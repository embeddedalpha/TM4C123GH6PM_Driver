/*
 * GPIO.c
 *
 *  Created on: Oct 27, 2022
 *      Author: Kunal
 */



#include "GPIO.h"





uint8_t  GPIO_Init(char port, uint8_t pin, int mode)
{
    uint8_t temp;
    if(port == 'A' || port == 'a')
    {
        SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R0;
        temp = 1;
    }else if(port == 'B' || port == 'b')
    {
        SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R1;
        temp = 1;
    }else if(port == 'C' || port == 'c')
    {
        SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R2;
        temp = 1;
    }else if(port == 'D' || port == 'D')
    {
        SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R3;
        temp = 1;
    }else if(port == 'E' || port == 'e')
    {
        SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R4;
        temp = 1;
    }else if(port == 'F' || port == 'f')
    {
        SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R5;
        temp = 1;
    }
    else
    {
        temp = -1;
    }

    GPIO_PORTA_DEN_R
}
