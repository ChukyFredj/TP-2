#include <stdio.h>
#include <math.h>
#include "../header/my.h"

void suite(void)
{
    int n;

    printf("Entrez le nombre de terme de la suite à calculer n avec n > 0 (0 pour terminer) : ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Erreur doit être supérieur à 0");
        return;
    }
    float U_next = 2.0;
    for (size_t i = 0; i < n; i++)
    {
        printf("\tUn%d = %f\n", i, U_next);
        if (i % 10 == 0)
        {
            printf("\tUn%d = %f\n", i, U_next);
        }
        U_next = 0.5 * (U_next + (2.0 / U_next));
    }
    printf("Un[%d] = %f\n", n, U_next);
}

void exotwo(void)
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
        suite();
        break;
    case '2':
        reader("help/exo2-help.txt");
        break;
    default:
        exotwo();
        break;
    }
}