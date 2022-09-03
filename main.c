#include <stdio.h>
#include <stdlib.h>

int vetOriginal[10];
int vetInvert[10];

void menu(){
	int opcao;
	inicio:
    system("cls");
	printf(" -------------------------- MENU -----------------------------\n");
	printf("--------------------- DIGITE SUA ESCOLHA ---------------------\n");
	printf(" -------------------------------------------------------------\n");
	printf("|| DIGITE >1< PARA VER OS VALORES DO VETOR                  ||\n");
	printf("|| DIGITE >2< PARA VER O MAIOR ELEMENTO DO VETOR            ||\n");
	printf("|| DIGITE >3< PARA VER APENAS OS ELEMENTOS PARES DO VETOR   ||\n");
	printf("|| DIGITE >4< PARA VER O SOMATORIO DOS ELEMENTOS DO VETOR   ||\n");
	printf("|| DIGITE >5< PARA VER A ORDEM INVERSA DO VETOR             ||\n");
	printf("|| DIGITE >6< PARA VER A ORDEM CRESCENTE DO VETOR           ||\n");
	printf("|| DIGITE >7< PARA SAIR                                     ||\n");
	printf(" -------------------------------------------------------------\n");
	printf(" DIGITE SUA ESCOLHA: ");
	opcao = getch();
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			questA(&vetOriginal);
		break;
		case 2:
			questB(&vetOriginal);
		break;
		case 3:
			questC(&vetOriginal);
		break;
		case 4:
			questD(&vetOriginal);
		break;
		case 5:
			questE(&vetOriginal);
		break;
		case 6:
			questF(&vetOriginal);
		break;
		case 7:
			printf("ENTENDIDO, ENCERRANDO PROGRAMA...\n");
			system("cls");
		break;
		default:
			printf("\n!!!ERRO!!!\nESCOLHA APENAS ENTRE 1 A 7!\n");
			printf("\nPRECIONE QUALQUER TECLA PARA VOLTAR AO MENU!\n");
	        system("PAUSE");
	        goto inicio;
	}
}

void questA(){
	srand(time(NULL));
	printf("VETORES\n");
    for(int i=0; i<=9; i++){
        vetOriginal[i]=rand() % 100;
    	printf("\n Vetor[%d]: %d\n", i, vetOriginal[i]);
    }
	
	int volta;
	printf("\nDIGITE 1 PARA VOLTAR AO MENU E 2 PARA SAIR: ");
	scanf("%d", &volta);
	switch(volta){
		case 1:
			menu();
		break;
		case 2:
			printf("\nSAINDO...\n");
		break;
	}
	
}

void questB(){
   int i, maior=0;

    for (i=0; i<10; i++){
      if (vetOriginal[i] > maior){
        maior = vetOriginal[i];
      }
    }
    printf("\nO MAIOR VALOR DESTE VETOR E: %d\n", maior);
    
    int volta;
	printf("\nDIGITE 1 PARA VOLTAR AO MENU E 2 PARA SAIR: ");
	scanf("%d", &volta);
	switch(volta){
		case 1:
			menu();
		break;
		case 2:
			printf("\nSAINDO...\n");
		break;
	}
}

void questC(){

     int i;
     int par[10];
     int impar[10];
     int contaPar = 0;
     int contaImpar = 0;

     for(i=0;i<10;i++){
        if( vetOriginal[i] % 2 )
        {
            impar[contaImpar] = vetOriginal[i];
            contaImpar++;
        }
        else
        {
            par[contaPar] = vetOriginal[i];
            contaPar++;
        }
    }

    printf("\nOS VALORES PARES DESTE VETOR SAO: \n");
    for(i=0;i<contaPar;i++){
        printf("\n%d: %d\n", i + 1  , par[i]);
    }
    
    int volta;
	printf("\nDIGITE 1 PARA VOLTAR AO MENU E 2 PARA SAIR: ");
	scanf("%d", &volta);
	switch(volta){
		case 1:
			menu();
		break;
		case 2:
			printf("\nSAINDO...\n");
		break;
	}
}

void questD(){
	
	int soma(int vetOriginal[], int tam){
		if(tam == 0)
			return 0;
		else
			return vetOriginal[tam - 1] + soma(vetOriginal, tam - 1);
	}
	
	printf("\nA SOMA DOS ELEMENTOS DESSE VETOR E: %d\n", soma(vetOriginal, 10));
	
	int volta;
	printf("\nDIGITE 1 PARA VOLTAR AO MENU E 2 PARA SAIR: ");
	scanf("%d", &volta);
	switch(volta){
		case 1:
			menu();
		break;
		case 2:
			printf("\nSAINDO...\n");
		break;
	}
}

void questE(){

    int i;
    printf("\nO VETORES INVERTIDOS FICA\n");
    for(i = 0; i < 10; i++) {
        vetInvert[i] = vetOriginal[10-i-1];
        printf("\n[%d] E: %d\n", i, vetInvert[i]);
    }
    
    int volta;
	printf("\nDIGITE 1 PARA VOLTAR AO MENU E 2 PARA SAIR: ");
	scanf("%d", &volta);
	switch(volta){
		case 1:
			menu();
		break;
		case 2:
			printf("\nSAINDO...\n");
		break;
	}

}

void questF(){
	
	int aux;
	
	for(int x=0; x<10; x++){
		for(int y=x; y<10; y++){
			if(vetOriginal[x] > vetOriginal[y]){
				aux = vetOriginal[x];
				vetOriginal[x] = vetOriginal[y];
				vetOriginal[y] = aux;
			}
		}
	}
	
	printf("\nVETORES EM ORDEM CRESCENTE\n");
	
	for(size_t i=0; i<10; i++){
		printf("\nVETOR[%d] e: %d\n", i, vetOriginal[i]);
	}
	
	int volta;
	printf("\nDIGITE 1 PARA VOLTAR AO MENU E 2 PARA SAIR: ");
	scanf("%d", &volta);
	switch(volta){
		case 1:
			menu();
		break;
		case 2:
			printf("\nSAINDO...\n");
		break;
	}
    
}

int main(){
		
	menu();
	
    return 0;
}
