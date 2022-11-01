/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 09:41:09 by joppe         #+#    #+#                 */
/*   Updated: 2022/11/01 08:11:49 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *s)
{
	int	num;
	int	i;
	int	sign;

	i = 0;
	num = 0;
	sign = 0;
	while (s[i])
	{
		if (s[i] == ' ')
		{
			i++;
			continue;
		}
		if (s[i] >= 7 && s[i] <= 13)
		{
			i++;
			continue;
		}
		break;
	}
	if (s[i] == '-' && sign == 0)
	{
		sign = -1;
		i++;
	}
	if (s[i] == '+' && sign == 0)
	{
		sign = 1;
		i++;
	}
	if (sign == 0)
		sign = 1;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			break ;
		num = num * 10 + s[i] - '0';
		i++;
	}
	return (num * sign);
}
