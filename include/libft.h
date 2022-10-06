/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <marvin@42.fr>                         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 15:05:40 by joppe         #+#    #+#                 */
/*   Updated: 2022/10/06 13:01:48 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
// For testing
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "string.h"


// TODO Add doc in the header file
int ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int ft_strlen(const char *c);

void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dest, const char *src, size_t size);

#endif
