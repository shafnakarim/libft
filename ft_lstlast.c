/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:04:29 by srayees           #+#    #+#             */
/*   Updated: 2025/07/29 15:25:34 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
// 	t_list *head = NULL;
// 	t_list *node1 = ft_lstnew("test1");
// 	t_list *node2 = ft_lstnew("test2");
// 	ft_lstadd_back(&head, test1);
// 	ft_lstadd_back(&head, test2);
// 	t_list *last = ft_lstlast(head);
// 	if (last)
// 		printf("Last node content: %s\n", (char *)last->content);
// 	else
// 		printf("List is empty.\n");
// 	free(test1);
// 	free(test2);
// 	return 0;
// }
