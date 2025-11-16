/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:02:51 by macerver          #+#    #+#             */
/*   Updated: 2025/11/16 18:47:05 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while(haystack[i] && i < len)
	{
		if(haystack[i] == needle[j])
		{
			while (needle[j] == haystack[i + j] && haystack[i + j] && i + j < len)
			{
				j++;
				if (needle[j] == 0)
					return ((char *) haystack + i);
			}
		}
		i++;
		j = 0;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%s", ft_strnstr("hello world", "wor", 7));
// 	return 0;
// }