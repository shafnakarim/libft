/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:10:00 by srayees           #+#    #+#             */
/*   Updated: 2025/07/23 14:03:15 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	int		len;
	int		i;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = 0;
	len = end - start;
	trimmed = malloc((sizeof(char)) * (len + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
// # include <stdio.h>
// int main()
// {
//     char *s1;
//     char *set;
//     char *result;

//     s1 = "   IBM Mainframe  ";
//     set = " ";
//     result = ft_strtrim(s1, set);
//     printf("original : %s\n", s1);
//     printf("trim set : %s\n", set);
//     printf("trimmed : %s\n", result);

//     free(result);

// }