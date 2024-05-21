/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:53:42 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/21 10:19:52 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_strjoin(void)
{
	char	*ft;
	
	START("strjoin");
	
	// TEST 1
	ft = ft_strjoin("Le debut ... ", "et la suite");
	if (strcmp(ft, "Le debut ... et la suite") != 0)
	{
		printf("Test: '%s', '%s'\n", "Le debut ... ", "et la suite");
		printf("Expected: 'Le debut ... et la suite' | Got: %s\n", ft);
		KO;
		return;
	}
	free(ft);

	// TEST 1
	ft = ft_strjoin("", "et la suite");
	if (strcmp(ft, "et la suite") != 0)
	{
		printf("Test: '%s', '%s'\n", "", "et la suite");
		printf("Expected: 'et la suite' | Got: %s\n", ft);
		KO;
		return;
	}
	free(ft);

	OK;	
}