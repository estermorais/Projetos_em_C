#include <stdio.h>

int mmc(int x, int y){
	
	int div = 2;
	int divisor = 0;
	int total = 1;
	

while(x!=1 || y!=1){
	divisor=0;

	if(x%div==0){
		x = x / div;
		divisor=1;
	}

	if(y%div==0){
		y = y / div;
		divisor = 1;
	}

	if(divisor == 1){
		total = total * div;
	}


	div++;
}

return total;
}

int main(){

	int a, b;
	int resposta;

	//scanf("%d, %d", &a, &b);
	resposta = mmc(4,15);

	printf("%d", resposta);
}