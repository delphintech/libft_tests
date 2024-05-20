/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:12:53 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 10:45:17 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../libft.h"
#include "macros.h"

void	test_isascii(void)
{
	int		i;
	int		ft;
	int		reel;
	int	test[6] = {'c', '1', 0x9d, 'B', '~', ' '};

	START("isascii");
	i = 0;
	while (i < 6)
	{
		ft = ft_isascii(test[i]);
		reel = isascii(test[i]);
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
