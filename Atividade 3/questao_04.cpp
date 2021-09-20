#include <stdio.h>

main(){
    int tamanho, elemento;
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &tamanho);
    int vetorA[tamanho];
    
    for(int i = 0; i < tamanho; i++){
      printf("Informe o elemento %d do vetor A: ", i);
      scanf("%d", &elemento);
        vetorA[i] = elemento;
    }
    printf("VetorB: ");
    for(int x = 0;x < tamanho; x++){
      if(vetorA[x] % 2 == 0){
            printf("%d",  0);
        }else{
            printf("%d", 1);
        }
    }
   
}
