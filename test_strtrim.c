/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:08:09 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/21 10:21:10 by dabouab          ###   ########.fr       */
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
	ft = ft_strtrim("Ceci 0est 0un 0test!", "e0!");
	if (strcmp(ft, "Cci st un tst") != 0)
	{
		printf("Test: '%s', '%s'\n", "Ceci 0est 0un 0test!", "e0!");
		printf("Expected: 'Cci st un tst | Got: %s\n", ft);
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