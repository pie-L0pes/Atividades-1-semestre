#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int id, ano, tipocombs;
	char marca[30], modelo[30], cor[30], *combustivel;
	float valor; 
}Carro;

Carro Carros[10];

int Numcarro = 0;

void Cadastrar();
void Listar();
void Filtrar();
void Buscar();

int main(){
	int opcao;
	
	do{

	printf("----Veículos----\n");
	printf("1 - Cadastrar veículo\n");
	printf("2 - Listar veículos\n");
	printf("3 - Filtar por tipo de combustível\n");
	printf("4 - Buscar veículo\n");
	printf("0 - Sair\n");
	printf("Escolha uma opção:");
	scanf("%d", &opcao);
	getchar ();
	system ("clear");
	
	switch (opcao){
		
		case 1:
			Cadastrar ();
			break;
		
		case 2:
			Listar ();
			break;
			
		case 3:
			Filtrar ();
			break;
			
		case 4:
			Buscar();
			break;
			
		case 0:
			printf("Volte sempre!");
			break;
			
		default:
			printf("Opção invalida, tente novamente!!");
			break;	
	}
	printf("Clique Enter para continuar....");
	getchar();
	getchar();
	system ("clear");
}while(opcao != 0);
	
	return 0;
}

void Cadastrar(){
	printf("----Novo Carro----\n");
	printf("Marca:");
	scanf("%s", Carros[Numcarro].marca);
	printf("Modelo:");
	scanf("%s", Carros[Numcarro].modelo);
	printf("Cor:");
	scanf("%s", Carros[Numcarro].cor);
	printf("Ano:");
	scanf("%d", &Carros[Numcarro].ano);
	printf("Valor:");
	scanf("%f", &Carros[Numcarro].valor);
	printf("\nTipo do combustivel:\n");
	printf("1 - Etanol\n");
	printf("2 - Gasolina\n");
	printf("3 - Flex\n");
	printf("4 - Elétrico\n");
	printf("Escolha uma opção:");
	scanf("%d", &Carros[Numcarro].tipocombs);
	
	switch(Carros[Numcarro].tipocombs){
		
		case 1:
		 	Carros[Numcarro].combustivel = "Etanol";
		 	break;
		
		case 2:
			Carros[Numcarro].combustivel = "Gasolina";
			break;
			
		case 3:
		 	Carros[Numcarro].combustivel = "Flex";
		 	break;
		
		case 4:
			Carros[Numcarro].combustivel = "Elétrico";
			break;
		
		default:
			("Opção invalida!");
			break;

	}
	
	Carros[Numcarro].id= Numcarro + 1;
	Numcarro++;
}

void Listar(){
	for(int i=0; i<Numcarro; i++){
		printf("ID:%d\n", Carros[i].id);
		printf("Marca:%s\n", Carros[i].marca);
        printf("Cor:%s\n", Carros[i].cor);
        printf("Ano:%d\n", Carros[i].ano);
        printf("Combustivel:%s\n", Carros[i].combustivel);
        printf("\033[35m");
	    printf("------------------------------------\n");
		printf("\033[0m");
	}
}

void Filtrar(){
	int opcao;
	printf("-----Tipo Combustível-----\n");
	printf("1 - Etanol\n");
	printf("2 - Gasolina\n");
	printf("3 - Flex\n");
	printf("4 - Elétrico\n");
	printf("Escolha uma opção:");
	scanf("%d", &opcao);
	getchar();
	system ("clear");
	
	switch(opcao){
		
		case 1:
			for(int i=0; i<Numcarro; i++){
				if(Carros[i].combustivel== "Etanol"){
					printf("ID:%d\n", Carros[i].id);
	                printf("Marca:%s\n", Carros[i].marca);
                  	printf("Cor:%s\n", Carros[i].cor);
                	printf("Ano:%d\n", Carros[i].ano);
                	printf("Combustivel:%s\n", Carros[i].combustivel);
                	printf("\033[35m");
	                printf("------------------------------------\n");
	                printf("\033[0m");
				}
			}
			break;
			
		case 2:
			for(int i=0; i<Numcarro; i++){
				if(Carros[i].combustivel== "Gasolina"){
						printf("ID:%d\n", Carros[i].id);
	                	printf("Marca:%s\n", Carros[i].marca);
                  		printf("Cor:%s\n", Carros[i].cor);
                		printf("Ano:%d\n", Carros[i].ano);
                		printf("Combustivel:%s\n", Carros[i].combustivel);
                		printf("\033[35m");
	                	printf("------------------------------------\n");
		                printf("\033[0m");
				}
			}
			break;
		
	case 3:
		for(int i=0; i<Numcarro; i++){
				if(Carros[i].combustivel== "Flex"){
						printf("ID:%d\n", Carros[i].id);
	                	printf("Marca:%s\n", Carros[i].marca);
                  		printf("Cor:%s\n", Carros[i].cor);
                		printf("Ano:%d\n", Carros[i].ano);
                		printf("Combustivel:%s\n", Carros[i].combustivel);
                		printf("\033[35m");
	                	printf("------------------------------------\n");
		                printf("\033[0m");
				}
			}
			break;
			
	case 4:
		for(int i=0; i<Numcarro; i++){
				if(Carros[i].combustivel== "Elétrico"){
					printf("ID:%d\n", Carros[i].id);
	                printf("Marca:%s\n", Carros[i].marca);
                  	printf("Cor:%s\n", Carros[i].cor);
                	printf("Ano:%d\n", Carros[i].ano);
                	printf("Combustivel:%s\n", Carros[i].combustivel);
                	printf("\033[35m");
	                printf("------------------------------------\n");
	                printf("\033[0m");
				}
			}
			break;
			
	
	}
}

void Buscar(){
	int idd;
	printf("Insira o ID do carro que deseja:");
	scanf("%d", &idd);
	for(int i=0; i<Numcarro; i++){
				if(idd== Carros[i].id){
						printf("ID:%d\n", Carros[i].id);
	                	printf("Marca:%s\n", Carros[i].marca);
                  		printf("Cor:%s\n", Carros[i].cor);
                		printf("Ano:%d\n", Carros[i].ano);
                		printf("Combustivel:%s\n", Carros[i].combustivel);
                		printf("\033[35m");
	                	printf("------------------------------------\n");
		                printf("\033[0m");
				}
			}
}

	
