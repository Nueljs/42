/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:27:32 by macerver          #+#    #+#             */
/*   Updated: 2025/11/16 18:57:23 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*tp;
	size_t			i;
	unsigned char	*aux;

	i = 0;
	tp = malloc(nmemb * size);
	if (!tp)
		return (NULL);
	aux = tp;
	while (i < nmemb * size)
	{
		aux[i] = 0;
		i++;
	}
	return (tp);
}

// int	main(void)
// {
// 	size_t	i = 0;
// 	int	*fd;
// 	fd = ft_calloc(3, sizeof(int));
// 	if(!fd)
// 		return (1);
// 	while (i < 3)
// 	{
// 		printf("%d\n", fd[i]);
// 		i++;
// 	}
// 	free(fd);
// 	return 0;
// }