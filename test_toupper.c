/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:57:50 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 10:45:40 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "../libft.h"
#include "macros.h"

void	test_toupper(void)
{
	int		i;
	int		ft;
	int		reel;
	char	test[6] = {'c', '1', 'B', '~', ' ', 'z'};

	START("toupper");
	i = 0;
	while (i < 6)
	{
		ft = ft_toupper(test[i]);
		reel = toupper(test[i]);
		if (ft != reel)
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