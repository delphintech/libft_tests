/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:23:02 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 12:23:15 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_strrchr(void)
{
	int		i;
	char	*ft;
	char	*reel;
	char	*str = "Ceci est un test";
	char	test[6] = {'e', '1', '\0'};

	START("strrchr");
	i = 0;
	while (i < 3)
	{
		ft = ft_strrchr(str, test[i]);
		reel = strrchr(str, test[i]);
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