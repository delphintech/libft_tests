/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:40:28 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/21 10:00:38 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"
#include "macros.h"
#include <string.h>

void	test_calloc(void)
{
	size_t		i;
	char	*ft;
	char	*reel;
	size_t		nmemb[3] = {0, 3, 10};
	size_t		size[3] = {2, 0, 2};

	START("calloc");
	i = 0;
	while (i < 3)
	{
		ft = ft_calloc(nmemb[i], size[i]);
		reel = calloc(nmemb[i], size[i]);
		if (strcmp(ft, reel) != 0)
		{
			printf("Test: %zu, %zu", nmemb[i], size[i]);
			printf("Expected: %ld & %s| Got: %ld & %s\n",sizeof(reel), reel, sizeof(ft), ft);
			KO;
			return;
		}
		if (ft && reel)
		{
			free(ft);
			free(reel);
		}
		i++;
	}
	OK;	
}