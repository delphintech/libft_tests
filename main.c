/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:55:42 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/20 16:26:47 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "list.h"

int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_toupper();
	test_tolower();
	test_isalnum();
	test_isascii();
	test_strchr();
	test_isprint();
	test_strrchr();
	test_strlen();
	test_strncmp();
	test_memset();
	test_bzero();
	test_memchr();
	test_memcpy();
	test_memcmp();
	test_memmove();
	test_strnstr();
	test_strlcpy();
	test_strlcat();
	test_atoi();

	test_calloc();
	test_strdup();

	// test_substr();
	// test_strjoin();
	// test_strtrim();
	// test_split();
	// test_itoa();
	// test_strmapi();
	// test_striteri();
	// test_putchar_fd();
	// test_putstr_fd();
	// test_putendl_fd();
	// test_putnbr_fd();
}