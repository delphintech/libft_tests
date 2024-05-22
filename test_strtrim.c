/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:08:09 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/22 11:30:31 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_strtrim(void)
{
	char	*ft;
	
	START("strtrim");
	
	// TEST 1
	ft = ft_strtrim("000Ceci 0est 0un 0test\n\n!", "e0!\n");
	if (strcmp(ft, "Ceci 0est 0un 0test") != 0)
	{
		printf("Test: '%s', '%s'\n", "Ceci 0est 0un 0test!", "e0!\n");
		printf("Expected: 'Ceci 0est 0un 0test' | Got: %s\n", ft);
		KO;
		return;
	}
	free(ft);

	// TEST 2
	ft = ft_strtrim("", "e3!");
	if (strcmp(ft, "") != 0)
	{
		printf("Test: '%s', '%s'\n", "", "e3!");
		printf("Expected: ''| Got: %s\n", ft);
		KO;
		return;
	}
	free(ft);

	// TEST 3
	ft = ft_strtrim("Ceci est un test!", "");
	if (strcmp(ft, "Ceci est un test!") != 0)
	{
		printf("Test: '%s', '%s'\n", "Ceci est un test!", "");
		printf("Expected: 'Ceci est un test!' | Got: %s\n", ft);
		KO;
		return;
	}
	free(ft);

	OK;	
}