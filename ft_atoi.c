/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:16:47 by srayees           #+#    #+#             */
/*   Updated: 2025/07/21 14:52:50 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		if (sign == 1 && num > 2147483648)
			return (-1);
		else if ((sign == -1) && (-num < -2147483648))
			return (0);
		str++;
	}
	return (num * sign);
}

// #include <stdio.h>

// int	main(void)

// {
//     printf("%d\n", ft_atoi("321abcd"));
//     printf("%d\n", ft_atoi("21474836468"));
//     printf("%d\n", ft_atoi(" --+++--1234ab567"));
//     return(0);
// }
