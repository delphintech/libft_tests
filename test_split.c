/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:25:15 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/22 12:25:56 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_split(void)
{
	int		i;
	char	**ft;
	char	reel[4][10] = {"Ceci", "est", "un", "test!"};
	
	START("split");
	
	// TEST 1
	i = 0;
	ft = ft_split("Ceci0est0un0test!", '0');
	while (ft[i])
	{
		if (strcmp(ft[i], reel[i]) != 0)
		{
			printf("Test: '%s', '%s'\n", "Ceci 0est 0un 0test!", "0");
			printf("Expected: '%s'| Got: %s\n", reel[i], ft[i]);
			KO;
			return;
		}
		i++;
	}
	free(ft);

	// TEST 2
	ft = ft_split("Ceci0est0un0test!", '\0');
	if (strcmp(ft[0], "Ceci0est0un0test!") != 0)
	{
		printf("Test: '%s', '%s'\n", "Ceci 0est 0un 0test!", "\\0");
		printf("Expected: '%s'| Got: %s\n", "Ceci0est0un0test!", ft[0]);
		KO;
		return;
	}
	free(ft);

	// TEST 3
	ft = ft_split(NULL, '0');
	if (ft)
	{
		printf("Test: '%s', '%s'\n", "(null)", "0");
		printf("Expected: '%s'| Got: %s\n", "(null)", ft[0]);
		KO;
		return;
	}
	OK;	
}