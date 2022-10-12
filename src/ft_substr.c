/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 11:38:15 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/12 11:55:49 by jboeve        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;		
	char *s_d;

	s_d = malloc(len * sizeof(char) + 1);
	if (!s_d)
		return NULL;
	i = start;
	while (s[i] && i < len)
	{
		s_d[i] = s[i];
	}
	s_d[i] = 0;
	return s_d;
}

