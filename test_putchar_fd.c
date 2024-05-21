/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:24:43 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/21 16:37:47 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "../libft.h"
#include "macros.h"

void	test_putchar_fd(void)
{
	int		fd;
	int		nb_read;
	char	buf[100];
	char	test;

	START("putchar_fd");
	test = 'C';
	fd = open("./tests/test.txt", O_WRONLY);
	ft_putchar_fd(test, fd);
	fd = open("./tests/test.txt", O_RDONLY);
	nb_read = read(fd, buf, 100);
	if (nb_read != 1 || buf[0] != test)
	{
		printf("Test: %c\n", test);
		printf("Expected: %c | Got: %s\n", test, buf);
		KO;
		return;
	}
	close(fd);
	truncate("./tests/test.txt", 0);
	OK;	
}
