/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macerver <macerver@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:11:25 by macerver          #+#    #+#             */
/*   Updated: 2025/11/23 21:46:55 by macerver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = malloc(sizeof(t_list));
	if (!nodo)
		return (NULL);
	nodo -> content = content;
	nodo -> next = NULL;
	return (nodo);
}

// int	main(void)
// {
// 	char	*str = "Hola 42";
// 	t_list	*node = ft_lstnew(str);

// 	if (!node)
// 	{
// 		printf("Error\n");
// 		return (1);
// 	}
// 	printf("Content: %s\n", (char *)node->content);
// 	printf("Next: %p\n", (void *)node->next);

// 	free(node);
// 	return (0);
// }
