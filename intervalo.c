#include <stdio.h>
#include <stdlib.h>


int intervalo (int N){

	
	if(10<=N && 20>=N)
		return 1;

	else
		return 0;	
}

int main(){
	
int continuar = 1;

while (continuar == 1){

int N = 0, loop = 0, cont = 0, f = 0;

int dentro = 0;
int fora = 0;

printf("Quantos numeros serão digitados?");
scanf("%d", &loop);

while(cont<loop){

printf("Digite o numero desejado:");
scanf("%d", &N);

	if (intervalo (N) == 1)
	dentro++;
	if ( intervalo (N) == 0)
	fora++;

cont++;

}

printf("%d numeros entao dentro do intervalo!\n", dentro);
printf("%d numeros estao fora do intervalo!\n" , fora);

printf("Para continuar digite 1, para sair digite 0:" );
scanf("%d", &continuar);

}
return 0;
}