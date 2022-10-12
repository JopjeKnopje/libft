/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jboeve <jboeve@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 09:00:19 by jboeve        #+#    #+#                 */
/*   Updated: 2022/10/12 11:38:07 by jboeve        ########   odam.nl         */
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
	// int len = ft_strlen(ft_s1) + 1;
	int len = 4;
	char *ft_s2 = malloc((sizeof(char) * len));
	
	printf("ft_s1 %s \t ft_s2 %s \n", ft_s1, ft_s2);
	int output = ft_strlcpy(ft_s2, ft_s1, len);
	printf("ft_s1 %s \t ft_s2 %s \n", ft_s1, ft_s2);
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
	const char *ft_text1 = "test123";
	const char *ft_text2 = "added!";
	char *ft_s1 = malloc(ft_strlen(ft_text1) + ft_strlen(ft_text2) + 1);
	ft_strlcpy(ft_s1, ft_text1, strlen(ft_text1) + 1);
	int len = 4;

	printf("ft %s \t ft %s \n", ft_text1, ft_s1);
	int ret = ft_strlcat(ft_s1, ft_text2, len);
	printf("ft %s \t ft %s \n", ft_text1, ft_s1);
	printf("ft %d\n", ret);

	free(ft_s1);

	printf("----------------------------------------------------------\n");

	const char *text1 = "test123";
	const char *text2 = "added!";
	char *s1 = malloc(ft_strlen(text1) + ft_strlen(text2) + 1);
	ft_strlcpy(s1, text1, strlen(text1) + 1);

	printf("libc %s \t libc %s \n", text1, s1);
	ret = strlcat(s1, text2, len);
	printf("libc %s \t libc %s \n", text1, s1);
	printf("ft %d\n", ret);

	free(s1);


	
}

void test_ft_toupper()
{
	for (int i = 0; i < 255; i++) 
	{
		char ft_c = (char) ft_toupper(i);
		char c = (char) toupper(i);
		printf("ft \t %c \t std \t %c\n", ft_c, c);
	}
}

void test_ft_tolower()
{
	for (int i = 0; i < 255; i++) 
	{
		char ft_c = (char) ft_tolower(i);
		char c = (char) tolower(i);
		printf("ft \t %c \t std \t %c\n", ft_c, c);
	}
}

void test_ft_strchr()
{
	const char *str = "test123";
	const char key = 't';
	char *ft_index = ft_strchr(str, key);
	printf("%s | %s\n", str, ft_index);
	char *index = strchr(str, key);
	printf("%s | %s\n", str, index);
}

void test_ft_strrchr()
{
	const char *str = "test123";
	const char key = 't';
	char *ft_index = ft_strrchr(str, key);
	printf("%s | %s\n", str, ft_index);
	char *index = strrchr(str, key);
	printf("%s | %s\n", str, index);
}

// TODO Doens't work
void test_ft_strncmp()
{
	const char *s1 = "test123";
	const char *s2 = "test1";
	const size_t len = 5;
	int diff = ft_strncmp(s1, s2, len);
	printf("s1 %s | s2 %s | diff %d\n", s1, s2, diff);
	diff = strncmp(s1, s2, len);
	printf("s1 %s | s2 %s | diff %d\n", s1, s2, diff);
}

void test_ft_memchr()
{
	const char *str = "test123";
	const char key = '2';
	char *ft_index = ft_memchr(str, key, ft_strlen(str));
	printf("%s | %s\n", str, ft_index);
	char *index = memchr(str, key, strlen(str));
	printf("%s | %s\n", str, index);
}

void test_ft_memcmp()
{
	const char *s1 = "test123";
	const char *s2 = "test123";
	const size_t len = 123;
	int diff = ft_memcmp(s1, s2, len);
	printf("s1 %s | s2 %s | diff %d\n", s1, s2, diff);
	diff = memcmp(s1, s2, len);
	printf("s1 %s | s2 %s | diff %d\n", s1, s2, diff);
}

void test_ft_strnstr()
{
	const char *s1 = "test123";
	const char *s2 = "est123";
	size_t len = 7;
	char *diff = ft_strnstr(s1, s2, len);
	printf("s1 %s | s2 %s | diff %s\n", s1, s2, diff);
	diff = strnstr(s1, s2, len);
	printf("s1 %s | s2 %s | diff %s\n", s1, s2, diff);
}

void test_ft_calloc()
{
	// const size_t size = 16 * sizeof(char);
	const size_t size = 0;
	char *arr = ft_calloc(sizeof(char), size);
	if (!arr)
		return;
	printf("%s\n", arr);
	ft_memset(arr, 'a', size);
	printf("%s\n", arr);
	printf("%d\n", ft_strlen(arr));
	free(arr);
}

void test_ft_strdup()
{
	const char* text = "";
	char *ret = ft_strdup(text);
	printf("strlen %d\n", ft_strlen(ret));
	printf("%s\n", ret);
	printf("og %p | new %p\n", text, ret);
}


void test_ft_atoi_assert(const char *s)
{
	int ft = ft_atoi(s);
	int reg = atoi(s);
	printf("with ft_atoi(%s) == atoi(%s)\n", s, s);
	printf("(%d) == (%d)\n", ft, reg);
	printf("\n");
	assert(ft == reg);
}

void test_ft_atoi()
{
	test_ft_atoi_assert("12345");
	test_ft_atoi_assert("-12345");
	test_ft_atoi_assert("123 45");
	test_ft_atoi_assert("      --+-123 45");
	test_ft_atoi_assert("+12345");
	test_ft_atoi_assert("+ 123 45");
	test_ft_atoi_assert(" +123 45");
	test_ft_atoi_assert("123a45");
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
	// test_ft_strlcat();
	// test_ft_strlcat(ft_strlcat);
	// test_ft_toupper();
	// test_ft_tolower();
	// test_ft_strchr();
	// test_ft_strrchr();
	// test_ft_strncmp();
	// test_ft_memchr();
	// test_ft_memcmp();
	// test_ft_strnstr();
	// test_ft_calloc();	
	// test_ft_strdup();
	// test_ft_atoi();
	
	return 0;
}

