/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:40:28 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/20 16:17:35 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"
#include "macros.h"

void	test_calloc(void)
{
	int		i;
	char	*ft;
	char	*reel;
	int		nmemb[3] = {0, 3, 10};
	int		size[3] = {2, 0, 2};

	START("calloc");
	i = 0;
	while (i < 3)
	{
		ft = ft_calloc(nmemb[i], size[i]);
		reel = calloc(nmemb[i], size[i]);
		ft = "xxxxxxxxxx";
		reel = "xxxxxxxxxx";
		if (ft != reel)
		{
			printf("Test: %d, %d", nmemb[i], size[i]);
			printf("Expected: %ld & %s| Got: %ld & %s\n",sizeof(reel), reel, sizeof(ft), ft);
			KO;
			return;
		}
		i++;
	}
	OK;	
}