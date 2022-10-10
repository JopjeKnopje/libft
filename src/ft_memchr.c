/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 14:10:57 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/10 15:35:20 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *ptr = (unsigned char *) s;

	i = 0;
	while (ptr[i] && i < n)
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	return (0);
}
