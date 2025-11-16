/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:48:54 by macerver          #+#    #+#             */
/*   Updated: 2025/11/16 18:46:50 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*s_copy;

	len = ft_strlen(s);
	i = 0;
	s_copy = (char *)malloc((len + 1) * sizeof(char));
	if (!s_copy)
		return (NULL);
	while (i < len)
	{
		s_copy[i] = s[i];
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}

// int	main(void)
// {
// 	char	*s = "Hola mundo";
// 	char	*s2 = ft_strdup(s);
// 	puts(s2);
// 	return 0;
// }