/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:47:26 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/13 17:18:03 by joppe         ########   odam.nl         */
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

	printf("pre %s | pre_len %ld\n", pre, pre_len);
	printf("post %s | post_len %ld\n", post, post_len);

	return NULL;

}
