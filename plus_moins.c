#include "plus_moins.h"

int main (void)
{
    int nombre_trouver;
    int nombre_input;
    int essais;
    int continuer_partie;
    int nombre_max;

    continuer_partie = 1;
    nombre_max = 0;
    nombre_input = 0;
    nombre_trouver = 0;
    essais = 0;

    while (continuer_partie)
    {
        choose_difficulty(&nombre_max);
        choose_game_mode(nombre_max, &nombre_trouver);

        do
        {
            essais++;
            printf("Quel est le nombre ? ");
            scanf("%d", &nombre_input);
        
            if (nombre_trouver < nombre_input)
                printf("C'est moins !\n");
            else if (nombre_trouver > nombre_input)
                printf("C'est plus !\n");
            else
                printf("Bravo, vous avez trouve le nombre mystere en %d essais\n", essais);
        } while (nombre_trouver != nombre_input);
        
        restart_game(&continuer_partie);
    }
}
