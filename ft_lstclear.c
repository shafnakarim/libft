/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:13:04 by srayees           #+#    #+#             */
/*   Updated: 2025/07/31 12:56:39 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

// # include <stdio.h>

// void del(void *content)
// {
// 	(void)content;
// }

// int main()
// {
//     t_list *head = ft_lstnew("Pen");
//     t_list *node1 = ft_lstnew("Book");
// 	head->next = node1;
//     t_list *current = head;
//     while(current)
//     {
//         printf("%s\n", (char *)current->content);
// 		current = current->next;
//     }
// 	ft_lstclear(&head, del); 
// 	if (head == NULL)
// 		printf("List successfully cleared.\n");
// 	else
// 		printf("Something went wrong.\n");

// 	return (0);
// }