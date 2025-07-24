/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:00:27 by srayees           #+#    #+#             */
/*   Updated: 2025/07/16 15:22:57 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
//     char c;
//     printf ("enter a character: ");
//     scanf("%c", &c);
//     int result = ft_toupper(c);
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