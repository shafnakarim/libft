/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:03:08 by srayees           #+#    #+#             */
/*   Updated: 2025/07/25 16:27:56 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// # include <stdio.h>
// # include <ctype.h>

// void	uppercase_even(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 		*c = toupper(*c);
// }

// int main(void)
// {
// 	char str[] = "libftproject";

// 	printf("Before: %s\n", str);
// 	ft_striteri(str, uppercase_even);
// 	printf("After : %s\n", str);

// 	return (0);
// }
