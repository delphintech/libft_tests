/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:04:11 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 10:47:01 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../libft.h"
#include "macros.h"

void	test_tolower(void)
{
	int		i;
	int		ft;
	int		reel;
	char	test[6] = {'c', '1', 'B', '~', ' ', 'z'};

	START("tolower");
	i = 0;
	while (i < 6)
	{
		ft = ft_tolower(test[i]);
		reel = tolower(test[i]);
		if (ft != reel)
		{
			CHARTEST(test[i]);
			printf("Expected: %c | Got: %c\n", reel, ft);
			KO;
			return;
		}
		i++;
	}
	OK;	
}