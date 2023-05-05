#include <stdio.h>

int mmc(int x, int y){
	
	int div = 2;
	int divisor = 0;
	int total = 1;
	int res = 0;

while(x!=1 || y!=1){
	if(x%div==0){

	res = x / div;
	divisor == 1;
	}

	if(y%div==0){

	res = y / div;
	divisor == 1;
	}

	if(divisor == 1)
		total = total * res;
}
return (res);
}

int main(){

	int a, b;
	int resposta;

	scanf("%d, %d", %a, %b);
	resposta = mmc(a, b);

	printf("%d", resposta);
}