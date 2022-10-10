/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 10:22:08 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/10 10:23:52 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_tolower(int c)
{
	if (ft_isupper(c))
		c += 32;
	return c;
}
