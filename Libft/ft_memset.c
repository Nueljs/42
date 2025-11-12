/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:33:23 by macerver          #+#    #+#             */
/*   Updated: 2025/11/12 07:54:04 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned char	*s2;
	int	i;

	i = 0;
	s2 = s;
	while (i < n)
	{
		s2[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[7] = "hola 2";
	ft_memset(str, '~', 3);
	puts(str);
	return (0);

}*/
