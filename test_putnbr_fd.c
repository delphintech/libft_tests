/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:54:11 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/21 17:23:19 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "../libft.h"
#include "macros.h"

void	test_putnbr_fd(void)
{
	int		i;
	int		fd;
	int		nb_read;
	char	buf[100];
	int		test[5] = {520230, 0, -2147483648, 100, 2147483647};
	char	reel[5][20] = {"520230", "0", "-2147483648", "100", "2147483647"};

	
	START("putnbr_fd");

	i = 0;
	while (i < 5)
	{
		fd = open("./tests/test.txt", O_WRONLY);
		ft_putnbr_fd(test[i], fd);
		fd = open("./tests/test.txt", O_RDONLY);
		nb_read = read(fd, buf, 100);
		buf[nb_read] = '\0';
		if (strcmp(reel[i], buf) != 0) 
		{
			printf("Test: %d\n", test[i]);
			printf("Expected: %s | Got: %s\n", reel[i], buf);
			KO;
			return;
		}
		close(fd);
		truncate("./tests/test.txt", 0);
		i++;
	}
	OK;	
}
