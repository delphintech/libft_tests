/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:37:01 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/22 11:18:35 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../libft.h"
#include "macros.h"

void	test_substr(void)
{
	int		i;
	char	*ft;
	char	reel[3][15] = {"ci est", "", "i est un test"};
	char	*str = "Ceci est un test";
	int		start[3] = {2, 20, 3};
	int		size[3] = {6, 5, 15};
	

	START("substr");
	i = 0;
	while (i < 2)
	{
		ft = ft_substr(str, start[i], size[i]);
		if (ft && strcmp(ft, reel[i]) != 0)
		{
			printf("Test: Ceci est un test, %d, %d\n", start[i], size[i]);
			printf("Expected: %s | Got: %s \n", reel[i], ft);
			KO;
			return;
		}
		if (ft)
			free(ft);
		i++;
	}
	OK;	
}