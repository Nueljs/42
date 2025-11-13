/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:12:13 by macerver          #+#    #+#             */
/*   Updated: 2025/11/13 14:49:23 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	int		i;

	src_len = ft_strlen(src) + 1;
	if (src_len > size)
		return (src_len);
	while (size-- > 0)
	{
		dst[i++] = src[i++];
	}
	while (i < size - 1)
	{
		dst[i] = '\0';
		i++;
	}
	return (src_len);
}
