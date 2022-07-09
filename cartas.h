#define n_cartas 24

typedef struct{
    char nome[50];
    char tipo;
    int hab[3];
    int trunfo;
} Baralho;

Baralho cartas[n_cartas];
    
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

void show(){
    for(int i=0;i<n_cartas;i++){
        printf("%s, %c, %d, %d, %d, %d\n", cartas[i].nome, cartas[i].tipo, cartas[i].hab[0], cartas[i].hab[1], cartas[i].hab[2], cartas[i].trunfo);
    }
}

int sortear(){
    int sorteio[23], i, j;
    for (i = 0; i < 24; i++){
        sorteio[i] = i;
    }
    for (i = 0; i < 24; i++){
        j = 24 - (rand () % (24 - k)) - 1;
        int tmp = sorteio[j];
        sorteio[j] = sorteio[i];
        sorteio[i] = tmp;
        printf ("%d ", sorteio[i]);      
    }
    return sorteio;
}

typedef struct{
    char nome[50];
    char tipo;
    int hab[3];
    int trunfo;
} BaralhoEmbaralhado;

BaralhoEmbaralhado cartasEmbaralhadas[n_cartas];

void embaralhar(int sorteio[23]){
    int i, i_aleatorio;
    for(i=0; i<24; i++){9
        //atribuir a posição i de cartasEmbaralhadas, a posição i_aleatorio que vai ser o indice correspondente do vetor sorteio
        i_aleatorio = sorteio[i];
        cartasEmbaralhadas[i] = cartas[i_aleatorio];v                                                                                                                                           zsxxxxx 2222222222222222222222222222222222222222222222222222    x6777777777777
    }
}