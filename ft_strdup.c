/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:46:39 by srayees           #+#    #+#             */
/*   Updated: 2025/07/21 12:39:49 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (0);
	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *s;
// 	char *s1 = "shafna rayees";
// 	s = ft_strdup(s1);
// 	printf("%s", s);
// 	free(s);
// 	return (0);
// }
