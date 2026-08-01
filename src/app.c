#include "app.h"
#include "button.h"
#include "led.h"


void APP_Run(void)
{

    if(Button_Read())
    {
        LED_Toggle();
    }

}