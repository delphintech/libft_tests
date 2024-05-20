/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:28:11 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 16:31:50 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_memcmp(void)
{
	int		ft;
	int		reel;

	START("memcmp");
	ft = ft_memcmp("coucou", "coucou", 8);
	reel = memcmp("coucou", "coucou", 8);
	if (ft != reel)
	{
		printf("Test: coucou, coucou, 8\n");
		printf("Expected: %d | Got: %d\n", reel, ft);
		KO;
		return;
	}
	ft = ft_memcmp("Test", "Testing", 4);
	reel = memcmp("Test", "Testing", 4);
	if (ft != reel)
	{
		printf("Test: Test, Testing, 4\n");
		printf("Expected: %d | Got: %d\n", reel, ft);
		KO;
		return;
	}
	ft = ft_memcmp("Test", "Testing", 6);
	reel = memcmp("Test", "Testing", 6);
	if (ft != reel)
	{
		printf("Test: Test, Testing, 6\n");
		printf("Expected: %d | Got: %d\n", reel, ft);
		KO;
		return;
	}
	OK;	
}