typedef struct{
    char nome[50];
    char tipo;
    int hab[3];
    int trunfo;
} Baralho;

Baralho cartas[24];
Baralho cartasEmbaralhadas[24];
Baralho baralhoa[12];
Baralho baralhob[12];
Baralho aux[24];
    
void insertCartas(){
    strcpy(cartas[0].nome, "A");
    cartas[0].tipo = 'A';
    cartas[0].hab[0] = 10;
    cartas[0].hab[1] = 10;
    cartas[0].hab[2] = 10;
    cartas[0].trunfo = 1;
    
    strcpy(cartas[1].nome, "B");
    cartas[1].tipo = 'A';
    cartas[1].hab[0] = 5;
    cartas[1].hab[1] = 8;
    cartas[1].hab[2] = 3;
    cartas[1].trunfo = 0;
            
    strcpy(cartas[2].nome, "C");
    cartas[2].tipo = 'B';    
    cartas[2].hab[0] = 4;
    cartas[2].hab[1] = 7;
    cartas[2].hab[2] = 9;
    cartas[2].trunfo = 0;
            
    strcpy(cartas[3].nome, "D");
    cartas[3].tipo = 'C';
    cartas[3].hab[0] = 3;
    cartas[3].hab[1] = 7;
    cartas[3].hab[2] = 5;
    cartas[3].trunfo = 0;
    
    strcpy(cartas[4].nome, "E");
    cartas[4].tipo = 'C';
    cartas[4].hab[0] = 8;
    cartas[4].hab[1] = 2;
    cartas[4].hab[2] = 6;
    cartas[4].trunfo = 0;
    
    strcpy(cartas[5].nome, "F");
    cartas[5].tipo = 'C';
    cartas[5].hab[0] = 4;
    cartas[5].hab[1] = 9;
    cartas[5].hab[2] = 3;
    cartas[5].trunfo = 0;
    
    strcpy(cartas[6].nome, "G");
    cartas[6].tipo = 'C';
    cartas[6].hab[0] = 7;
    cartas[6].hab[1] = 1;
    cartas[6].hab[2] = 8;
    cartas[6].trunfo = 0;
    
    strcpy(cartas[7].nome, "H");
    cartas[7].tipo = 'C';
    cartas[7].hab[0] = 1;
    cartas[7].hab[1] = 3;
    cartas[7].hab[2] = 7;
    cartas[7].trunfo = 0;
    
    strcpy(cartas[8].nome, "I");
    cartas[8].tipo = 'C';
    cartas[8].hab[0] = 5;
    cartas[8].hab[1] = 9;
    cartas[8].hab[2] = 1;
    cartas[8].trunfo = 0;
    
    strcpy(cartas[9].nome, "J");
    cartas[9].tipo = 'C';
    cartas[9].hab[0] = 3;
    cartas[9].hab[1] = 10;
    cartas[9].hab[2] = 8;
    cartas[9].trunfo = 0;
    
    strcpy(cartas[10].nome, "K");
    cartas[10].tipo = 'C';
    cartas[10].hab[0] = 3;
    cartas[10].hab[1] = 7;
    cartas[10].hab[2] = 2;
    cartas[10].trunfo = 0;
    
    strcpy(cartas[11].nome, "L");
    cartas[11].tipo = 'C';
    cartas[11].hab[0] = 8;
    cartas[11].hab[1] = 9;
    cartas[11].hab[2] = 7;
    cartas[11].trunfo = 0;
    
    strcpy(cartas[12].nome, "M");
    cartas[12].tipo = 'C';
    cartas[12].hab[0] = 3;
    cartas[12].hab[1] = 6;
    cartas[12].hab[2] = 2;
    cartas[12].trunfo = 0;
    
    strcpy(cartas[13].nome, "N");
    cartas[13].tipo = 'C';
    cartas[13].hab[0] = 10;
    cartas[13].hab[1] = 1;
    cartas[13].hab[2] = 4;
    cartas[13].trunfo = 0;
    
    strcpy(cartas[14].nome, "O");
    cartas[14].tipo = 'C';
    cartas[14].hab[0] = 6;
    cartas[14].hab[1] = 3;
    cartas[14].hab[2] = 9;
    cartas[14].trunfo = 0;
    
    strcpy(cartas[15].nome, "P");
    cartas[15].tipo = 'C';
    cartas[15].hab[0] = 9;
    cartas[15].hab[1] = 4;
    cartas[15].hab[2] = 2;
    cartas[15].trunfo = 0;
    
    strcpy(cartas[16].nome, "Q");
    cartas[16].tipo = 'C';
    cartas[16].hab[0] = 6;
    cartas[16].hab[1] = 5;
    cartas[16].hab[2] = 5;
    cartas[16].trunfo = 0;
    
    strcpy(cartas[17].nome, "R");
    cartas[17].tipo = 'C';
    cartas[17].hab[0] = 1;
    cartas[17].hab[1] = 9;
    cartas[17].hab[2] = 8;
    cartas[17].trunfo = 0;
    
    strcpy(cartas[18].nome, "S");
    cartas[18].tipo = 'C';
    cartas[18].hab[0] = 4;
    cartas[18].hab[1] = 3;
    cartas[18].hab[2] = 7;
    cartas[18].trunfo = 0;
    
    strcpy(cartas[19].nome, "T");
    cartas[19].tipo = 'C';
    cartas[19].hab[0] = 5;
    cartas[19].hab[1] = 5;
    cartas[19].hab[2] = 10;
    cartas[19].trunfo = 0;
    
    strcpy(cartas[20].nome, "U");
    cartas[20].tipo = 'C';
    cartas[20].hab[0] = 8;
    cartas[20].hab[1] = 6;
    cartas[20].hab[2] = 3;
    cartas[20].trunfo = 0;
    
    strcpy(cartas[21].nome, "V");
    cartas[21].tipo = 'C';
    cartas[21].hab[0] = 6;
    cartas[21].hab[1] = 4;
    cartas[21].hab[2] = 2;
    cartas[21].trunfo = 0;
    
    strcpy(cartas[22].nome, "W");
    cartas[22].tipo = 'C';
    cartas[22].hab[0] = 9;
    cartas[22].hab[1] = 9;
    cartas[22].hab[2] = 9;
    cartas[22].trunfo = 0;
    
    strcpy(cartas[23].nome, "X");
    cartas[23].tipo = 'C';
    cartas[23].hab[0] = 6;
    cartas[23].hab[1] = 6;
    cartas[23].hab[2] = 6;
    cartas[23].trunfo = 0;
    
}

void sortear(){
    int sorteio[24], i, j, aux;
    srand(time(NULL));
    for (i = 0; i < 24; i++){
        sorteio[i] = i;
    }
    for (i = 0; i < 24; i++){
        j = 24 - (rand () % (24 - i)) - 1;
        aux = sorteio[j];
        sorteio[j] = sorteio[i];
        sorteio[i] = aux;
    }
    embaralhar(sorteio, cartas, cartasEmbaralhadas);
}

void embaralhar(int sorteio[24], Baralho cartas[24], Baralho cartasEmbaralhadas[24]){
    int i, i_aleatorio;
    for(i=0; i<24; i++){
        i_aleatorio = sorteio[i];
        strcpy(cartasEmbaralhadas[i].nome, cartas[i_aleatorio].nome);
        cartasEmbaralhadas[i].tipo = cartas[i_aleatorio].tipo;
        cartasEmbaralhadas[i].hab[0] = cartas[i_aleatorio].hab[0];
        cartasEmbaralhadas[i].hab[1] = cartas[i_aleatorio].hab[1];
        cartasEmbaralhadas[i].hab[2] = cartas[i_aleatorio].hab[2];
        cartasEmbaralhadas[i].trunfo = cartas[i_aleatorio].trunfo;  
    }
    separarCartas(cartasEmbaralhadas, baralhoa, baralhob);
}

void separarCartas(Baralho cartasEmbaralhadas[24], Baralho baralhoa[12], Baralho baralhob[12]){
    int i;
    for(i=0; i<12; i++){
        strcpy(baralhoa[i].nome, cartasEmbaralhadas[i].nome);
        baralhoa[i].tipo = cartasEmbaralhadas[i].tipo;
        baralhoa[i].hab[0] = cartasEmbaralhadas[i].hab[0];
        baralhoa[i].hab[1] = cartasEmbaralhadas[i].hab[1];
        baralhoa[i].hab[2] = cartasEmbaralhadas[i].hab[2];
        baralhoa[i].trunfo = cartasEmbaralhadas[i].trunfo;
    }
    int j; 
    i = 12;
    for(j=0; j<12; j++){
        strcpy(baralhob[j].nome, cartasEmbaralhadas[i].nome);
        baralhob[j].tipo = cartasEmbaralhadas[i].tipo;
        baralhob[j].hab[0] = cartasEmbaralhadas[i].hab[0];
        baralhob[j].hab[1] = cartasEmbaralhadas[i].hab[1];
        baralhob[j].hab[2] = cartasEmbaralhadas[i].hab[2];
        baralhob[j].trunfo = cartasEmbaralhadas[i].trunfo;
        i++;
    }
}

void juntarCartas(Baralho aux[24], Baralho baralhoa[12], Baralho baralhob[12], int i, int fimA, int fimB, int teste){
    int j=1;
    if(teste == 0){
        strcpy(baralhoa[fimA-1].nome, baralhoa[0].nome);
        baralhoa[fimA-1].tipo = baralhoa[0].tipo;
        baralhoa[fimA-1].hab[0] = baralhoa[0].hab[0];
        baralhoa[fimA-1].hab[1] = baralhoa[0].hab[1];
        baralhoa[fimA-1].hab[2] = baralhoa[0].hab[2];
        baralhoa[fimA-1].trunfo = baralhoa[0].trunfo;
        strcpy(baralhoa[fimA].nome, baralhob[0].nome);
        baralhoa[fimA].tipo = baralhob[0].tipo;
        baralhoa[fimA].hab[0] = baralhob[0].hab[0];
        baralhoa[fimA].hab[1] = baralhob[0].hab[1];
        baralhoa[fimA].hab[2] = baralhob[0].hab[2];
        baralhoa[fimA].trunfo = baralhob[0].trunfo;
        for(i=0; i<fimA-1; i++){
            strcpy(baralhoa[i].nome, baralhoa[j].nome);
            baralhoa[i].tipo = baralhoa[j].tipo;
            baralhoa[i].hab[0] = baralhoa[j].hab[0];
            baralhoa[i].hab[1] = baralhoa[j].hab[1];
            baralhoa[i].hab[2] = baralhoa[j].hab[2];
            baralhoa[i].trunfo = baralhoa[j].trunfo;
            j++;
        }
    } else if (teste == 1){
        strcpy(baralhob[fimB-1].nome, baralhob[0].nome);
        baralhob[fimB-1].tipo = baralhob[0].tipo;
        baralhob[fimB-1].hab[0] = baralhob[0].hab[0];
        baralhob[fimB-1].hab[1] = baralhob[0].hab[1];
        baralhob[fimB-1].hab[2] = baralhob[0].hab[2];
        baralhob[fimB-1].trunfo = baralhob[0].trunfo;
        strcpy(baralhoa[fimA].nome, baralhoa[0].nome);
        baralhob[fimB].tipo = baralhoa[0].tipo;
        baralhob[fimB].hab[0] = baralhoa[0].hab[0];
        baralhob[fimB].hab[1] = baralhoa[0].hab[1];
        baralhob[fimB].hab[2] = baralhoa[0].hab[2];
        baralhob[fimB].trunfo = baralhoa[0].trunfo;
        for(i=0; i<fimB-1; i++){
            strcpy(baralhob[i].nome, baralhob[j].nome);
            baralhob[i].tipo = baralhob[j].tipo;
            baralhob[i].hab[0] = baralhob[j].hab[0];
            baralhob[i].hab[1] = baralhob[j].hab[1];
            baralhob[i].hab[2] = baralhob[j].hab[2];
            baralhob[i].trunfo = baralhob[j].trunfo;
            j++;
        }
    }
}

void jogo(Baralho baralhoa[12], Baralho baralhob[12]){
    int i=0, j=0, posAleatoria=-1, fimA=12, fimB=12, teste=-1;
    if(posAleatoria == -1){
        posAleatoria = rand()%3;
    }
    while(fimA < 24 && fimB <24){
        printf("Cartas jogador A: %d\n", fimA);
        printf("Cartas jogador B: %d\n", fimB);
        printf("%s %c %d\t x \t%s %c %d\n", baralhoa[i].nome, baralhoa[i].tipo, baralhoa[i].hab[posAleatoria], baralhob[i].nome, baralhob[i].tipo, baralhob[i].hab[posAleatoria]);
        posAleatoria = -1;
        if(posAleatoria == -1){
            posAleatoria = rand()%3;
        }
        getchar();
        if(baralhoa[i].hab[posAleatoria] == baralhob[i].hab[posAleatoria]){
            strcpy(aux[i].nome, baralhoa[j].nome);
            aux[i].tipo = baralhoa[j].tipo;
            aux[i].hab[0] = baralhoa[j].hab[0];
            aux[i].hab[1] = baralhoa[j].hab[1];
            aux[i].hab[2] = baralhoa[j].hab[2];
            aux[i].trunfo = baralhoa[j].trunfo;
            i++;
            strcpy(aux[i].nome, baralhob[j].nome);
            aux[i].tipo = baralhob[j].tipo;
            aux[i].hab[0] = baralhob[j].hab[0];
            aux[i].hab[1] = baralhob[j].hab[1];
            aux[i].hab[2] = baralhob[j].hab[2];
            aux[i].trunfo = baralhob[j].trunfo;
            if(posAleatoria == -1){
                posAleatoria = rand()%3;
            }
        }
        if(baralhoa[i].hab[posAleatoria] > baralhob[i].hab[posAleatoria]){
            fimA++;
            fimB--;
            teste=0;
            posAleatoria = -1;
            if(posAleatoria == -1){
                posAleatoria = rand()%3;
            }
            juntarCartas(aux, baralhoa, baralhob, i, fimA, fimB, teste);
        } else if(baralhob[i].hab[posAleatoria] > baralhoa[i].hab[posAleatoria]) {
            fimA--;
            fimB++;
            teste = 1;
            posAleatoria = -1;
            if(posAleatoria == -1){
                posAleatoria = rand()%3;
            }
            juntarCartas(aux, baralhoa, baralhob, i, fimA, fimB, teste);
        }
    }
}