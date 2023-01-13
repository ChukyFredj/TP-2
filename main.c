/*
** Chuky Fredj, 2022
** TP-2
** File description:
** main.c
*/
#include <stdio.h>
#include <stdbool.h>
#include "header/my.h"
void reader(char *path) {
    cls;
    FILE    *textfile;
    char    line[1000];
     
    textfile = fopen(path, "r");
    if(textfile == NULL){
        printf("Le fichier help est inexistant !");
        return;
    }
     
    while(fgets(line, 1000, textfile)){
        printf(line);
    }
     
    fclose(textfile);
}

void color (void) {
    reader("help/color.txt");
    int i;
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("\033[31mLa couleur à bien été définis\n");
        menu();
        break;
    case 2:
        printf("\033[32mLa couleur à bien été définis\n");
        menu();
        break;
    case 3:
        printf("\033[33mLa couleur à bien été définis\n");
        menu();
        break;
    case 4:
        printf("\033[34mLa couleur à bien été définis\n");
        menu();
        break;
    case 5:
        printf("\033[35mLa couleur à bien été définis\n");
        menu();
        break;
    case 6:
        printf("\033[36mLa couleur à bien été définis");
        menu();
        break;
    case 7:
        printf("\033[37mLa couleur à bien été définis");
        menu();
        break;

    default:
        color();
        break;
    }
    return;
}

int menu(void) {
    reader("help/menu.txt");
    char i;
    scanf("%c", &i);
    switch (i)
    {
    case '0':
        return(1);
        break;
    
    case '1':
        exoone();
        break;
    case '2':
        exotwo();
        break;
    case '3':
        exothree();
        break;
    case '4':
        exofour();
        break;
    case '7':
        color();
        break;
    
    default:
        menu();
        break;
    }
    return (0);
}

int main (void) {
    int i;
    menu();

    return(0);
}