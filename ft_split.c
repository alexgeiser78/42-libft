/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageiser <ageiser@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:07:55 by ageiser           #+#    #+#             */
/*   Updated: 2022/10/07 12:25:46 by ageiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}	
//ligne 15 fonction qui compte le nombre de (c) et cree des 
//[ ] sur chaque (str++). Utilise pour le malloc de la fonction principale

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (finish - start + 1));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}
// ligne 38 fonction avec pointeur de duplicage de mot(*pointeur sur chaine 
// de caractere, index de la fonction ft_split, i de la fonction ft_split). 
// sert a ecrire le mot dans fonction principale
// ligne 44 malloc de taille d'un (char * difference entre finish et 
// start +1) pour chaque mot

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		index;
	char	**split;

	split = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
		split[j] = word_dup(s, index, i);
		index = -1;
		j++;
		}
	i++;
	}
split[j] = NULL;
	return (split);
}
//ligne 56 fonction pointeur de pointeur [ ] [ ]
//ligne 61 creation d'un pointeur de pointeur
//ligne 63 allocation de la memoire de taille d'un 
//pointeur de char * (nbre de mot +1)
//ligne 69 tant que i est plus petit ou egal a la longueur de (s)
//ligne 71 si la chaine a l'indice i != caracter de coupure et index < 0
//ligne 72 index = i
//ligne 79 i++ jusqu'a ce que 
//linge 73 s[i] == caractere ou que ( i == strlen(s) et index >= 0)
//ligne 75 split a l'indice [j] = resultat de la fonction word-dup
//ligne 76 l-indice retourne a -1 pour refaire la boucle while
//ligne 75 ecriture de split j
//ligne 81 rajout de fin de chaine 
