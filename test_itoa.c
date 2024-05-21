/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:22:52 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/21 14:06:54 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_itoa(void)
{
	int		i;
	char	*ft;
	int		test[5] = {520230, 0, -2147483648, 100, 2147483647};
	char	reel[5][20] = {"520230", "0", "-2147483648", "100", "2147483647"};

	START("itoa");
	i = 0;
	while (i < 5)
	{
		ft = ft_itoa(test[i]);
		if (strcmp(ft, reel[i]) != 0)
		{
			printf("Test: %d\n", test[i]);
			printf("Expected: %s | Got: %s\n", reel[i], ft);
			KO;
			return;
		}
		free(ft);
		i++;
	}
	OK;	
}