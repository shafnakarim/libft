/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:50:35 by srayees           #+#    #+#             */
/*   Updated: 2025/07/16 15:23:45 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	x;

	x = c;
	ptr = b;
	while (len--)
		*ptr++ = x;
	return (b);
}
// #include <stdio.h>

// int main(void)
// {
//     char str[10] = "abcdefghi";

//     printf("Before ft_memset: %s\n", str);

//     ft_memset(str , 'X', 4);

//     printf("After ft_memset:  %s\n", str);

//     return (0);
// }
