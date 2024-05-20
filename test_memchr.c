/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:54:21 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/16 16:02:20 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_memchr(void)
{
	int		i;
	char	*ft;
	char	*reel;
	char	*str = "Ceci est un test";
	char	test[4] = {'t','t', '1', '\0'};
	int		size[4] = {4, 10, 15, 15};
	

	START("memchr");
	i = 0;
	while (i < 4)
	{
		ft = ft_memchr(str, test[i], size[i]);
		reel = memchr(str, test[i], size[i]);
		if (ft != reel)
		{
			printf("Test: Ceci est un test, %c, %d", test[i], size[i]);
			printf("Expected: %s | Got: %s\n", reel, ft);
			KO;
			return;
		}
		i++;
	}
	OK;	
}