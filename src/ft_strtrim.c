/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 20:12:33 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/12 20:21:25 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	// strdup with s1 

	// remove the chars from set

	// free the first string

	// strdup with new string

	char *buf = malloc(ft_strlen(s1) + 1);
	
	int i = 0;
	while (s1[i])
	{
		while (s1[i] != set[j])
		{
			j++;
		}
		if (j >= ft_strlen(set))
		{
			printf("char %c does not meet the set {%s} \n", s1[i], set);
		}
		j = 0;
		i++;
	}


}
