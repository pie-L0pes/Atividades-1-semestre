#include <stdio.h>
#include <stdlib.h>


void exercicio1014();
void exercicio2();
void exercicio3();

int main(){
    int opcao;
    printf(">>> ATIVIDADES <<<\n");
    printf("1- 1014 \n");
    printf("2- 1020\n");
    printf("3- 1052\n");
    scanf("%d", &opcao);
    getchar();
    system("clear");
    
    switch(opcao){
        case 1:
        exercicio1014();
        break;
        
        case 2:
        exercicio2();
        break;
        
        case 3:
        exercicio3();
        break;
        
    }
   
}


void exercicio1014(){
    
    
    int X;
    float res, Y;
    
    printf("Km rodados:\n");
    scanf("%d", &X);
    printf("Litros gastos:\n");
    scanf("%f", &Y);
   
    
    res = X/Y;
    
    printf("\n%.3f Km/l", res);
}

void exercicio2(){
    
    int i;
    int res1, res2, res3;
    
    printf("Sua idade em dias:\n");
    scanf("%d", &i);
    
    res1= i/365;
    res2= (i%365)/30;
    res3=(i%365)%30;
    
    printf("\nAnos: %d\n", res1);
    printf("Mes: %d\n", res2);
    printf("Dias: %d\n", res3);
}

void exercicio3(){
    
    int opcao1;
    
    printf("Escreva um número:\n");
    scanf("%d", &opcao1);
    
    switch(opcao1){
        
        case 1:
        printf("\nJanuary\n");
        break;
        
        case 2:
        printf("\nFebruary\n");
        break;
        
        case 3:
        printf("\nMarch\n");
        break;
        
        case 4:
        printf("\nApril\n");
        break;
        
        case 5:
        printf("\nMay\n");
        break;
        
        case 6:
        printf("\nJune\n");
        break;
        
        case 7:
        printf("\nJuly\n");
        break;
        
        case 8:
        printf("\nAgoust\n");
        break;
        
        case 9:
        printf("\nSeptember\n");
        break;
        
        case 10:
        printf("Octouber\n");
        break;
        
        case 11:
        printf("\nNovember\n");
        break;
        
        case 12:
        printf("\nDecember\n");
        break;
    }
    
    
}
