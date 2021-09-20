#include <stdio.h>

main() {
    int elementosA, elementosB, i, j,n;
    printf("Digite o tamanho do vetorA: ");
    scanf("%d", &elementosA);
    printf("Digite o tamanho do vetorB: ");
    scanf("%d", &elementosB);
    
    int vetorA[elementosA], vetorB[elementosB];
    int elementosC = elementosA + elementosB;
    int vetorC[elementosC];
    
	for(i = 0; i < elementosA; i++) {
        printf("Digite o elemento %d: do vetorA: ",i);
        scanf("%d", &vetorA[i]);
         vetorC[i] = vetorA[i];
    }
    for(j = 0; j < elementosB; j++) {
        printf("Digite o elemento %d do vetor B:",i);
        scanf("%d", &vetorB[j]);
        vetorC[i] = vetorB[j];
        i++;
    }
    
    for(n = 0; n < elementosC; n++) {
       printf("%d",vetorC[n]);
    }
}
