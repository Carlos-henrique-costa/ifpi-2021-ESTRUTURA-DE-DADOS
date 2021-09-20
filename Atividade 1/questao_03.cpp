#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		float dolar, real;
		
		printf("Digite um valor em dolar: ");
		scanf("%f", &dolar);
		
		real = (dolar * 5.42);
		
		printf("O equivalente em real(R$) eh: %0.2f", real);
	}
