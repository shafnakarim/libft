/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:40:08 by srayees           #+#    #+#             */
/*   Updated: 2025/07/16 15:22:53 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
//     char c;
//     printf ("enter a character: ");
//     scanf("%c", &c);
//     int result = ft_tolower(c);
//     if (result != c)
//     {
//         printf ("upper case value : %c\n", result);
//     }
//     else
//     {
//         printf("invalid value.\n");
//     }
//     return(0);
// }