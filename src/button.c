#include "button.h"


int Button_Read(void)
{
    static int count = 0;

    count++;

    if(count == 3)
    {
        count = 0;
        return 1;
    }

    return 0;
}