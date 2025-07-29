/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:57:02 by srayees           #+#    #+#             */
/*   Updated: 2025/07/29 15:25:25 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// # include <stdio.h>
// int main()
// {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew("Book");
//     ft_lstadd_front(&head, node1); 
//     t_list *current = head;
//     while(current)
//     {
//         printf("%s")
//     }
// }