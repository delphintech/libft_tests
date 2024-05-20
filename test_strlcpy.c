/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:57:56 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/20 12:09:32 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_strlcpy(void)
{
	int		i;
	int		x;
	char	f[20];
	char	r[20];
	char	*ft;
	char	*reel;
	char	*str = "Ceci est un test";
	int		size[2] = {6, 15};
	

	START("strlcpy");
	i = 0;
	ft = f;
	reel = r;
	while (i < 2)
	{
		bzero(ft, 20);
		bzero(reel, 20);
		x = ft_strlcpy(ft, str, size[i]);
		strncpy(reel, str, size[i] - 1);
		if (strncmp(ft, reel, size[i]) != 0)
		{
			printf("Test: Ceci est un test, %d\n", size[i]);
			printf("Expected: %s / %ld | Got: %s / %d\n", reel, strlen(reel), ft, x);
			KO;
			return;
		}
		i++;
	}
	OK;	
}