/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/13 16:57:23 by joppe         #+#    #+#                 */
/*   Updated: 2023/01/30 21:35:26 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 64
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif


char	*get_next_line(int fd);

char	*ft_substr(char const *s, unsigned int start, size_t len);
int		gnl_strlen(char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*strjoin_free(char *s_base, char *s_append);

#endif
