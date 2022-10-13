/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/13 13:02:25 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	**ft_split(char const *s, char c)
{
	int i;
	int split_index;
	
	i = 0;
	split_index = 0;
	while (s[i])
	{
		i++;
	}
	printf("split_index %d\n", split_index);

}
