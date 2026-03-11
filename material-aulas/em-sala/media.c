#include<stdio.h>

int main(){
    float nota_1GQ, nota_2GQ, media;

    printf("Nota 1GQ: ");
    scanf("%f", &nota_1GQ);
    printf("Nota 2GQ: ");
    scanf("%f", &nota_2GQ);

    media = (nota_1GQ*2 + nota_2GQ*3)/5;
    printf("Media: %.2f \n", media);

    if(media >= 7){
        printf("Aprovado\n");
    }else{
        if(media >= 3){
            printf("Final\n");
        }else{
            printf("Reprovado\n");
        }
    }
    
    return 0;
}