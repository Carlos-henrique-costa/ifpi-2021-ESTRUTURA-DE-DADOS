#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		int digitos, soma, p_digito, s_digito, t_digito;
		
		printf("Informe um numero de 3 digitos: ");
		scanf("%d", &digitos);
		
		p_digito = (digitos / 100);
		s_digito = (digitos % 100) / 10;
		t_digito = digitos % 10;
		
		soma = p_digito + s_digito + t_digito;
		
		printf("A soma dos 3 digitos eh: %d\n", soma);
		system("pause");

	}
