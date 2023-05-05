#include <stdio.h>
#include <stdlib.h>

int main(void){
int soma=0;
int a=1;
int b=2;
int c = a+b;



while(soma < 4000000){
c = a+b;
a=b;
b=c;

	if(c%2==0){
		soma+=c;
	}
}


printf("Valor da soma: %d",soma);

}