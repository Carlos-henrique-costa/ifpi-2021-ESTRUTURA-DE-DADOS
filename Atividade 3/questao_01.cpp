#include <stdio.h>
#include <stdlib.h>

main(){
	int  tamanho, i, j;
    int vetorA[tamanho], vetorB[tamanho];
	printf("Digite o tamanho do vetorA: ");
    scanf("%d", &tamanho);
    
    for(i = 0; i < tamanho; i++){
        printf("Digite o elemento %d: ",i);
        scanf("%d", &vetorA[i]);
    }
    
	for(i = 0, j = tamanho - 1; i < tamanho && j >= 0;  i++, j--){
        vetorB[i] = vetorA[j];
		printf("O vetorB eh: %d", vetorB[i]);
    }
    
}
