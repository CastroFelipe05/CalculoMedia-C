/*
Faca um programa que calcule a media anual de um aluno e imprima na tela a nota em forma de letra (A, B, C...)
O programa tera que perguntar ao usuario se ele deseja continuar a calcular medias ou parar por ai (Digite 1 para SIM, ou 0 para NAO)
*/

#include <stdio.h>

int main () {

    double nota = 0, media = 0, totalnota = 0;
    int continuarprograma = 1;

    while (continuarprograma) {

        totalnota = 0;

        for (int i = 1; i <= 4; i++) {

            printf ("Digite a nota do %dBimestre: ", i);
            scanf ("%lf", &nota);

            totalnota += nota;

        }

        media = totalnota / 4;

        if (media >= 9) {
            printf ("Voce tirou A. Aprovado\n");
        }
        else if (media >= 8 && media < 9) {
            printf ("Voce tirou B. Aprovado\n");
        }
        else if (media >= 7 && media < 8) {
            printf ("Voce tirou C. Aprovado\n");
        }
        else if (media >= 6 && media < 7) {
            printf ("Voce tirou D. Aprovado\n");
        }
        else {
            printf ("Voce tirou E. Reprovado\n");
        }

        printf ("Deseja calcular mais uma nota? (Digite 1 para SIM, ou 0 para NAO) ");
        scanf ("%d", &continuarprograma);

        if (!continuarprograma) {
            break;
        }

    }
}
