/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:55:42 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/22 17:06:20 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_lstnew(void)
{
	t_list	*new;

	START("lstnew");
	new = ft_lstnew("Test");
	if (strcmp(new->content, "Test") != 0 || new->next != NULL)
	{
		printf("Expected: 'Test' & (null) | Got: %s & %p\n", (char *)new->content, (new->next));
		KO;
		return;
	}
	OK;
}
