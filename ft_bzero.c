/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:21:30 by srayees           #+#    #+#             */
/*   Updated: 2025/07/16 10:28:35 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		*ptr++ = 0;
		i++;
	}
}
// #include <stdio.h>

// int main(void)
// {
//     char str[] = "Abu Dhabi";

//     printf("Before ft_bzero: %s\n", str);

//     ft_bzero(str, 4);  // Set the first 3 characters to zero

//     printf("After ft_bzero: ");
//     int i = 0;
// 	while (i < 9)
// 	{
// 		if (str[i] == '\0')
// 			printf("\\0");
// 		else
// 			printf("%c", str[i]);
// 	    i++;
// 	}
//     return 0;
// }