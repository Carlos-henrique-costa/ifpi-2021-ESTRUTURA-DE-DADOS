#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		float horas, minutos, total_minutos;
		
		printf("Digite um valor em horas: ");
		scanf("%f", &horas);
		printf("Digite um valor em minutos: ");
		scanf("%f", &minutos);
		
		total_minutos = (horas * 60) + minutos;
		
		printf("O total em minutos eh: %0.2f\n", total_minutos);
		system("pause");
		
	}
