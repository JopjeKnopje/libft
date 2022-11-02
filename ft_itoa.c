/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 00:22:38 by joppe         #+#    #+#                 */
/*   Updated: 2022/11/02 21:33:23 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	int_len(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		sign;
	int		value;
	char	*s;

	sign = (n < 0);
	len = int_len(n) + sign;
	s = (char *) malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (sign)
		s[0] = '-';
	i = len - 1;
	while (n)
	{
		value = (n % 10);
		if (sign)
			value *= -1;
		s[i] = value + '0';
		n /= 10;
		i--;
	}
	s[len + 1] = 0;
	return (s);
}
