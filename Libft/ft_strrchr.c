/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:58:34 by macerver          #+#    #+#             */
/*   Updated: 2025/11/14 12:12:06 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	int	i;
	int	len;

	cc = (char) c;
	i = 0;
	while (s[i])
		i++;
	len = i;
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i--;
	}
	return ((char *) &s[len]);
}

int	main(void)
{
	char *s = "hola como estas";
	printf("%s", ft_strrchr(s, 'x'));
	return 0;
}