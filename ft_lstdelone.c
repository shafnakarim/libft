/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:12:26 by srayees           #+#    #+#             */
/*   Updated: 2025/07/31 12:48:45 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
//     ft_lstdelone(node1, del); 
//     t_list *current = head;
//     while(current)
//     {
//         printf("%s\n", (char *)current->content);
// 		current = current->next;
//     }
// 	ft_lstdelone(head, del);
// 	return (0);
// }