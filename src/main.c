/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 09:00:19 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/06 13:27:00 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void test_ft_isalpha()
{
	int i;

	i = -1;
	while (i++ <= 127)
		printf("%c \t ft_isalpha %d \t isalpha %d\n", i, ft_isalpha(i), isalpha(i));
}

void test_ft_isdigit()
{
	int i;

	i = -1;
	while (i++ <= 127)
		printf("%c \t ft_isdigit %d \t isdigit %d\n", i, ft_isdigit(i), isdigit(i));
}

void test_ft_isalnum()
{
	int i;

	i = -1;
	while (i++ <= 127)
		printf("%c \t ft_isalnum %d \t isalnum %d\n", i, ft_isalnum(i), isalnum(i));
}

void test_ft_isascii()
{
	int i;

	i = -1;
	while (i++ <= 127)
		printf("%c \t ft_isascii %d \t isascii %d\n", i, ft_isascii(i), isascii(i));
}

void test_ft_isprint()
{
	int i;

	i = -1;
	while (i++ <= 127)
		printf("%c \t ft_isprint %d \t isprint %d\n", i, ft_isprint(i), isprint(i));
}

void test_ft_strlen()
{
	char *str = "test123";
	printf("%s \t ft_strlen %d \t strlen %ld\n", str, ft_strlen(str), strlen(str));
}

void test_ft_memset()
{
	char *str1 = strdup("test");
	char *str2 = strdup("test");

	printf("ft_memset %s \t memset %s\n", str1, str2);
	char *ft_ptr = ft_memset(str1, 'a', ft_strlen(str1));
	char *ptr = memset(str2, 'a', ft_strlen(str2));
	printf("ft_memset %s \t memset %s\n", ft_ptr, ptr);
}

void test_ft_bzero()
{
	char *str1 = strdup("test");
	char *str2 = strdup("test");

	printf("ft_bzero %s \t bzero %s\n", str1, str2);
	ft_bzero(str1, ft_strlen(str1));
	bzero(str2,  ft_strlen(str2));
	printf("ft_bzero %s \t bzero %s\n", str1, str2);
}

void test_ft_memcpy()
{
	char *ft_str1 = "test123";
	int ft_len = ft_strlen(ft_str1);
	char *ft_str2 = malloc(ft_len);
	
	// ft_str2 = ft_str1 + 5;
			
	printf("ft_str1 %s \t ft_str2 %s \n", ft_str1, ft_str2);
	ft_memcpy(ft_str2, ft_str1, ft_len);
	printf("ft_str1 %s \t ft_str2 %s \n", ft_str1, ft_str2);

	printf("----------------------------------------------------------\n");

	char *str1 = "test123";
	int len = strlen(str1);
	char *str2 = malloc(len);

	// str2 = str1 + 5;

	printf("str1 %s \t\t str2 %s \n", str1, str2);
	memcpy(str2, str1, len);
	printf("str1 %s \t\t str2 %s \n", str1, str2);
	
	free(ft_str2);
	free(str2);

}

// TODO test ft_memmove
void test_ft_memmove()
{
	const int offset = 5;
	char *ft_s1 = strdup("test123");
	int len = ft_strlen(ft_s1);
	char *ft_s2 = malloc(len + 1);

	ft_s2 = (ft_s1 + offset);
		
	printf("ft_s1 %s \t\t ft_s2 %s \n", ft_s1, ft_s2);
	ft_memcpy(ft_s2, ft_s1, len);
	printf("ft_s1 %s \t ft_s2 %s \n", ft_s1, ft_s2);
	
	free(ft_s1);
	// free((ft_s2 - offset));

	printf("----------------------------------------------------------\n");

	char *s1 = strdup("test123");
	len = strlen(s1);
	char *s2 = malloc(len + 1);

	s2 = (s1 + 5);
		
	printf("s1 %s \t\t s2 %s \n", s1, s2);
	memcpy(s2, s1, len);
	printf("s1 %s \t s2 %s \n", s1, s2);

	free(s1);
	// free((s2 - offset));
}

void test_ft_strlcpy()
{
	char *ft_s1 = strdup("test123");
	int len = ft_strlen(ft_s1);
	char *ft_s2 = malloc((sizeof(char) * len));
	
	printf("ft_s1 %s \t ft_s2 %s \n", ft_s1, ft_s2);
	int output = ft_strlcpy(ft_s2, ft_s1, len);
	printf(" t_s1 %s \t ft_s2 %s \n", ft_s1, ft_s2);
	printf("return val %d\n", output);

	printf("----------------------------------------------------------\n");

	char *s1 = strdup("test123");
	// len = str en(s1);
	char *s2 = malloc((sizeof(char) * len));
	
	printf("s1 %s \t s2 %s \n", s1, s2);
	output = strlcpy(s2, s1, len);
	printf("s1 %s \t s2 %s \n", s1, s2);
	printf("return val %d\n", output);
}

void test_ft_strlcat()
{
	const char *base_s = "test123";
	char *ft_s1 = malloc(ft_strlen(base_s) + 0);
	ft_strlcpy(ft_s1, base_s, ft_strlen(base_s) + 1);

	char *ft_s2 = strdup("appended");
	// int len = ft_strlen(ft_s1) + ft_strlen(ft_s2);
	int len = 1;

	printf("ft_s1 %s \t ft_s2 %s \n", ft_s1, ft_s2);
	int output = ft_strlcat(ft_s2, ft_s1, len);
	printf("ft_s1 %s \t ft_s2 %s \n", ft_s1, ft_s2);
	printf("return val %d\n", output);
	
	free(ft_s1);
	free(ft_s2);

	printf("----------------------------------------------------------\n");

	char *s1 = malloc(strlen(base_s) + 0);
	strlcpy(s1, base_s, strlen(base_s) + 1);
	char *s2 = strdup("appended");
	// len = ft_strlen(s1) + ft_strlen(s2);
	
	printf("s1 %s \t s2 %s \n", s1, s2);
	output = strlcat(s2, s1, len);
	printf("s1 %s \t s2 %s \n", s1, s2);
	printf("return val %d\n", output);

	free(s1);
	free(s2);
	
}

int	main()
{
	// test_ft_isalpha();
	// test_ft_isdigit();
	// test_ft_isalnum();
	// test_ft_isascii();
	// test_ft_isprint();	
	// test_ft_strlen();
	// test_ft_memset();
	// test_ft_bzero();
	// test_ft_memcpy();
	// test_ft_memmove();
	// test_ft_strlcpy();
	test_ft_strlcat();

	return 0;
}

