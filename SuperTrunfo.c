#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include "cartas.h"


Baralho cartas[24];

int main()
{
    system("clear");
    insertCartas();
    show();
    
    return 0;
}