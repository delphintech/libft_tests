/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:47:20 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 14:05:40 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_strlen(void)
{
	int		i;
	unsigned int		ft;
	unsigned int		reel;
	char	test[2][20] = {"Ceci est un test", ""};

	START("strlen");
	i = 0;
	while (i < 2)
	{
		ft = ft_strlen(test[i]);
		reel = strlen(test[i]);
		if (ft != reel)
		{
			STRTEST(test[i]);
			printf("Expected: %u | Got: %u\n", reel, ft);
			KO;
			return;
		}
		i++;
	}
	OK;	
}