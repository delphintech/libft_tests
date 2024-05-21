/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:18:03 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/21 14:34:24 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

static char	ft_eventoupper(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

void	test_strmapi(void)
{
	char	*ft;
	char	*test = "Ceci est une phrase de t3st!";
	char	*reel = "CeCi eSt uNe pHrAsE De t3sT!";

	START("strmapi");
	ft = ft_strmapi(test, &ft_eventoupper);
	if (strcmp(ft, reel) != 0)
	{
		printf("Test: %s\n", test);
		printf("Expected: %s | Got: %s\n", reel, ft);
		KO;
		return;
	}
	free(ft);
	OK;	
}