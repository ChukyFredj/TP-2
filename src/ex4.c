#include <stdio.h>
#include <math.h>
#include "../header/my.h"

void numberor(void)
{
    int n;

    printf("Entrez le nombre de terme de la suite à calculer n avec n > 0 (0 pour terminer) : ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Erreur doit être supérieur à 0");
        return;
    }
    for (size_t i = 1; i <= n; i++) {
        if (i % 5 == 0 || i == 1) {
            printf("\tO[%d] = %f\n", i, (float)fibonacci('a',i+1)/(float)fibonacci('a',i));
        }
    }
    printf("Le résultat de O[%d] est %f \n", n, (float)fibonacci('a',n+1)/(float)fibonacci('a',n));
    printf("Le nombre d’or est égal à : %f\n", (1 + sqrt(5)) / 2);
}

void exofour(void)
{
    reader("help/exo.txt");
    char i = 2;
    scanf("%c", &i);
    switch (i)
    {
    case '0':
        menu();
        break;
    case '1':
        numberor();
        break;
    case '2':
        reader("help/exo4-help.txt");
        break;
    default:
        exofour();
        break;
    }
}