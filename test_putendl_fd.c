/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:48:03 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/21 16:56:01 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "../libft.h"
#include "macros.h"

void	test_putendl_fd(void)
{
	int		fd;
	int		nb_read;
	char	buf[100];
	char	*test;
	char	*reel;

	START("putendl_fd");
	test = "Ceci est une phrase test !";
	reel = "Ceci est une phrase test !\n";
	fd = open("./tests/test.txt", O_WRONLY);
	ft_putendl_fd(test, fd);
	fd = open("./tests/test.txt", O_RDONLY);
	nb_read = read(fd, buf, 100);
	buf[nb_read] = '\0';
	if (strcmp(reel, buf) != 0) 
	{
		printf("Test: %s\n", test);
		printf("Expected: %s | Got: %s\n", reel, buf);
		KO;
		return;
	}
	close(fd);
	truncate("./tests/test.txt", 0);
	OK;	
}