#include <stdio.h>
#include <stdlib.h>


void imprime ();
float soma(int A, int B);
float sub(int A, int B);
float mult(int A, int B);
float divi(int A, int B);
float media(int A, int B);
float porcen(int A, int B);

int main()
{
    float res;
    int v1, v2, opcao;
    
    scanf("%d", &v1);
    scanf("%d", &v2);
    getchar();
    system ("clear");
    
    printf("1- Soma\n");
    printf("2- Subtração\n");
    printf("3- Multiplicação\n");
    printf("4- Divisão\n");
    printf("5- Média\n");
    printf("6- Porcentagem\n");
    printf("Escolha a opção que deseja:\n");
    scanf("%d", &opcao);
    getchar();
    system ("clear");
    
    switch(opcao){
        case 1:
        res=soma(v1,v2);
        printf("Res soma= %.1f\n", res);
        break;
        
        case 2:
        res=sub(v1,v2);
        printf("Res sub= %.1f", res);
        break;
        
        case 3:
        res=mult(v1,v2);
        printf("Res sub= %.1f", res);
        break;
        
        case 4:
        res=divi(v1,v2);
        printf("Res sub= %.1f", res);
        break;
        
        case 5:
        res=media(v1,v2);
        printf("Res sub= %.1f", res);
        break;
        
        case 6:
        res=porcen(v1,v2);
        printf("Res sub= %.1f%%", res);
        break;
        
        default:
        printf("Opção invalida!");
        
    }

    return 0;
}

float soma(int A, int B){
    float res;
    res=A+B;
    return res;
    
}

float sub(int A, int B){
    float res;
    res=A-B;
    return res;
    
}

float mult(int A, int B){
    float res;
    res=A*B;
    return res;
    
}

float divi(int A, int B){
    float res;
    res=A/B;
    return res;
    
}

float media(int A, int B){
    float res;
    res=(A+B)/2;
    return res;
    
}

float porcen(int A, int B){
    float res;
    res=(B*100)/A;
    return res;
    
}