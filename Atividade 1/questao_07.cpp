#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		int num1, num2, num3, maior;
		
		printf("digite o primeiro numero: ");
		scanf("%d", &num1);
		printf("digite o segundo numero: ");
		scanf("%d", &num2);
		printf("digite o terceiro numero: ");
		scanf("%d", &num3);
		
		if(num1 > num2 && num1 > num3){
			printf("O primeiro numero eh o maior: %d\n", num1);
		}else if( num2 > num1 && num2 > num3){
			printf("O segundo numero eh o maior: %d\n", num2);
		}else{
			printf("O terceiro numero eh o maior: %d\n", num3);
		}
		system("pause");
	}
