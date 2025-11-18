/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 10:39:33 by macerver          #+#    #+#             */
/*   Updated: 2025/11/18 18:26:12 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	int		s1_len;
	int		set_len;
	int		i;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	new_s = ft_strlcpy(new_s, s1, s1_len);
	i = 0;
	while (ft_strchr(new_s, set[i]) && new_s >= ft_strchr(new_s, set[i]))
	{
		while (ft_strchr(new_s, set[i]))
		{
			i++;
			new_s++;
		}
		i = 0;
	}
}
