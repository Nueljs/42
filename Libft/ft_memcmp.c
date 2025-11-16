/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:38:48 by macerver          #+#    #+#             */
/*   Updated: 2025/11/16 18:46:37 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_aux;
	unsigned char	*s2_aux;

	i = 0;
	s1_aux = (unsigned char *) s1;
	s2_aux = (unsigned char *) s2;
	while (i < n )
	{
		if((unsigned char) s1_aux[i] != (unsigned char) s2_aux[i])
			return ((unsigned char) s1_aux[i] - (unsigned char) s2_aux[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_memcmp("abb","abc", 4));
// 	return 0;
// }