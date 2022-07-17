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
Baralho primeiraCarta[1];
Baralho empate[24];

int fimA=12, fimB=12;
    
void insertCartas(){
    strcpy(cartas[0].nome, "Grêmio");
    cartas[0].tipo = 'B';
    cartas[0].hab[0] = 10;
    cartas[0].hab[1] = 10;
    cartas[0].hab[2] = 10;
    cartas[0].trunfo = 1;
    
    strcpy(cartas[1].nome, "Palmeiras");
    cartas[1].tipo = 'A';
    cartas[1].hab[0] = 5;
    cartas[1].hab[1] = 8;
    cartas[1].hab[2] = 3;
    cartas[1].trunfo = 0;
            
    strcpy(cartas[2].nome, "Flamengo");
    cartas[2].tipo = 'C';    
    cartas[2].hab[0] = 4;
    cartas[2].hab[1] = 7;
    cartas[2].hab[2] = 9;
    cartas[2].trunfo = 0;
            
    strcpy(cartas[3].nome, "Internacional");
    cartas[3].tipo = 'A';
    cartas[3].hab[0] = 3;
    cartas[3].hab[1] = 7;
    cartas[3].hab[2] = 5;
    cartas[3].trunfo = 0;
    
    strcpy(cartas[4].nome, "Santos");
    cartas[4].tipo = 'B';
    cartas[4].hab[0] = 8;
    cartas[4].hab[1] = 2;
    cartas[4].hab[2] = 6;
    cartas[4].trunfo = 0;
    
    strcpy(cartas[5].nome, "Corinthians");
    cartas[5].tipo = 'A';
    cartas[5].hab[0] = 4;
    cartas[5].hab[1] = 9;
    cartas[5].hab[2] = 3;
    cartas[5].trunfo = 0;
    
    strcpy(cartas[6].nome, "São Paulo");
    cartas[6].tipo = 'C';
    cartas[6].hab[0] = 7;
    cartas[6].hab[1] = 1;
    cartas[6].hab[2] = 8;
    cartas[6].trunfo = 0;
    
    strcpy(cartas[7].nome, "Ceará");
    cartas[7].tipo = 'B';
    cartas[7].hab[0] = 1;
    cartas[7].hab[1] = 3;
    cartas[7].hab[2] = 7;
    cartas[7].trunfo = 0;
    
    strcpy(cartas[8].nome, "Coritiba");
    cartas[8].tipo = 'C';
    cartas[8].hab[0] = 5;
    cartas[8].hab[1] = 9;
    cartas[8].hab[2] = 1;
    cartas[8].trunfo = 0;
    
    strcpy(cartas[9].nome, "Fluminense");
    cartas[9].tipo = 'A';
    cartas[9].hab[0] = 3;
    cartas[9].hab[1] = 10;
    cartas[9].hab[2] = 8;
    cartas[9].trunfo = 0;
    
    strcpy(cartas[10].nome, "Fortaleza");
    cartas[10].tipo = 'B';
    cartas[10].hab[0] = 3;
    cartas[10].hab[1] = 7;
    cartas[10].hab[2] = 2;
    cartas[10].trunfo = 0;
    
    strcpy(cartas[11].nome, "Atlético Mineiro");
    cartas[11].tipo = 'C';
    cartas[11].hab[0] = 8;
    cartas[11].hab[1] = 9;
    cartas[11].hab[2] = 7;
    cartas[11].trunfo = 0;
    
    strcpy(cartas[12].nome, "Athletico Paranaense");
    cartas[12].tipo = 'B';
    cartas[12].hab[0] = 3;
    cartas[12].hab[1] = 6;
    cartas[12].hab[2] = 2;
    cartas[12].trunfo = 0;
    
    strcpy(cartas[13].nome, "Vasco");
    cartas[13].tipo = 'B';
    cartas[13].hab[0] = 10;
    cartas[13].hab[1] = 1;
    cartas[13].hab[2] = 4;
    cartas[13].trunfo = 0;
    
    strcpy(cartas[14].nome, "Avaí");
    cartas[14].tipo = 'B';
    cartas[14].hab[0] = 6;
    cartas[14].hab[1] = 3;
    cartas[14].hab[2] = 9;
    cartas[14].trunfo = 0;
    
    strcpy(cartas[15].nome, "Naútico");
    cartas[15].tipo = 'C';
    cartas[15].hab[0] = 9;
    cartas[15].hab[1] = 4;
    cartas[15].hab[2] = 2;
    cartas[15].trunfo = 0;
    
    strcpy(cartas[16].nome, "Juventude");
    cartas[16].tipo = 'A';
    cartas[16].hab[0] = 6;
    cartas[16].hab[1] = 5;
    cartas[16].hab[2] = 5;
    cartas[16].trunfo = 0;
    
    strcpy(cartas[17].nome, "Lazio");
    cartas[17].tipo = 'C';
    cartas[17].hab[0] = 1;
    cartas[17].hab[1] = 9;
    cartas[17].hab[2] = 8;
    cartas[17].trunfo = 0;
    
    strcpy(cartas[18].nome, "Manchester City");
    cartas[18].tipo = 'A';
    cartas[18].hab[0] = 4;
    cartas[18].hab[1] = 3;
    cartas[18].hab[2] = 7;
    cartas[18].trunfo = 0;
    
    strcpy(cartas[19].nome, "Juventus");
    cartas[19].tipo = 'B';
    cartas[19].hab[0] = 5;
    cartas[19].hab[1] = 5;
    cartas[19].hab[2] = 10;
    cartas[19].trunfo = 0;
    
    strcpy(cartas[20].nome, "Real Madrid");
    cartas[20].tipo = 'A';
    cartas[20].hab[0] = 8;
    cartas[20].hab[1] = 6;
    cartas[20].hab[2] = 3;
    cartas[20].trunfo = 0;
    
    strcpy(cartas[21].nome, "Milan");
    cartas[21].tipo = 'C';
    cartas[21].hab[0] = 6;
    cartas[21].hab[1] = 4;
    cartas[21].hab[2] = 2;
    cartas[21].trunfo = 0;
    
    strcpy(cartas[22].nome, "Barcelona");
    cartas[22].tipo = 'A';
    cartas[22].hab[0] = 9;
    cartas[22].hab[1] = 9;
    cartas[22].hab[2] = 9;
    cartas[22].trunfo = 0;
    
    strcpy(cartas[23].nome, "Chelsea");
    cartas[23].tipo = 'B';
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

/*void juntarCartas(Baralho aux[24], Baralho baralhoa[12], Baralho baralhob[12], int fimA, int fimB, int vencedor){
    int j=1, k, l;
    if(teste == 0){ //a ganhou
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
        for(i=0; i<fimA; i++){
            strcpy(baralhoa[i].nome, baralhoa[j].nome);
            baralhoa[i].tipo = baralhoa[j].tipo;
            baralhoa[i].hab[0] = baralhoa[j].hab[0];
            baralhoa[i].hab[1] = baralhoa[j].hab[1];
            baralhoa[i].hab[2] = baralhoa[j].hab[2];
            baralhoa[i].trunfo = baralhoa[j].trunfo;
            printf("%d cartas A: %s %c %d\n", i, baralhoa[i].nome, baralhoa[i].tipo, baralhoa[i].hab[0]);
            j++;
        }
        j=1;
        for(k=0; k<fimB; k++){
            strcpy(baralhob[k].nome, baralhob[j].nome);
            baralhob[k].tipo = baralhob[j].tipo;
            baralhob[k].hab[0] = baralhob[j].hab[0];
            baralhob[k].hab[1] = baralhob[j].hab[1];
            baralhob[k].hab[2] = baralhob[j].hab[2];
            baralhob[k].trunfo = baralhob[j].trunfo;
            printf("%d cartas B: %s %c %d\n", k, baralhob[k].nome, baralhob[k].tipo, baralhob[k].hab[0]);
            j++;
        }
        
    } else if (teste == 1){ //b ganhou 
        strcpy(baralhob[fimB-1].nome, baralhob[0].nome);
        baralhob[fimB-1].tipo = baralhob[0].tipo;
        baralhob[fimB-1].hab[0] = baralhob[0].hab[0];
        baralhob[fimB-1].hab[1] = baralhob[0].hab[1];
        baralhob[fimB-1].hab[2] = baralhob[0].hab[2];
        baralhob[fimB-1].trunfo = baralhob[0].trunfo;
        strcpy(baralhob[fimB].nome, baralhoa[0].nome);
        baralhob[fimB].tipo = baralhoa[0].tipo;
        baralhob[fimB].hab[0] = baralhoa[0].hab[0];
        baralhob[fimB].hab[1] = baralhoa[0].hab[1];
        baralhob[fimB].hab[2] = baralhoa[0].hab[2];
        baralhob[fimB].trunfo = baralhoa[0].trunfo;
        for(i=0; i<fimB; i++){
            strcpy(baralhob[i].nome, baralhob[j].nome);
            baralhob[i].tipo = baralhob[j].tipo;
            baralhob[i].hab[0] = baralhob[j].hab[0];
            baralhob[i].hab[1] = baralhob[j].hab[1];
            baralhob[i].hab[2] = baralhob[j].hab[2];
            baralhob[i].trunfo = baralhob[j].trunfo;
            printf("%d cartas B: %s %c %d\n", i, baralhob[i].nome, baralhob[i].tipo, baralhob[i].hab[0]);
            j++;
        }
        j=1;
        for(l=0; l<fimA; l++){
            strcpy(baralhoa[l].nome, baralhoa[j].nome);
            baralhoa[l].tipo = baralhoa[j].tipo;
            baralhoa[l].hab[0] = baralhoa[j].hab[0];
            baralhoa[l].hab[1] = baralhoa[j].hab[1];
            baralhoa[l].hab[2] = baralhoa[j].hab[2];
            baralhoa[l].trunfo = baralhoa[j].trunfo;
            printf("%d cartas A: %s %c %d\n", l, baralhoa[l].nome, baralhoa[l].tipo, baralhoa[l].hab[0]);
            j++;
        }
    }
}*/

void reordenarCartas(Baralho primeiraCarta[1], Baralho baralhoa[12], Baralho baralhob[12], int vencedor){
    // a venceu
    int i, j=1;
    if(vencedor == 0){
        fimA++;
        strcpy(primeiraCarta[0].nome, baralhoa[0].nome);
        primeiraCarta[0].tipo = baralhoa[0].tipo;
        primeiraCarta[0].hab[0] = baralhoa[0].hab[0];
        primeiraCarta[0].hab[1] = baralhoa[0].hab[1];
        primeiraCarta[0].hab[2] = baralhoa[0].hab[2];
        primeiraCarta[0].trunfo = baralhoa[0].trunfo;
        printf("primeira carta A VENCEDOR: %s %c %d\n", primeiraCarta[0].nome, primeiraCarta[0].tipo, primeiraCarta[0].hab[0]);
        for(i=0; i<fimA-1; i++){
            strcpy(baralhoa[i].nome, baralhoa[j].nome);
            baralhoa[i].tipo = baralhoa[j].tipo;
            baralhoa[i].hab[0] = baralhoa[j].hab[0];
            baralhoa[i].hab[1] = baralhoa[j].hab[1];
            baralhoa[i].hab[2] = baralhoa[j].hab[2];
            baralhoa[i].trunfo = baralhoa[j].trunfo;
            printf("%d cartas A VENCEDOR: %s %c %d\n", i, baralhoa[i].nome, baralhoa[i].tipo, baralhoa[i].hab[0]);
            j++;
        }
        strcpy(baralhoa[fimA-1].nome, primeiraCarta[0].nome);
        baralhoa[fimA-1].tipo = primeiraCarta[0].tipo;
        baralhoa[fimA-1].hab[0] = primeiraCarta[0].hab[0];
        baralhoa[fimA-1].hab[1] = primeiraCarta[0].hab[1];
        baralhoa[fimA-1].hab[2] = primeiraCarta[0].hab[2];
        baralhoa[fimA-1].trunfo = primeiraCarta[0].trunfo;
        strcpy(baralhoa[fimA].nome, baralhob[0].nome);
        baralhoa[fimA].tipo = baralhob[0].tipo;
        baralhoa[fimA].hab[0] = baralhob[0].hab[0];
        baralhoa[fimA].hab[1] = baralhob[0].hab[1];
        baralhoa[fimA].hab[2] = baralhob[0].hab[2];
        baralhoa[fimA].trunfo = baralhob[0].trunfo;
        j=1;
        for(i=0; i<fimB; i++){
            strcpy(baralhob[i].nome, baralhob[j].nome);
            baralhob[i].tipo = baralhob[j].tipo;
            baralhob[i].hab[0] = baralhob[j].hab[0];
            baralhob[i].hab[1] = baralhob[j].hab[1];
            baralhob[i].hab[2] = baralhob[j].hab[2];
            baralhob[i].trunfo = baralhob[j].trunfo;
            printf("%d cartas B PERDEDOR: %s %c %d\n", i, baralhob[i].nome, baralhob[i].tipo, baralhob[i].hab[0]);
            j++;
        }
        fimB--;
    } else if(vencedor == 1){
        fimB++;
        strcpy(primeiraCarta[0].nome, baralhob[0].nome);
        primeiraCarta[0].tipo = baralhob[0].tipo;
        primeiraCarta[0].hab[0] = baralhob[0].hab[0];
        primeiraCarta[0].hab[1] = baralhob[0].hab[1];
        primeiraCarta[0].hab[2] = baralhob[0].hab[2];
        primeiraCarta[0].trunfo = baralhob[0].trunfo;
        printf("primeira carta B VENCEDOR: %s %c %d\n", primeiraCarta[0].nome, primeiraCarta[0].tipo, primeiraCarta[0].hab[0]);
        for(i=0; i<fimB-1; i++){
            strcpy(baralhob[i].nome, baralhob[j].nome);
            baralhob[i].tipo = baralhob[j].tipo;
            baralhob[i].hab[0] = baralhob[j].hab[0];
            baralhob[i].hab[1] = baralhob[j].hab[1];
            baralhob[i].hab[2] = baralhob[j].hab[2];
            baralhob[i].trunfo = baralhob[j].trunfo;
            printf("%d cartas B VENCEDOR: %s %c %d\n", i, baralhob[i].nome, baralhob[i].tipo, baralhob[i].hab[0]);
            j++;
        }
        strcpy(baralhob[fimB-1].nome, primeiraCarta[0].nome);
        baralhob[fimB-1].tipo = primeiraCarta[0].tipo;
        baralhob[fimB-1].hab[0] = primeiraCarta[0].hab[0];
        baralhob[fimB-1].hab[1] = primeiraCarta[0].hab[1];
        baralhob[fimB-1].hab[2] = primeiraCarta[0].hab[2];
        baralhob[fimB-1].trunfo = primeiraCarta[0].trunfo;
        strcpy(baralhob[fimB].nome, baralhoa[0].nome);
        baralhob[fimB].tipo = baralhoa[0].tipo;
        baralhob[fimB].hab[0] = baralhoa[0].hab[0];
        baralhob[fimB].hab[1] = baralhoa[0].hab[1];
        baralhob[fimB].hab[2] = baralhoa[0].hab[2];
        baralhob[fimB].trunfo = baralhoa[0].trunfo;
        j=1;
        for(i=0; i<fimA; i++){
            strcpy(baralhoa[i].nome, baralhoa[j].nome);
            baralhoa[i].tipo = baralhoa[j].tipo;
            baralhoa[i].hab[0] = baralhoa[j].hab[0];
            baralhoa[i].hab[1] = baralhoa[j].hab[1];
            baralhoa[i].hab[2] = baralhoa[j].hab[2];
            baralhoa[i].trunfo = baralhoa[j].trunfo;
            printf("%d cartas A PERDEDOR: %s %c %d\n", i, baralhoa[i].nome, baralhoa[i].tipo, baralhoa[i].hab[0]);
            j++;
        }
        fimA--;
    }
}

void jogo(Baralho baralhoa[12], Baralho baralhob[12]){
    int i=0, j=0, posAleatoria=-1, vencedor=-1;
    while(fimA < 24 && fimB <24){
        if(posAleatoria == -1){
            posAleatoria = rand()%3;
        }
        printf("Cartas jogador A: %d\n", fimA);
        printf("Cartas jogador B: %d\n", fimB);
        printf("%s %c %d\t x \t%s %c %d\n", baralhoa[i].nome, baralhoa[i].tipo, baralhoa[i].hab[posAleatoria], baralhob[i].nome, baralhob[i].tipo, baralhob[i].hab[posAleatoria]);
        
        getchar();
        if(baralhoa[i].hab[posAleatoria] == baralhob[i].hab[posAleatoria]){
            strcpy(empate[i].nome, baralhoa[j].nome);
            empate[i].tipo = baralhoa[j].tipo;
            empate[i].hab[0] = baralhoa[j].hab[0];
            empate[i].hab[1] = baralhoa[j].hab[1];
            empate[i].hab[2] = baralhoa[j].hab[2];
            empate[i].trunfo = baralhoa[j].trunfo;
            i++;
            strcpy(empate[i].nome, baralhob[j].nome);
            empate[i].tipo = baralhob[j].tipo;
            empate[i].hab[0] = baralhob[j].hab[0];
            empate[i].hab[1] = baralhob[j].hab[1];
            empate[i].hab[2] = baralhob[j].hab[2];
            empate[i].trunfo = baralhob[j].trunfo;
            if(posAleatoria == -1){
                posAleatoria = rand()%3;
            }
        }
        if(baralhoa[i].hab[posAleatoria] > baralhob[i].hab[posAleatoria]){
            vencedor=0;
            reordenarCartas(primeiraCarta, baralhoa, baralhob, vencedor);
            posAleatoria = -1;
            if(posAleatoria == -1){
                posAleatoria = rand()%3;
            }
        } else if(baralhob[i].hab[posAleatoria] > baralhoa[i].hab[posAleatoria]) {
            vencedor=1;
            reordenarCartas(primeiraCarta, baralhoa, baralhob, vencedor);
            posAleatoria = -1;
            if(posAleatoria == -1){
                posAleatoria = rand()%3;
            }
        }
    }
}