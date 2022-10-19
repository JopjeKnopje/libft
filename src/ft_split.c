/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/19 13:14:42 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	**ft_split(char const *s, char c)
{
	// Todo make modular

	char *delim = ft_strchr(s, c);
	int delim_index = (delim - s);
	char *pre = ft_substr(s, 0, delim_index);
	char *post = ft_substr(s, delim_index + 1, ft_strlen(delim + 1));
	
	char **s_split = (char **) malloc((sizeof(char **) * 2) + 1);
	s_split[0] = pre;
	s_split[1] = post;
	s_split[2] = 0;
	return s_split;
}
