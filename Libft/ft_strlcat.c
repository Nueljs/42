/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:39:31 by macerver          #+#    #+#             */
/*   Updated: 2025/11/16 18:46:55 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dsize <= dst_len)
		return (dsize + src_len);
	while (src[i] && i < (dsize - dst_len) - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char dst[8] = "Hola";
// 	char src[] = " mundo";
// 	printf("%zu\n", ft_strlcat(dst, src, 8));
// 	printf("%s", dst);
// 	return 0;
// }