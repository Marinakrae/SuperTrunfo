#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include "cartas.h"


int main()
{
    system("clear");
    insertCartas();
    sortear();
    jogo(baralhoa, baralhob);
    
    return 0;
}