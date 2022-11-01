/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 20:12:33 by joppe         #+#    #+#                 */
/*   Updated: 2022/11/01 07:37:24 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	find_start(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!ft_strchr(set, s[i]))
			break ;
		i++;
	}
	return (i);
}

int	find_end(char const *s, char const *set)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i)
	{
		if (!ft_strchr(set, s[i]))
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = find_start(s1, set);
	end = find_end(s1, set);
	printf("start %d | end %d\n", start, end);
	return (ft_substr(s1, start, end - start + 1));
}
