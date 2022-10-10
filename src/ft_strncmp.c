/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 13:43:39 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/10 15:27:07 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t  i;
	size_t  j;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			break;
		i++;
		j = 0;
		while (s1[i] == s2[i + j])
			j++;
	}
	return (s1[i] - s2[i]);
}
