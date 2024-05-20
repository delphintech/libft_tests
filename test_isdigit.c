/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:24:20 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 10:44:35 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../libft.h"
#include "macros.h"

void	test_isdigit(void)
{
	int		i;
	int		ft;
	int		reel;
	char	test[6] = {'c', '1', 'B', '~', ' ', '0'};

	START("isdigit");
	i = 0;
	while (i < 6)
	{
		ft = ft_isdigit(test[i]);
		reel = isdigit(test[i]);
		if ((ft == 0 && reel != 0) || (ft > 0 && reel == 0))
		{
			CHARTEST(test[i]);
			printf("Expected: %d | Got: %d\n", reel, ft);
			KO;
			return;
		}
		i++;
	}
	OK;	
}