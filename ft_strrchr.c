/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:34:23 by srayees           #+#    #+#             */
/*   Updated: 2025/07/21 14:39:38 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*text = "hello.world";
// 	char		*first_dot;

// 	char *last_dot = ft_strrchr(text, 'l');
// 			if (last_dot)
// 		    printf("Last '.' found at:  %s\n", last_dot);
// 	return (0);
// }
