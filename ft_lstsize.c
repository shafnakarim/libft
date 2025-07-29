/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 13:53:48 by srayees           #+#    #+#             */
/*   Updated: 2025/07/29 15:25:57 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// # include <stdio.h>

// int main()
// {
// 	t_list *head = NULL;
// 	t_list *node1 = ft_lstnew("test1");
// 	ft_lstadd_front(&head, node1);
// 	int size = ft_lstsize(head);
// 	printf ("size of list : %d\n", size);
// 	free(node1);
// 	return(0);
// }