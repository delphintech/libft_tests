/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:13:22 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/20 13:41:29 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_strlcat(void)
{
	int		i;
	char	f[20] = "Destination :";
	char	r[20] = "Destination :";
	char	*ft;
	char	*reel;
	char	*str = "Ceci est un test";
	int		size[3] = {6, 15, 30};
	

	START("strlcat");
	i = 0;
	ft = f;
	reel = r;
	while (i < 3)
	{
		bzero(ft, 20);
		bzero(reel, 20);
		ft = f;
		reel = r;
		ft_strlcat(ft, str, size[i]);
		strncat(reel, str, size[i] - 1);
		if (strncmp(ft, reel, size[i]) != 0)
		{
			printf("Test: Destination :, Ceci est un test, %d\n", size[i]);
			printf("Expected: %s | Got: %s \n", reel, ft);
			KO;
			return;
		}
		i++;
	}
	OK;	
}