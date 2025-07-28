/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srayees <srayees@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:52:12 by srayees           #+#    #+#             */
/*   Updated: 2025/07/28 11:06:59 by srayees          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n, int b)
{
	int	count;

	count = 0;
	if (n <= 0)
		++count;
	while (n && ++count)
		n /= b;
	return (count);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*ret;
	const char	*digits = "0123456789";
	long		num;

	num = n;
	len = ft_numlen(n, 10);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ret[len] = 0;
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
		ret[0] = '-';
	while (num)
	{
		if (num > 0)
			ret[--len] = digits[num % 10];
		else
			ret[--len] = digits[num % 10 * -1];
		num /= 10;
	}
	return (ret);
}

// #include <stdio.h>
// int main()
// {
// 	char *rsult = ft_itoa(-2147483648);
// 	printf("string value : %s\n", rsult);
// }
