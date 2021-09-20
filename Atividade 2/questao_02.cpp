#include <stdio.h>

main(){
    int numero1, numero2, i = 1;
    printf("Digite um primeiro numero: ");
    scanf("%i",&numero1);
    printf("Digite um segundo numero: ");
    scanf("%i",&numero2);
    
    if(numero1 > 0 && numero2 > 0){
      while(i % numero1 != 0 || i % numero2 != 0){
        i++;
      }
      printf("\nO MMC dos numeros informados eh: %i",i);
    }else{
      printf("Numeros invalidos");
    }
}
