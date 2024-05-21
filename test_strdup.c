/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:29:11 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/21 09:57:16 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_strdup(void)
{
	char	*ft;
	char	*reel;
	
	START("strdup");
	// TEST 1
	ft = ft_strdup("Ceci est un test");
	reel = strdup("Ceci est un test");
	if (strcmp(ft, reel) != 0)
	{
		printf("Test: %s\n", "Ceci est un test");
		printf("Expected: %s | Got: %s\n", reel, ft);
		KO;
		return;
	}
	free(ft);
	free(reel);

	// TEST 2
	// ft = ft_strdup(p);
	// reel = strdup(p);
	// if (strcmp(ft, reel) != 0)
	// {
	// 	printf("Test: %s\n", p);
	// 	printf("Expected: %s | Got: %s\n", reel, ft);
	// 	KO;
	// 	return;
	// }

	// TEST 3
	ft = ft_strdup("");
	reel = strdup("");
	if (strcmp(ft, reel) != 0)
	{
		printf("Test: %s\n", "");
		printf("Expected: %s | Got: %s\n", reel, ft);
		KO;
		return;
	}
	free(ft);
	free(reel);

	OK;	
}