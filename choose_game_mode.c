#include "plus_moins.h"

void    choose_game_mode(int nbr_max, int *nombre_trouver)
{
    int game_mode;
    int nbr_min;

    game_mode = 0;
    nbr_min = 1;

    do
    {
        printf("Quel mode de jeu souhaitez vous? 1 joueur ou 2 joueurs? ");
        scanf("%d", &game_mode); 
        if (game_mode == 1)
        {                   
            srand(time(NULL));
            *nombre_trouver = (rand() % (nbr_max - nbr_min + 1)) + nbr_min;
        }                   
        else if (game_mode == 2)
        {                                                                       
            printf("Saissisez le nombre a trouver: ");
            scanf("%d", nombre_trouver);
        }  
    } while (game_mode < 1 ||game_mode > 2);
}
