#include <stdio.h>

main(){
  float numeroX, numeroN, divisao;
  printf("Infome um valor: ");
  scanf("%f",&numeroX);
  printf("Informe outro valor (maior ou igual a 2): ");
  scanf("%f",&numeroN);
  
  if(numeroN >= 2){
	while(numeroN >= 2){	
	    divisao = numeroX / numeroN;
	    numeroX = divisao;
	    numeroN--;
		printf("\nresultado da divisão é: %0.2f",divisao);
	}
  }else{
    printf("O segundo valor é inferior a 2");
  }
}
