/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:58:05 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 10:45:09 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../libft.h"
#include "macros.h"

void	test_isalpha(void)
{
	int		i;
	int		ft;
	int		reel;
	char	test[6] = {'c', '1', 'B', '~', ' ', 'z'};

	START("isalpha");
	i = 0;
	while (i < 6)
	{
		ft = ft_isalpha(test[i]);
		reel = isalpha(test[i]);
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
