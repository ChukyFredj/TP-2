#include <stdio.h>
#include <math.h>
#include "../header/my.h"

void seconddegres(void)
{
    float x1, x2, delta, a, b, c;
    printf("Entrer A : ");
    scanf("%f", &a);
    printf("Entrer B : ");
    scanf("%f", &b);
    printf("Entrer C : ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta == 0.0)
    {
        x1 = -b / (2 * a);
        printf("la solution unique est xs = %.2f \n", x1);
    }
    if (delta > 0.0)
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("L’équation admet 2 solutions qui sont :\n\t - %f \n\t - %f \n", x1, x2);
    }
    if (delta < 0.0)

        printf("l'equation n admet pas de solution\n");

    return;
}

void exoone(void)
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
        seconddegres();
        break;
    case '2':
        reader("help/exo1-help.txt");
        break;
    default:
        exoone();
        break;
    }
}