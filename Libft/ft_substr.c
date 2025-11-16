/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:55:48 by macerver          #+#    #+#             */
/*   Updated: 2025/11/16 20:46:39 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > (unsigned int) ft_strlen(s))
	{
		dest = malloc(1);
		dest[i] = '\0';
		return (dest);
	}
	if (len > (size_t) ft_strlen(s + start))
		len = ft_strlen(s + start);
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < len && s[start])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char *s = ft_substr("lorem ipsum dolor sit amet", 400, 20);
// 	printf("%s", s);
// 	free (s);
// 	return 0;
// }