#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		int num1, num2, maior, menor;
		
		printf("Digite o primeiro numero: ");
		scanf("%d", &num1);
		printf("Digite o segundo numero: ");
		scanf("%d", &num2);
		
		if( num1 > num2){
			printf("O maior numero eh o primeiro: %d\n", num1);
			printf("O menor numero eh o segundo: %d\n", num2);
		} else {
			printf("O maior numero eh o segundo: %d\n", num2);
			printf("O menor numero eh o primeiro: %d\n", num1);
		}
		system("pause");
	}
