/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 09:41:09 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/12 10:03:09 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_atoi(const char *nptr)
{
	int num = 0;
	
	printf("input %s\n", nptr);

	for (int i = 0; nptr[i] != '\0'; ++i)
	{
		num = num * 10 + nptr[i] - '0';
	}

	return num;
}
