/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:58:29 by macerver          #+#    #+#             */
/*   Updated: 2025/11/13 13:30:02 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i;

	if (!dest || !src)
		return (dest);
	tmp_dest = (unsigned char *) dest;
	tmp_src = (unsigned char *) src;
	i = 0;
	if (dest > src)
	{
		while (n-- > 0)
			tmp_dest[n] = tmp_src[n];
		return (dest);
	}
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	unsigned char dest[] ="nose";
// 	unsigned char src[] = "hola que tal";
// 	ft_memmove(dest, src, 3);
// 	printf("%s\n", dest);
// 	unsigned char dest1[] ="nose";
// 	unsigned char src1[] = "hola que tal";
// 	memmove(dest1, src1, 3);
// 	printf("%s", dest1);
// 	return (0);
// }
