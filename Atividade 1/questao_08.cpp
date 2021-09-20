#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		int num, p_digito, s_digito;
		
		printf("Digite um numero de 2 dgitos: ");
		scanf("%d", &num);
		
		p_digito = num / 10;
		s_digito = num % 10;
		
		if(p_digito == s_digito){
			printf("Os digitos sao iguais \n");
		}else{
			printf("Os digitos nao sao iguais \n");
		}
		system("pause");
	}
