/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <marvin@42.fr>                         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:30:38 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/06 09:18:49 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *s_ptr = (char *) src;
	char *d_ptr = (char *) dest;

	// NOTE this check is not required	
	// if (s_ptr + n >= d_ptr)
	// 	return d_ptr;

	i = 0;
	while (i < n)
	{
		d_ptr[i] = s_ptr[i];
		i++;
	}
	return d_ptr;
}
