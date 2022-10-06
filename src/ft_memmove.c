/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <marvin@42.fr>                         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 15:04:57 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/05 15:14:35 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	char *s_ptr;
	char *d_ptr;
	char tmp[n];

	s_ptr = (char *) src;
	d_ptr = (char *) dest;

	i = 0;
	while (s_ptr[i])
	{
		tmp[i] = s_ptr[i];
		i++;
	}
	i = 0;
	while (tmp[i])
	{
		d_ptr[i] = tmp[i];
		i++;
	}
	return d_ptr;
}
