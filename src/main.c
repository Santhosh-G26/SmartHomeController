#include "app.h"
#include "led.h"


int main()
{

    LED_Init();


    while(1)
    {
        APP_Run();
    }


    return 0;
}