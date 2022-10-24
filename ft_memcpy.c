/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <marvin@42.fr>                         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:30:38 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/24 15:10:06 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s_ptr;
	char	*d_ptr;

	if (!n)
		return (dest);
	if (!dest)
		return (NULL);
	if (!src)
		return (NULL);
	s_ptr = (char *) src;
	d_ptr = (char *) dest;
	i = 0;
	while (i < n)
	{
		d_ptr[i] = s_ptr[i];
		i++;
	}
	return (d_ptr);
}
