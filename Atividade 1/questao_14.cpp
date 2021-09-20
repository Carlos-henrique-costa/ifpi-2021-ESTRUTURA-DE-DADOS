#include <stdio.h>

main(){
  char letra;
  printf("Informe o sexo[f:m]: ");
  scanf("%c", &letra);
  if(letra == 'm' || letra == 'M'){
    printf("Eh Masculino");
  }else if(letra == 'f' || letra == 'F'){
    printf("Eh feminino");
  }else{
    printf("O sexo invalido");
  }
}
