/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 10:24:25 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/10 13:42:37 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (char*) (s + i);
		i++;
	}
	return 0;
}
