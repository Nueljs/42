/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:49:43 by macerver          #+#    #+#             */
/*   Updated: 2025/11/13 12:55:02 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;
	size_t			i;

	if (!src || !dest)
		return (dest);
	i = 0;
	tmpsrc = (unsigned char *) src;
	tmpdest = (unsigned char *) dest;
	while (i < n)
	{
		tmpdest[i] = tmpsrc[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[12];
// 	char	*src = "hola";
// 	ft_memcpy(dest, src, 2);
// 	puts(dest);
// 	return (0);
// }