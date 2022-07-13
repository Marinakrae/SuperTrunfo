#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include "cartas.h"


Baralho cartas[24];

int main()
{
    system("clear");
    insertCartas();
    sortear();
    
    return 0;
}


//1: gerar um vetor com os 24 indices em ordem aleatoria
//2: criar um novo vetor de structs que vai guardar todas as cartas de acordo com a ordem do vetor de indice aleatórios - cartas embaralhadas
//3: dividir o novo vetor na metade (em dois outros vetores de struct) - dividir as cartas entre os 2 jogadores
