#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		float velocidade_ms, velocidade_km;
		
		printf("Digite a velocidade em metros por segundo[m/s]: ");
		scanf("%f", &velocidade_ms);
		
		velocidade_km = (velocidade_ms * 3.6);
		
		printf("Sua velocidade em KM/h eh: %0.2f\n", velocidade_km);
		system("pause");
		
	}
