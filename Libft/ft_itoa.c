/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 06:19:59 by macerver          #+#    #+#             */
/*   Updated: 2025/11/20 17:23:49 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(long n)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*my_n;
	int		n_len;
	long	aux;
	int		offset;

	if (n == 0)
		return (ft_strdup("0"));
	aux = n;
	if (aux < 0)
		aux = -aux;
	n_len = count_digits(aux);
	offset = (n < 0);
	my_n = malloc(n_len + offset + 1);
	if (!my_n)
		return (NULL);
	my_n[n_len + offset] = '\0';
	if (offset)
		my_n[0] = '-';
	while (--n_len >= 0)
	{
		my_n[n_len + offset] = (aux % 10) + '0';
		aux /= 10;
	}
	return (my_n);
}

// int	main (void)
// {
// 	puts(ft_itoa(349));
// 	puts(ft_itoa(-342));
// 	puts(ft_itoa(-2147483648));
// 	// puts(ft_itoa(349));
// 	// puts(ft_itoa(349));
// 	return 0;
// }