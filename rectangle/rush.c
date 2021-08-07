#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	rush (int colonne, int ligne)
{
	int	c; //renvoie au numéro de colonne
	int	l; //renvoie au numéro de ligne

	l = 0; 
	while (++l <= ligne) //on incrémente dans une première boucle les numéros de ligne, on se déplace donc de haut en bas,                                                                                                                                  jusqu'à la taille max donnée par ligne dans les paramètres de rush
	{
		c = 0;
		while (++c <= colonne) //on incrémente les numéros de colonne jusqu'à la taille, on se déplace donc de gauche à droite,																	max donnée par colonne dans les paramètres de rush
		{
			if (l == 1 && (c == 1 || c == colonne)) // ici on s'interresse aux conditions d'affichage 																		  de 'A' (uniquement sur la première ligne et 																			 seulement au début et à la fin
				ft_putchar('A');
			else if (l == ligne && (c == 1 || c == colonne)) // ici on s'interresse aux conditions d'affichage 																		   de 'C' (comme 'A' mais sur la dernière ligne)
				ft_putchar('C');
			else if (c == 1 || c == colonne || l == 1 || l == ligne) //ici on s'interresse aux conditions d'affichage de 'B'                                                                                                                                        (uniquement en début et fin de chaque ligne et de chaque colonne,                                                                                                                               sauf les quand y'a déja A ou C)
				ft_putchar('B');
			else 
				ft_putchar(' '); //dans tous les autres cas on affiche un espace (on est à l'intérieur du rectangle)
		}
		ft_putchar('\n'); //on affiche ici un retour à la ligne en sortie de boucle sur les colonnes (quand on arrive à la fin de la ligne en fait)
	}
}

int	main(void)
{
	rush (5,1);
	return(0);
}
