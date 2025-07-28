/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:36:10 by srayees           #+#    #+#             */
/*   Updated: 2025/07/28 11:25:14 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char s1[] = "13254365ghcjvgh";
// 	char s2[] = "43576578gfjhgkj";

// 	ft_memmove(s1, s2, 5); //copy 5 bytes from s2 into s1
// 	printf("ft_memmove result: %s\n", s1);

// 	char s3[] = "HelloWorld";
// 	ft_memmove(s3 + 2, s3, 5);
// 	printf("ft_memmove result (overlapping): %s\n", s3);

// 	return (0);
// }