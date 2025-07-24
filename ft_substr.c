/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:43:46 by srayees           #+#    #+#             */
/*   Updated: 2025/07/21 14:35:44 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*substr;
	size_t	i;
	size_t	s1;

	if (!s)
		return (NULL);
	s1 = ft_strlen(s);
	if (start >= s1)
		return (ft_strdup(""));
	if (len > s1 - start)
		len = s1 - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>
// int main()
// {
//     char *s1 = "werfdgfchgf ughjvhjbvj";
//     char *sub1 = ft_substr(s1, 5, 6);
//     char *sub2 = ft_substr(s1, 2, 8);
//     char *sub3 = ft_substr(s1, 50, 2);

//     printf ("sub1: %s\n", sub1);
//     printf ("sub2 : %s\n", sub2);
//     printf ("sub3 : %s\n", sub3);

//     free(sub1);
//     free(sub2);
//     free(sub3);
// }
