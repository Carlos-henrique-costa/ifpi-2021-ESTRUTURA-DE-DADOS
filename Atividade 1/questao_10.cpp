#include <stdio.h>
#include <stdlib.h>


	int main ()
	{
		float nota1, nota2, media, nota_final_1, nota_final_2, media_final;
		
		printf("Digite a primeira nota: ");
		scanf("%f", &nota1);
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		
		media = (nota1 + nota2) / 2;
		
		if(media >= 7){
			printf("Aprovado\n");
		}else if(media < 7){
			printf("O aluno deve fazer prova final\n");
			printf("Digite a primeira nota: ");
			scanf("%f", &nota_final_1);
			printf("Digite a segunda nota: ");
			scanf("%f", &nota_final_2);
			
			media_final = (nota_final_1 + nota_final_2) / 2;
			
			if(media_final >= 6){
				printf("Aprovado\n");
			}else{
				printf("Reprovado\n");
			}
		}
		system("pause");
	}	
