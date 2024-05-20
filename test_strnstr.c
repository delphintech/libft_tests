/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:15:30 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 18:33:12 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_strnstr(void)
{
	char	*ft;
	char	*reel;
	char	*p;

	START("strnstr");
	p = NULL;
	// TEST 1
	ft = ft_strnstr("Ceci est un test", "es", 5);
	reel = strstr("Ceci ", "es");
	if (ft != reel)
	{
		printf("Test: Ceci est un test, es, %d\n", 5);
		printf("Expected: %s | Got: %s\n", reel, ft);
		KO;
		return;
	}	
	
	// TEST 2
	ft = ft_strnstr("Ceci est un test", "es1", 8);
	reel = strstr("Ceci est", "es1");
	if (ft != reel)
	{
		printf("Test: Ceci est un test, es1, %d\n", 8);
		printf("Expected: %s | Got: %s\n", reel, ft);
		KO;
		return;
	}	
	
	// TEST 3
	ft = ft_strnstr("Ceci est un test", p, 15);
	reel = strstr("Ceci est un test", p);
	if (ft != reel)
	{
		printf("Test: Ceci est un test, NULL, %d\n", 15);
		printf("Expected: %s | Got: %s\n", reel, ft);
		KO;
		return;
	}	
	
	// TEST 4
	ft = ft_strnstr("Ceci est un test", "es", 15);
	reel = strstr("Ceci est un test", "es");
	if (ft != reel)
	{
		printf("Test: Ceci est un test, es, %d\n", 15);
		printf("Expected: %s | Got: %s\n", reel, ft);
		KO;
		return;
	}	
	
	// TEST 5
	ft = ft_strnstr("Ceci est un test", "", 8);
	reel = strstr("Ceci est", "");
	if (ft != reel)
	{
		printf("Test: Ceci est un test, %s, %d\n", "", 8);
		printf("Expected: %s | Got: %s\n", reel, ft);
		KO;
		return;
	}	
	
	// TEST 6
	ft = ft_strnstr(p, "es", 10);
	reel = strstr(p, "es");
	if (ft != reel)
	{
		printf("Test: NULL, %s, %d\n", "es", 10);
		printf("Expected: %s | Got: %s\n", reel, ft);
		KO;
		return;
	}
	OK;	
}
