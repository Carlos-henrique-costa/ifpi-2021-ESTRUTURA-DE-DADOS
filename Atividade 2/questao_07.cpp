#include <stdio.h>

main(){
    float matricula, nota1, nota2, nota3, media;
    int quantAprovado = 0, quantReprovado = 0, quantAlunos = 0;
    printf("\nDigite matrícula = 0 para encerrar o programa");
    printf("\nInforme a matrícula: ");
    scanf("%f",&matricula);
    
  	while(matricula != 0){
      printf("\nDigite a nota1: ");
      scanf("%f",&nota1);
      printf("\nDigite a nota2: ");
      scanf("%f",&nota2);
      printf("\nDigite a nota3: ");
      scanf("%f",&nota3);
      media = (((2 * nota1) + (3 * nota2) + (5 * nota3))/10);
         
	  if(media >= 7){
	    quantAprovado = quantAprovado + 1;
	  }else{
	    quantReprovado = quantReprovado + 1;
	  }
	    quantAlunos = quantAlunos + 1;
	    printf("\nInforme a matrícula: ");
	    scanf("%f",&matricula);
  	}
    printf("\nTotal de alunos: %i", quantAlunos);
  	printf("\nTotal de aprovados: %i", quantAprovado);
	printf("\nTotal de reprovados: %i", quantReprovado);
}
