#include <stdio.h>
#include <stdlib.h>

struct stats{               //Basic structure of statuses
    char name[50];
    int actionIndex;
    float hp,
    hap,
    hyg,
    soc,
    mon; //hp = health, hyg = hygiene, mon = money, hap = happiness, soc = social
    char dialogue[100];
};


/*To be added in the future :
    -Race/Class/Type
    -Stats multiplier
    -Time
*/