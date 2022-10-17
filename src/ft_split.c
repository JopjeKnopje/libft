/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/17 10:04:12 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	**ft_split(char const *s, char c)
{
	char *post = ft_strchr(s, (int) c);
	
	size_t post_len = ft_strlen(post);
	size_t pre_len = ft_strlen(s) - post_len;

	char *pre = malloc(pre_len * sizeof(char) + 1);

	ft_strlcpy(pre, s, pre_len + 1);

	// TODO Should be sizeof(char)
	char **arr = malloc(sizeof (char*) * 2);
	arr[0]  = malloc(sizeof (char*) * pre_len + 1);
	arr[0] = pre;
	arr[1] = (post + 1);

	return arr;

}
