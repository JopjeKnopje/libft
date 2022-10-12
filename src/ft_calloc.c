/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 19:15:59 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/10 19:47:37 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t buf_size;

	buf_size = nmemb * size;
	if (!buf_size)
		return NULL;
	void *buffer = malloc(buf_size);
	if (buffer)
		bzero(buffer, buf_size);
	else 
		return NULL;
	return buffer;
}
