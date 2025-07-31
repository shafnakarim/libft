/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:11:26 by srayees           #+#    #+#             */
/*   Updated: 2025/07/31 12:44:14 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}

// # include <stdio.h>
// int main()
// {
//     t_list *head = ft_lstnew("Pen");
//     t_list *node1 = ft_lstnew("Book");
//     ft_lstadd_back(&head, node1); 
//     t_list *current = head;
//     while(current)
//     {
//         printf("%s\n", (char *)current->content);
// 		current = current->next;
//     }
// 	return (0);
// }