/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:08:38 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 16:15:39 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_memcpy(void)
{
	int		i;
	char	f[20];
	char	r[20];
	char	*ft;
	char	*reel;
	char	*str = "Ceci est un test";
	int		size[2] = {6, 15};
	

	START("memcpy");
	i = 0;
	ft = f;
	reel = r;
	while (i < 2)
	{
		ft_memcpy(ft, str, size[i]);
		reel = memcpy(reel, str, size[i]);
		if (strncmp(ft, reel, size[i]) != 0)
		{
			printf("Test: Ceci est un test, %d\n", size[i]);
			printf("Expected: %s | Got: %s\n", reel, ft);
			KO;
			return;
		}
		i++;
	}
	OK;	
}