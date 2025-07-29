/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:51:53 by srayees           #+#    #+#             */
/*   Updated: 2025/07/29 15:25:44 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *data = "Hello, list!";
// 	t_list *node = ft_lstnew(data);
// 	if (node)
// 	{
// 		printf("Content: %s\n", (char *)node->content);
// 		printf("Next: %p\n", (void *)node->next);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	free(node);
// 	return (0);
// }