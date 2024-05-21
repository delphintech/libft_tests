/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:40:11 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/21 16:44:05 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "../libft.h"
#include "macros.h"

void	test_putstr_fd(void)
{
	int		fd;
	int		nb_read;
	char	buf[100];
	char	*test;

	START("putstr_fd");
	test = "Ceci est une phrase test !";
	fd = open("./tests/test.txt", O_WRONLY);
	ft_putstr_fd(test, fd);
	fd = open("./tests/test.txt", O_RDONLY);
	nb_read = read(fd, buf, 100);
	buf[nb_read] = '\0';
	if (strcmp(test, buf) != 0) 
	{
		printf("Test: %s\n", test);
		printf("Expected: %s | Got: %s\n", test, buf);
		KO;
		return;
	}
	close(fd);
	truncate("./tests/test.txt", 0);
	OK;	
}