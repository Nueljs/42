/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 06:23:35 by macerver          #+#    #+#             */
/*   Updated: 2025/11/21 18:11:19 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			words++;
			while (str[i] != c)
				i++;
		}
		i++;
	}
	return words;
}

int	word_len(const char *str, char c)
{
	int	j;
	int	word_len;

	j = 0;
	word_len = 0;
	if (str[j] != c)
	{
		while (str[j] != c)
		{
			j++;
			word_len++;
		}
	}
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[count_words(s, c)] = NULL;
	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] != c)
		{
			split[i] = malloc(word_len(&s[j], c) + 1);
			if (!split[i])
			{
				free (split);
				return (NULL);
			}
			ft_strlcpy(split[i], &s[j], word_len(&s[j], c));
			i++;
			while (s[j] != c)
				j++;
			continue ;
		}
		j++;
	}
	return (split);
}



// int main(void)
// {
//     char *s = "olol                              ";
//     char sep = ' ';

//     printf("String: \"%s\"\n", s);
//     printf("Separador: '%c'\n\n", sep);

//     char **split = ft_split(s, sep);

//     // Comprobar si es NULL
//     if (!split)
//     {
//         printf("ft_split devolvió NULL\n");
//         return 1;
//     }

//     // Imprimir resultado
//     int i = 0;
//     while (split[i])
//     {
//         printf("split[%d] = \"%s\"\n", i, split[i]);
//         i++;
//     }

//     // Liberar memoria
//     i = 0;
//     while (split[i])
//     {
//         free(split[i]);
//         i++;
//     }
//     free(split);

//     return 0;
// }