/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:46:54 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 16:47:06 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_memmove(void)
{
	int		i;
	char	f[20];
	char	r[20];
	char	*ft;
	char	*reel;
	char	*str = "Ceci est un test";
	int		size[2] = {6, 15};
	

	START("memmove");
	i = 0;
	ft = f;
	reel = r;
	while (i < 2)
	{
		ft_memmove(ft, str, size[i]);
		reel = memmove(reel, str, size[i]);
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