/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 09:41:09 by joppe         #+#    #+#                 */
/*   Updated: 2022/11/01 16:27:40 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_atoi(const char *s)
{
	int	i;
	int	num;
	int	sign;

	num = 0;
	sign = 0;
	i = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	while ((s[i] == '-' || s[i] == '+') && !sign) 
	{
		if (s[i] == '-')
			sign = -1;
		if (s[i] == '+')
			sign = 1;
		i++;
	}
	// sign = (sign == 0);
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			break ;
		num = num * 10 + s[i] - '0';
		i++;
	}
	return (num * sign);
}
