/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:39:33 by macerver          #+#    #+#             */
/*   Updated: 2025/11/19 06:20:51 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	int		s_len;
	int		s1_len;
	int		i;

	s1_len = ft_strlen(s1);
	if (s1_len == 0)
		return (ft_strdup(""));
	s_len = s1_len;
	i = 0;
	while(ft_strchr(set, s1[i]))
	{	
		i++;
		s1_len--;
	}
	s_len--;
	while (ft_strchr(set, s1[s_len]) && s_len >= 0)
	{		
		s1_len--;
		s_len--;
	}
	if (s_len < 0)
		return (ft_strdup(""));
	new_s= malloc(s1_len + 1);
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, &s1[i], s1_len + 1);
	return (new_s);
}


// int	main(void)
// {
// 	char *s1 = "aabbbbabbababaHola como estasababab";
// 	char *s2 = "ab";
// 	char *s3 = ft_strtrim(s1, s2);
// 	puts(s3);
// 	return 0;
// }