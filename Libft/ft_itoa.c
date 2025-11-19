/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 06:19:59 by macerver          #+#    #+#             */
/*   Updated: 2025/11/19 17:36:38 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*my_n;
	int		n_len;
	int		aux;
	
	n_len = 0;
	aux = -n;
	while (aux != 0)
	{
		aux = aux / 10;
		n_len++;
	}
	if (n < 0)
		my_n = malloc(n_len + 2);
	else 
		my_n = malloc(n_len + 1);
	if (!my_n)
		return (NULL);
	if (n < 0)
	{
		aux = -n;
		my_n[0] = '-';
		while (n_len > 0)
		{
			my_n[--n_len] = (n % 10) + '0';
				n /= 10;
		}
	}
	else
		while (n_len >=0)
		{	
			my_n[--n_len] = (n % 10) + '0';
			n /= 10;
		}
	return (my_n);
}

int	main (void)
{
	puts(ft_itoa(349));
	puts(ft_itoa(-342));
	puts(ft_itoa(0));
	// puts(ft_itoa(349));
	// puts(ft_itoa(349));
	return 0;
}