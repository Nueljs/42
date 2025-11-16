/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:17:50 by macerver          #+#    #+#             */
/*   Updated: 2025/11/16 18:47:28 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('A'));
// 	printf("%c\n", ft_toupper('?'));
// 	printf("%c\n", ft_toupper('g'));
// 	printf("%c\n", ft_toupper('d'));
// 	printf("%c\n", ft_toupper('0'));
// 	return 0;
// }