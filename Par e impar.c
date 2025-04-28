#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale (LC_ALL, "");
    int i, opcao, n[5], par, impar;
    
    for(i=0; i<=4; i++){
        printf("%d-Escreva um número:\n", i+1);
        scanf("%d", &n[i]);
        system("clear");
    }
    printf("Escolha o que deseja ver desses 5 números:\n");
    printf("1- Exibir todos os números\n");
    printf("2- Exibir apenas pares\n");
    printf("3- Exibir apenas os impares\n");
    scanf("%d", &opcao);
    getchar();
    system ("clear");
    switch (opcao)
    {
        case 1:
        printf("%d - %d - %d - %d - %d", n[0], n[1], n[2], n[3], n[4]);
        break;
        
        case 2:
        for(i=0; i<=4; i++){
            if(n[i]%2==0){
                par= n[i];
                printf("%d\n", par);
            }
        }
        break;
        
        case 3:
        for(i=0; i<=4; i++){
            if(n[i]%2!=0){
                impar= n[i];
                printf("%d\n", impar);
            }
        }
        break;
        
        default:
        printf("Opção invalida!! Tente novamente");
        break;
        
    }
    return 0;
    }
    