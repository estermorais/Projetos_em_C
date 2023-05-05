#include <stdio.h>
#include <stdlib.h>


int main (){
	
int X = 0, Y = 0, cont1 = 1, cont2 = 1;

	printf ("Digite um valor para quantidade de numeros na linha: ");
	scanf ("%d",&X);

	printf ("Digite um valor para o ultimo numero: ");
	scanf ("%d",&Y);

	
	while (cont1 <= Y){

		while (cont2 <= X)
		{	printf ("%d " , cont1);

			cont2++;
			cont1++;	
		}

	printf("\n");
	cont2 = 1; 

	}

	return 0;
}