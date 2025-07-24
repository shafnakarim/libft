/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:41:38 by srayees           #+#    #+#             */
/*   Updated: 2025/07/21 14:42:56 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	j = 0;
	while (src[j] && j < dstsize - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "hello world";
// 	char	dest[100];
// 	int		i;

// 	i = ft_strlcpy(dest, src, 0);
// 	printf("%s\n", src);
// 	printf("%s\n", dest);
// 	printf("%d\n", i);
// 	return (0);
// }
