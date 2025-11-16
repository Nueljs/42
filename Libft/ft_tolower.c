/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:34:15 by macerver          #+#    #+#             */
/*   Updated: 2025/11/16 18:47:24 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	printf("%c\n", ft_tolower('A'));
// 	printf("%c\n", ft_tolower('?'));
// 	printf("%c\n", ft_tolower('g'));
// 	printf("%c\n", ft_tolower('d'));
// 	printf("%c\n", ft_tolower('0'));
// 	return 0;
// }