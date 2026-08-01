#include<stdio.h>
#include "led.h"


static int led_state = 0;


void LED_Init(void)
{
    led_state = 0;

    printf("LED OFF\n");
}


void LED_Toggle(void)
{

    if(led_state == 0)
    {
        led_state = 1;

        printf("LED ON\n");
    }
    else
    {
        led_state = 0;

        printf("LED OFF\n");
    }

}