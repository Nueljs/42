/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:58:34 by macerver          #+#    #+#             */
/*   Updated: 2025/11/21 18:43:31 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	int		i;
	int		len;

	cc = (char) c;
	i = 0;
	while (s[i])
		i++;
	len = i;
	while (len >= 0)
	{
		if (s[len] == cc)
			return ((char *) &s[len]);
		len--;
	}
	return (NULL);
}


// int	main(void)
// {
// 	char	*s = "teste";
// 	printf("%s", ft_strrchr(s, 'e'));
// 	return 0;
// }