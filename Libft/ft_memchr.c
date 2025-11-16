/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:20:03 by macerver          #+#    #+#             */
/*   Updated: 2025/11/16 19:14:52 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	size_t			i;
	unsigned char	cc;

	s2 = (unsigned char *) s;
	cc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (s2[i] == cc)
			return ((void *) &s2[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const void	*s = "hola";
// 	void	*ptr = ft_memchr(s, 'x', 3);
// 	printf("Carácter encontrado: %c\n", *(unsigned char *)ptr);
// 	return 0;
// }
