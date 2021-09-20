#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		float velocidade_km, velocidade_ms;
		
		printf("Digite a velocidade em km/h: ");
		scanf("%f", &velocidade_km);
		
		velocidade_ms = (velocidade_km / 3.6);
		
		printf("Sua velocidade em metros por segundo eh: %0.2f\n", velocidade_ms);
		system("pause");
		
	}
