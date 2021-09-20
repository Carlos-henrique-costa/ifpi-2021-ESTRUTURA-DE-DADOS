#include <stdio.h>

main(){
    int numero = 1, divisores = 1;
    while(numero != 0){
      if(numero != 0){
        printf("Digite um numero: ");
        scanf("%i",&numero);
        while(divisores <= numero){
          if(numero % divisores == 0){
            printf("\nOs divisores sao: %i\n", divisores);
           	}
        divisores++;
		}
      divisores = 1;
    }
    }
}
