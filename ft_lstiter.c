/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:17:42 by srayees           #+#    #+#             */
/*   Updated: 2025/07/31 13:06:00 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// #include <stdlib.h>

// // Function to apply to each node's content
// void print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int main(void)
// {
// 	t_list *head = ft_lstnew("Pen");
// 	t_list *node1 = ft_lstnew("Book");
// 	t_list *node2 = ft_lstnew("Paper");

// 	head->next = node1;
// 	node1->next = node2;

// 	ft_lstiter(head, print_content);

// 	return 0;
// }
