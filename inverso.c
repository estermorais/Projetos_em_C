#include <stdio.h>
#include <stdlib.h>


int dezenas (int num){

	int contar = 0;
	
	if (num == 0)
		return 1;

	while ( num >=1){

		num = num/10;
		contar++;
	}

return contar;
}


int potencia(int x, int n){

	int contador=1, pot=1;

	while (contador<n)

	{	pot = pot * x;
		contador++;	
	}
	return pot;
}


int main (){
	
int num = 0, f =0, cont = 0, num_arm = 0, c_constan = 0 , novo_num = 0, c = 0;

printf ("Digite um numeo:" );
scanf ("%d", &num);

f = dezenas(num);
num_arm = num;
c_constan = f;

while (cont < c_constan){
	novo_num = novo_num + (num%10) * potencia(10,f);
	f--; 
	num = num/10;
	cont++;

}

printf ("Numero original: %d\nInvertido: %d\n%d + %d = %d",num_arm,novo_num,num_arm,novo_num,(num_arm+ novo_num));

	return 0;
}