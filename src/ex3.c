#include <stdio.h>
#include <math.h>
#include "../header/my.h"

int fibonacci(char c, int ne)
{
    int i, n, t1 = 0, t2 = 1, nextTerm;

    if (c == 'e') {
        printf("Entrer n :");
        scanf("%d", &n);
    } else {
        n = ne;
    }

    for (i = 1; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    if (c == 'e') {
        printf("Fibonacci de %d est %d : F[%d] = %d\n", n, t1, n, t1);
    } else{
        return (t1);
    }
}

void exothree(void)
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
        fibonacci('e', 0);
        break;
    case '2':
        reader("help/exo3-help.txt");
        break;
    default:
        exothree();
        break;
    }
}