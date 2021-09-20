#include <stdio.h>
#include <string.h>

main(){
	
	char nome1[20];
	char nome2[20];
	int contador = 0;
	
	printf("INforme o nome1: ");
	scanf("%s",nome1);
	printf("Informe o nome2: ");
	scanf("%s",nome2);
	
   	for(int i = 0; i < strlen(nome1); i++){
        if(nome1[i] == nome2[i]){
            contador = contador + 1;
        }else{
            break;
        }
    }
  	if(contador == strlen(nome1)){
      	printf("Os nomes sao iguais\n");
  	}else{
    	printf("Os nomes sao diferentes");
  	}
}
