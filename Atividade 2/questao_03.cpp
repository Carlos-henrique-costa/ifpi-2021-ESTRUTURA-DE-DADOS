#include <stdio.h>

main(){
    int numero1,numero2,mdc,resto;
    printf("Digite um primeiro numero: ");
    scanf("%i",&numero1);
    printf("Digite um segundo numero: ");
    scanf("%i",&numero2);
    
    if(numero1 > 0 && numero2 > 0){
      while(numero2 != 0){
        resto = numero1 % numero2;
        numero1 = numero2;
        numero2 = resto;
      }
      mdc = numero1;
    }else{
      printf("\nOs numeros informados não sao validos\n");
    }
    printf("O MMC dos numeros informados eh: %i",mdc);
}
