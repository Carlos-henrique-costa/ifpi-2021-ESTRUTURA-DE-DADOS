#include <stdio.h>

main(){
  char turno;
  printf("Informe o hor�rio: M = manh�; T = tarde; N = noite: ");
  scanf("%c",&turno);
  if(turno == 'm' || turno == 'M'){
    printf("Bom dia!");
  }else if(turno == 't' || turno == 'T'){
    printf("Boa tarde!");
  }else if(turno == 'n' || turno == 'N'){
    printf("Boa Noite!");
  }else{
    printf("hor�rio inv�lido");
  }
}
