/* Exemplo 3A de uso de vetores

   Um vetor quando � criado possui lixo de mem�ria em cada posi��o dele.
*/

#include<conio.h>
#include<stdio.h>

int main(){
	int notas[10], indice;

	printf("\n\nListagem de Dados:");
	for(indice = 0; indice < 10; indice++){
	    printf("\n nota %2d = %3d",indice,notas[indice]);
	}
    printf("\n\nDigite qualquer tecla para encerrar...");
	getch();
	return 0;
}
