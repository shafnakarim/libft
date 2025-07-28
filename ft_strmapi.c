/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:22:29 by srayees           #+#    #+#             */
/*   Updated: 2025/07/28 11:05:50 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <ctype.h>

// char	my_fuction(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (toupper(c));
// 	else
// 		return (tolower(c));
// }
// int main()
// {
// 	const char *str = "life is more colourfull";
// 	char *outstr = ft_strmapi(str, my_fuction);
// 	printf("input : %s\n", str);
// 	printf("modified : %s\n", outstr);
// 	free(outstr);
// 	return(0);
// }
