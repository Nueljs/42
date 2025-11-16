/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:24:42 by macerver          #+#    #+#             */
/*   Updated: 2025/11/16 18:47:01 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

// int	main(void)
// {
// 	printf("%d", ft_strncmp("abbc","abbz", 2));
// 	return 0;
// }