/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 17:26:03 by srayees           #+#    #+#             */
/*   Updated: 2025/07/21 14:23:27 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*text = "hello.world";
// 	char		*first_dot;

// 	first_dot = ft_strchr(text, '.');
// 	// char *last_dot = ft_strrchr(text, 'l');
// 	if (first_dot)
// 	{
// 		printf("First '.' found at: %s\n", first_dot);
// 		// if (last_dot)
// 		//     printf("Last '.' found at:  %s\n", last_dot);
// 	}
// 	return (0);
// }
