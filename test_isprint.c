/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:16:14 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 12:17:32 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../libft.h"
#include "macros.h"

void	test_isprint(void)
{
	int		i;
	int		ft;
	int		reel;
	char	test[6] = {'c', '1', ' ', '~', '\n'};

	START("isprint");
	i = 0;
	while (i < 5)
	{
		ft = ft_isprint(test[i]);
		reel = isprint(test[i]);
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