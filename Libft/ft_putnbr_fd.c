/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 06:05:45 by macerver          #+#    #+#             */
/*   Updated: 2025/11/18 06:18:09 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	num;

	num = n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	c = (num % 10) + '0';
	write(fd, &c, 1);
}

// int	main(void){
// 	ft_putnbr_fd(-324, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(75, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(64646512, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(21, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(0, 1);
// }