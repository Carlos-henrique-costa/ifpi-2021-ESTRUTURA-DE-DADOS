#include <stdio.h>

main(){
  float numero;
  printf("Digite um numero: ");
  scanf("%f",&numero);

  while(numero > 1){
    numero = numero/2;
  }
  printf("A ultima divis�o foi: %0.2f",numero);
}
