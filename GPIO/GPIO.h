/*
 * GPIO.h
 *
 *  Created on: Oct 27, 2022
 *      Author: Kunal
 */

#ifndef GPIO_GPIO_H_
#define GPIO_GPIO_H_


#include "main.h"




typedef struct GPIO_Typedef
{
    char PORT;
    uint8_t pin;
    bool io_direction;


}GPIO_Typedef;


#endif /* GPIO_GPIO_H_ */
