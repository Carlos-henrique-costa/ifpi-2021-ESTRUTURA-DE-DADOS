#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		int valor;
		float num1, num2, soma, sub, mult, div;
		
		printf("Digite uma opcao: ");
		scanf("%d", &valor);
		printf("---- 1 - Adcao ----");
		printf("---- 2 - subtracao ----");
		printf("---- 3 - multiplicacao ----");
		printf("---- 4 - divisao ----\n");
		
		printf("Informe o primeiro valor:\n ");
		scanf("%f", &num1);
		printf("Informe o segundo valor: \n");
		scanf("%f", &num2);
		
		if(valor == 1){
			soma = num1 + num2;
			printf("A soma dos valores eh: %0.2f\n", soma);
		}else if( valor == 2){
			sub = num1 - num2;
			printf("A subtracao dos valores eh: %0.2f\n", sub);
		}else if(valor == 3){
			mult = num1 * num2;
			printf("A multiplicacao dos valores eh: %0.2f\n", mult);
		}else if( valor == 4){
			div = num1 / num2;
			printf("A divisao dos valores eh: %0.2f\n", div);
		}else{
			printf("Opcao invalida\n");
		}
		system("pause");
	}
