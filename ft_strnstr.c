/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:09:35 by srayees           #+#    #+#             */
/*   Updated: 2025/07/29 15:23:01 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && i + j < len && haystack[i
				+ j] == needle[j])
		{
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char	hay[] = "shafna rayees karim";
// 	char 	needle[] = "rayees";
// 	char *result = ft_strnstr (hay, needle, 13);
// 	if (result)
// 		printf ("found : %s\n,", result);
// 	else 
// 		printf ("not found.\n");
// 	return(0);
// }