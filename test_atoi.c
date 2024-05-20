/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:35:46 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/20 15:08:28 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"
#include "macros.h"

void	test_atoi(void)
{
	int		i;
	int		ft;
	int		reel;
	char	test[5][20] = {"  \n\t+354fdsg", "  \n\t--25fdsg", "\t\n\r\v\f-2147483648d", "+0~", " "};

	START("atoi");
	i = 0;
	while (i < 5)
	{
		ft = ft_atoi(test[i]);
		reel = atoi(test[i]);
		if (ft != reel)
		{
			STRTEST(test[i]);
			printf("Expected: %d | Got: %d\n", reel, ft);
			KO;
			return;
		}
		i++;
	}
	OK;	
}