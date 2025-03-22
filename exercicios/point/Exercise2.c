#include <stdio.h>
#include <stdbool.h>


float nota1 = 0;
float nota2 = 0; 

int main(){

    printf("Digite a primeira nota do aluno:\n");
     scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno:\n");
     scanf("%f", &nota2);

     if (nota1 + nota2 / 2 >= 7) {
         printf("Parabens, passou e nao foi uma bosta na eschollaa, Maluj.");
        }

        else {
            printf("Voce fracassou, va estudar mais Malixo!");
        }

        return 0;
     }

