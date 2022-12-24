#include "plus_moins.h"

void    restart_game(int *continuer_partie)
{
    char    c;

    c = 0;
    printf("Souhaitez vous faire une autre partie ? oui[y] ou non[n]\n");
    scanf(" %c", &c);

    if(c == 'y')
        *continuer_partie = 1;
    else
        *continuer_partie = 0;
}

