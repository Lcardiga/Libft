/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:11:59 by lcardiga          #+#    #+#             */
/*   Updated: 2021/11/09 21:39:34 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME:
 	ft_itoa
PROTOTYPE:
	char *ft_itoa(int n)
PARAMETERS:
	the integer to convert.
RETURN VALUE:
	The string representing the integer.  NULL if the
	allocation fails.
EXTERNAL FUNCTIONS:
 	malloc
DESCRIPTION:
	Allocates (with malloc(3)) and returns a string
	representing the integer received as an argument.
	Negative numbers must be handled.
 */

#include "libft.h"

int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_sign(int n)
{
	int	sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	return (sign);
}

char	*ft_null(int n, char *str)
{
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		count;
	int		num;
	char	*str;
	int		sign;

	sign = ft_sign(n);
	num = sign * n;
	count = ft_count(n);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (str);
	ft_null(n, str);
	str[count] = '\0';
	while (n != 0)
	{
		str[--count] = (char)((n % 10) * sign + '0');
		n = n / 10;
	}
	count--;
	if (sign < 0)
		str[count] = '-';
	return (str);
}
