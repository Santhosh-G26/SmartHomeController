#include<stdio.h>
#include "gpio.h"
void GPIO_Init(void){
    printf("GPIO Initialized\n");
}
void GPIO_Write(int a){
    if(a==0){
        printf("GPIO LOW\n");
        printf("LED OFF\n");
    }
    else{
        printf("GPIO HIGH\n");
        printf("LED ON");
    }
}