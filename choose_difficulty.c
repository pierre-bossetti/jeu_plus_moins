#include "plus_moins.h"

void    choose_difficulty(int *nombre_max)
{
    int level;

    level = 0;
    printf("Quel niveau de difficulte souhaitez-vous?\n");                  
    printf("-- 1 = entre 1 et 100\n");
    printf("-- 2 = entre 1 et 1000\n");
    printf("-- 3 = entre 1 et 10000\n");
    scanf("%d", &level);

    if (level <= 0 || level > 3)
    {
        level = 1;
        printf("Niveau standard choisi : %d\n", level);
    }
    if (level == 1)
        *nombre_max = 100;                                                       
    else if (level == 2)
        *nombre_max = 1000;
    else
        *nombre_max = 10000;
}
