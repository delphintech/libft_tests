/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:08:15 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 16:27:57 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_strncmp(void)
{
	int		ft;
	int		reel;

	START("strncmp");
	ft = ft_strncmp("coucou", "coucou", 6);
	reel = strncmp("coucou", "coucou", 6);
	if (ft != reel)
	{
		printf("Test: coucou, coucou, 6\n");
		printf("Expected: %d | Got: %d\n", reel, ft);
		KO;
		return;
	}
	ft = ft_strncmp("Test", "Testing", 4);
	reel = strncmp("Test", "Testing", 4);
	if (ft != reel)
	{
		printf("Test: Test, Testing, 4\n");
		printf("Expected: %d | Got: %d\n", reel, ft);
		KO;
		return;
	}
	ft = ft_strncmp("Test", "Testing", 5);
	reel = strncmp("Test", "Testing", 5);
	if (ft != reel)
	{
		printf("Test: Test, Testing, 5\n");
		printf("Expected: %d | Got: %d\n", reel, ft);
		KO;
		return;
	}
	OK;	
}