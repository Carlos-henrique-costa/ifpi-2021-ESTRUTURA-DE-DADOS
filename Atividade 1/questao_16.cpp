#include <stdio.h>

main(){
  float produto1, produto2, produto3;
  printf("Informe o preço do produto 1: ");
  scanf("%f", &produto1);
  printf("Informe o preço do produto 2: ");
  scanf("%f", &produto2);
  printf("Informe o preço do produto 3: ");
  scanf("%f", &produto3);
  
  if(produto1 < produto2 && produto1 < produto3){
    printf("O produto a ser comprado eh o produto 1");
  }else if(produto1 > produto2 && produto2 < produto3){
    printf("O produto a ser comprado eh o produto 2");
  }else if(produto1 > produto2 && produto2 > produto3){
    printf("O produto a ser comprado eh o produto 3");
  }else{
	printf("Precos iguais");
  }
}
