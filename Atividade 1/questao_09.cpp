#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		int dia, mes, ano;
		
		printf("Informe o dia: ");
		scanf("%d", &dia);
		printf("Informe o mes: ");
		scanf("%d", &mes);
		printf("Informe o ano: ");
		scanf("%d", &ano);
		
		if(dia>=1 && dia <=31){
        	if(mes>=1 && mes <=12){
            	if(ano>=1){
                	printf("Data valida!");
	            }else {
	                printf("Data invalida!");
	            }
        	}else{
            	printf("Mes invalida!");
	        }
	    }else{
	    	printf("Dia invalida!");
	    }
	}		
