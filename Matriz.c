#include <stdio.h>
#include <stdlib.h>

#define L 3// Define a quantidade de linhas da matriz
#define C 3// Define a qunatidade de colunas da matriz

int main(){
	
	int soma1=0, soma2=0, soma3=0;
	int i,j;
	int matriz [L][C];
	
	for (i=0;i<L;i++){// Linhas da matriz
		for (j=0;j<C;j++){// Colunas da matriz
			scanf ("%d", &matriz[i][j]);// Recebe os numeros que irão dentro da matriz
			getchar();// Limpar o buffer
		}
	}
	
	system ("cls");// Limpa a pagina
	
	for (i=0;i<L;i++){
		for (j=0;j<C;j++){
			printf ("%4d", matriz[i][j]);// Vai imprimir as linhas, colunas e numeros da matriz
			if (i<=0){
				soma1+=matriz[i][j];// Faz a soma da primeira linha da matriz
			};
			
			if (i>0 && i==1){
				soma2+=matriz[i][j];// Faz a soma da segunda linha da matriz	
			};
			
			if (i>1 && i==2){
				soma3+=matriz[i][j];// Faz a soma da terceira linha da matriz	
			};
		}
		printf ("\n");
	}
	
	printf ("\n");//Pula uma linha
	printf ("Linha 1: %d\n", soma1);// Exibe o resultado da soma da primeira linha da matriz
	printf ("Linha 2: %d\n", soma2);// Exibe o resultado da soma da segunda linha da matriz	
	printf ("Linha 3: %d\n", soma3);// Exibe o resultado da soma da terceira linha da matriz
}