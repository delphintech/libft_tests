/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:50:18 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 12:22:59 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_strchr(void)
{
	int		i;
	char	*ft;
	char	*reel;
	char	*str = "Ceci est un test";
	char	test[6] = {'e', '1', '\0'};

	START("strchr");
	i = 0;
	while (i < 3)
	{
		ft = ft_strchr(str, test[i]);
		reel = strchr(str, test[i]);
		if (ft != reel)
		{
			CHARTEST(test[i]);
			printf("Expected: %s | Got: %s\n", reel, ft);
			KO;
			return;
		}
		i++;
	}
	OK;	
}