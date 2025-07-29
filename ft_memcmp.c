/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:09:38 by srayees           #+#    #+#             */
/*   Updated: 2025/07/29 15:26:56 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		++s1;
		++s2;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char s1[] = "shafna";
// 	char s2[] = "shafna";

// 	int result = ft_memcmp(s1, s2, 5);
// 	if (result == 0)
// 		printf("equal.\n");
// 	else if (result < 0)
// 		printf (" s1 < s2 . \n");
// 	else 
// 		printf ("s1 > s2. \n");
// 	return (0);
// }	