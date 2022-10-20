/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 19:59:09 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/20 10:24:31 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buf;
	char	*offset;
	size_t	total_size;

	total_size = ft_strlen(s1) + ft_strlen(s2);
	buf = (char *) malloc(total_size + 1);
	if (!buf)
		return (NULL);
	offset = (buf + ft_strlen(s1));
	if (!ft_memcpy(buf, s1, ft_strlen(s1)))
		return (NULL);
	if (!ft_memcpy(offset, s2, ft_strlen(s2)))
		return (NULL);
	return (buf);
}
