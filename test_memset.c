/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:42:22 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 15:14:40 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_memset(void)
{
	int		i;
	char	f[50];
	char	r[50];
	char	*ft;
	char	*reel;
	char	test[3] = {'c', '2', ' '};
	int		size[3] = {10, 0, 35};

	START("memset");
	ft = f;
	reel = r;
	i = 0;
	while (i < 3)
	{
		ft_memset(ft, test[i], size[i]);
		memset(reel, test[i], size[i]);
		if (strncmp(ft, reel, size[i]) != 0)
		{
			printf("Test: %c, %d\n", test[i], size[i]);
			printf("Expected: %.*s | Got: %.*s\n", size[i], reel, size[i], ft);
			KO;
			return;
		}
		i++;
	}
	OK;
}