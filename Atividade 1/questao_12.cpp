#include <stdio.h>
main(){
	int dia1,mes1,ano1,dia2,mes2,ano2;
    printf("Primeira data\n");
    printf("Informe a primeira data em Dia Mes Ano: ");
	scanf("%i %i %i",&dia1, &mes1, &ano1);
	printf("segunda data\n");
	printf("Informe a segunda data em Dia Mes Ano: ");
	scanf("%i %i %i",&dia2, &mes2, &ano2);
    
    if(dia1 > 0 && dia1 < 32){
        if(mes1 > 0 && mes1 < 13){
            if(ano1 > 0){
                if(dia2 > 0 && dia2 < 32){
                    if(mes2 > 0 && mes2 < 13){
                        if(ano2 > 0){
                            if(dia1 > dia2){
                                if(mes1 > mes2){
                                    if(ano1 > ano2){
                                        printf("A primeira data eh mais recente");
                                    }else{
                                        printf("segunda data eh mais recente");
                                    }
                                }if(mes1 < mes2){
                                    if(ano1 > ano2){
                                        printf("segunda data eh mais recente");
                                    }else{
                                        printf("A primeira data eh mais recente");
                                    }
                                }if(mes1 == mes2){
                                    if(ano2 > ano1){
                                        printf("segunda data eh mais recente");
                                    }else{
                                        printf("A primeira data eh mais recente");
                                    }
                                }
                            }if(dia1 < dia2){
                                if(mes1 > mes2){
                                    if(ano1 > ano2){
                                        printf("segunda data eh mais recente");
                                    }else{
                                        printf("A primeira data eh mais recente");
                                    }
                                }if(mes1 < mes2){
                                    if(ano1 > ano2){
                                        printf("A primeira data eh mais recente");
                                    }else{
                                        printf("segunda data eh mais recente");
                                    }
                                }if(mes1 == mes2){
                                    if(ano2 > ano1){
                                        printf("A primeira data eh mais recente");
                                    }else{
                                        printf("segunda data eh mais recente");
                                    }
                                }
                            }if(dia1 == dia2){
                                if(mes1 > mes2){
                                    if(ano1 > ano2 || ano1 == ano2){
                                        printf("A primeira data eh mais recente");
                                    }
                                }if(mes1 < mes2){
                                    if(ano2 > ano1 || ano2 == ano1){
                                        printf("segunda data eh mais recente");
                                    }
                                }if(mes1 == mes2){
                                    if(ano1 > ano2){
                                        printf("A primeira data eh mais recente");
                                    }if(ano1 < ano2){
                                        printf("segunda data eh mais recente");
                                    }if(ano1 == ano2){
                                        printf("datas iguais");
                                    }
                                }
                            }
                        }else{
                            printf("ano invalida");
                        }
                    }else{
                        printf("mes invalida");
                    }
                }else{
                    printf("dia invalida");
                }
            }else{
                printf("ano invalida");
            }
        }else{
            printf("mes invalida");
        }
    }else{
        printf("dia invalida");
    }
}
