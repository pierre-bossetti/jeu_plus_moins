# STRUCTURE MAKEFILE
#cible : dependances
#	commande
####################################################
# ORDRE EXECUTION COMMANDES
#tant que la commande n'a pas TOUTES les dependances
#elle passe a la commmande suivante
#a chaque fois revient en haut verifier dependances
####################################################
# AVANTAGES MAKEFILE
# Ne recompile uniquement que les fichiers modifies
# Compilation demande bcp de ressources = de .c->.o
# Gain de temps pour la compilation
# 1.Préprocesseur -> 2. Compilation -> 3. Assemblage 
# 1. .h -> .c 
# 2. .c -> .o
# 3. .o + .a -> .exec

CC = gcc
RM = rm -f
EXEC = game_plus_moins

SRCS =	choose_difficulty.c \
		choose_game_mode.c \
		plus_moins.c \
		restart_game.c

#tous les fichiers .c deviennent .o
OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Werror -Wextra

all : ${EXEC}

#toutes les cibles .o je vais les creer avec les fichiers .o
# $@ cible | $< = dependance
%.o : %.c
	${CC} ${CFLAGS} -o $@ -c $<

#creation de l'exec
# $^ liste des dependances
${EXEC} : ${OBJS}
	${CC} ${CFLAGS} -o $@ $^

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${EXEC}

re : fclean all
