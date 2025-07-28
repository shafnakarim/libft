/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:34:40 by srayees           #+#    #+#             */
/*   Updated: 2025/07/28 11:25:01 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char s1[] = "13254365ghcjvgh";
// 	char s2[] = "43576578gfjhgkj";

// 	ft_memcpy(s1, s2, 5); //copy 5 bytes from s2 into s1
// 	printf("ft_memcpy result: %s\n", s1);

// 	char s3[] = "HelloWorld";
// 	ft_memcpy(s3 + 2, s3, 5);
// 	printf("ft_memcpy result (overlapping): %s\n", s3);
		// overlap not possible and will get corrupted output

// 	return (0);
// }