#define n_cartas 24

typedef struct{
    char nome[50];
    char tipo;
    int hab[3];
    int trunfo;
} Baralho;

Baralho cartas[n_cartas];

typedef struct{
    char nome[50];
    char tipo;
    int hab[3];
    int trunfo;
} BaralhoEmbaralhado;

BaralhoEmbaralhado cartasEmbaralhadas[n_cartas];

typedef struct{
    char nome[50];
    char tipo;
    int hab[3];
    int trunfo;
}BaralhoA;

BaralhoA baralhoa[12];

typedef struct{
    char nome[50];
    char tipo;
    int hab[3];
    int trunfo;
}BaralhoB;

BaralhoB baralhob[12];
    
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
    cartas[3].hab[0] = 9;
    cartas[3].hab[1] = 9;
    cartas[3].hab[2] = 9;
    cartas[3].trunfo = 0;
    
    strcpy(cartas[4].nome, "E");
    cartas[4].tipo = 'C';
    cartas[4].hab[0] = 9;
    cartas[4].hab[1] = 9;
    cartas[4].hab[2] = 9;
    cartas[4].trunfo = 0;
    
    strcpy(cartas[5].nome, "F");
    cartas[5].tipo = 'C';
    cartas[5].hab[0] = 9;
    cartas[5].hab[1] = 9;
    cartas[5].hab[2] = 9;
    cartas[5].trunfo = 0;
    
    strcpy(cartas[6].nome, "G");
    cartas[6].tipo = 'C';
    cartas[6].hab[0] = 9;
    cartas[6].hab[1] = 9;
    cartas[6].hab[2] = 9;
    cartas[6].trunfo = 0;
    
    strcpy(cartas[7].nome, "H");
    cartas[7].tipo = 'C';
    cartas[7].hab[0] = 9;
    cartas[7].hab[1] = 9;
    cartas[7].hab[2] = 9;
    cartas[7].trunfo = 0;
    
    strcpy(cartas[8].nome, "I");
    cartas[8].tipo = 'C';
    cartas[8].hab[0] = 9;
    cartas[8].hab[1] = 9;
    cartas[8].hab[2] = 9;
    cartas[8].trunfo = 0;
    
    strcpy(cartas[9].nome, "J");
    cartas[9].tipo = 'C';
    cartas[9].hab[0] = 9;
    cartas[9].hab[1] = 9;
    cartas[9].hab[2] = 9;
    cartas[9].trunfo = 0;
    
    strcpy(cartas[10].nome, "K");
    cartas[10].tipo = 'C';
    cartas[10].hab[0] = 9;
    cartas[10].hab[1] = 9;
    cartas[10].hab[2] = 9;
    cartas[10].trunfo = 0;
    
    strcpy(cartas[11].nome, "L");
    cartas[11].tipo = 'C';
    cartas[11].hab[0] = 9;
    cartas[11].hab[1] = 9;
    cartas[11].hab[2] = 9;
    cartas[11].trunfo = 0;
    
    strcpy(cartas[12].nome, "M");
    cartas[12].tipo = 'C';
    cartas[12].hab[0] = 9;
    cartas[12].hab[1] = 9;
    cartas[12].hab[2] = 9;
    cartas[12].trunfo = 0;
    
    strcpy(cartas[13].nome, "N");
    cartas[13].tipo = 'C';
    cartas[13].hab[0] = 9;
    cartas[13].hab[1] = 9;
    cartas[13].hab[2] = 9;
    cartas[13].trunfo = 0;
    
    strcpy(cartas[14].nome, "O");
    cartas[14].tipo = 'C';
    cartas[14].hab[0] = 9;
    cartas[14].hab[1] = 9;
    cartas[14].hab[2] = 9;
    cartas[14].trunfo = 0;
    
    strcpy(cartas[15].nome, "P");
    cartas[15].tipo = 'C';
    cartas[15].hab[0] = 9;
    cartas[15].hab[1] = 9;
    cartas[15].hab[2] = 9;
    cartas[15].trunfo = 0;
    
    strcpy(cartas[16].nome, "Q");
    cartas[16].tipo = 'C';
    cartas[16].hab[0] = 9;
    cartas[16].hab[1] = 9;
    cartas[16].hab[2] = 9;
    cartas[16].trunfo = 0;
    
    strcpy(cartas[17].nome, "R");
    cartas[17].tipo = 'C';
    cartas[17].hab[0] = 9;
    cartas[17].hab[1] = 9;
    cartas[17].hab[2] = 9;
    cartas[17].trunfo = 0;
    
    strcpy(cartas[18].nome, "S");
    cartas[18].tipo = 'C';
    cartas[18].hab[0] = 9;
    cartas[18].hab[1] = 9;
    cartas[18].hab[2] = 9;
    cartas[18].trunfo = 0;
    
    strcpy(cartas[19].nome, "T");
    cartas[19].tipo = 'C';
    cartas[19].hab[0] = 9;
    cartas[19].hab[1] = 9;
    cartas[19].hab[2] = 9;
    cartas[19].trunfo = 0;
    
    strcpy(cartas[20].nome, "U");
    cartas[20].tipo = 'C';
    cartas[20].hab[0] = 9;
    cartas[20].hab[1] = 9;
    cartas[20].hab[2] = 9;
    cartas[20].trunfo = 0;
    
    strcpy(cartas[21].nome, "V");
    cartas[21].tipo = 'C';
    cartas[21].hab[0] = 9;
    cartas[21].hab[1] = 9;
    cartas[21].hab[2] = 9;
    cartas[21].trunfo = 0;
    
    strcpy(cartas[22].nome, "W");
    cartas[22].tipo = 'C';
    cartas[22].hab[0] = 9;
    cartas[22].hab[1] = 9;
    cartas[22].hab[2] = 9;
    cartas[22].trunfo = 0;
    
    strcpy(cartas[23].nome, "X");
    cartas[23].tipo = 'C';
    cartas[23].hab[0] = 9;
    cartas[23].hab[1] = 9;
    cartas[23].hab[2] = 9;
    cartas[23].trunfo = 0;
    
}

void sortear(){
    int sorteio[24], i, j;
    for (i = 0; i < 24; i++){
        sorteio[i] = i;
    }
    for (i = 0; i < 24; i++){
        j = 24 - (rand () % (24 - i)) - 1;
        int tmp = sorteio[j];
        sorteio[j] = sorteio[i];
        sorteio[i] = tmp;
    }
    embaralhar(sorteio, cartas, cartasEmbaralhadas);
}

void embaralhar(int sorteio[24], Baralho cartas[24], BaralhoEmbaralhado cartasEmbaralhadas[24]){
    int i, i_aleatorio;
    for(i=0; i<24; i++){
        i_aleatorio = sorteio[i];
        strcpy(cartasEmbaralhadas[i].nome, cartas[i_aleatorio].nome);
        cartasEmbaralhadas[i].tipo = cartas[i_aleatorio].tipo;
        cartasEmbaralhadas[i].hab[0] = cartas[i_aleatorio].hab[0];
        cartasEmbaralhadas[i].hab[1] = cartas[i_aleatorio].hab[1];
        cartasEmbaralhadas[i].hab[2] = cartas[i_aleatorio].hab[2];
        cartasEmbaralhadas[i].trunfo = cartas[i_aleatorio].trunfo;  
        //printf("%s, %c, %d, %d, %d, %d\n", cartas[i_aleatorio].nome, cartas[i_aleatorio].tipo, cartas[i_aleatorio].hab[0], cartas[i_aleatorio].hab[1], cartas[i_aleatorio].hab[2], cartas[i_aleatorio].trunfo);
    }
    separarCartas(cartasEmbaralhadas, baralhoa, baralhob);
}

void separarCartas(BaralhoEmbaralhado cartasEmbaralhadas[24], BaralhoA baralhoa[12], BaralhoB baralhob[12]){
    int i;
    //printf("Baralho A \n");
    for(i=0; i<12; i++){
        strcpy(baralhoa[i].nome, cartasEmbaralhadas[i].nome);
        baralhoa[i].tipo = cartasEmbaralhadas[i].tipo;
        baralhoa[i].hab[0] = cartasEmbaralhadas[i].hab[0];
        baralhoa[i].hab[1] = cartasEmbaralhadas[i].hab[1];
        baralhoa[i].hab[2] = cartasEmbaralhadas[i].hab[2];
        baralhoa[i].trunfo = cartasEmbaralhadas[i].trunfo;
        printf("%s, %c, %d, %d, %d, %d\n", baralhoa[i].nome, baralhoa[i].tipo, baralhoa[i].hab[0], baralhoa[i].hab[1], baralhoa[i].hab[2], baralhoa[i].trunfo);
    }
    //printf("\n");
    //printf("Baralho B \n");
    for(i=12; i<24; i++){
        strcpy(baralhob[i].nome, cartasEmbaralhadas[i].nome);
        baralhob[i].tipo = cartasEmbaralhadas[i].tipo;
        baralhob[i].hab[0] = cartasEmbaralhadas[i].hab[0];
        baralhob[i].hab[1] = cartasEmbaralhadas[i].hab[1];
        baralhob[i].hab[2] = cartasEmbaralhadas[i].hab[2];
        baralhob[i].trunfo = cartasEmbaralhadas[i].trunfo;
        //printf("%s, %c, %d, %d, %d, %d\n", baralhob[i].nome, baralhob[i].tipo, baralhob[i].hab[0], baralhob[i].hab[1], baralhob[i].hab[2], baralhob[i].trunfo);
        }
}