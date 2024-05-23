/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabouab <dabouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:31:44 by dabouab           #+#    #+#             */
/*   Updated: 2024/05/23 12:26:33 by dabouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_lstiter(void)
{
	START("lstiter");
	printf("No Test\n");
}

// static void	ft_toup(void *pointer)
// {
// 	int		i;
// 	char	*str;
	
// 	if (!pointer)
// 		return ;
// 	str = (char *)pointer;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >= 97 && str[i] <= 122)
// 			str[i] -= 32;
// 		i++;
// 	}
// }

// void	test_lstiter(void)
// {
// 	int		i;
// 	t_list	*first;
// 	t_list	*new;
// 	t_list	*last;

// 	START("lstiter");
// 	i = 0;
// 	first = ft_lstnew("first");
// 	while (i < 9)
// 	{
// 		new = ft_lstnew("list");
// 		ft_lstadd_back(&first, new);
// 		i++;
// 	}
// 	last = ft_lstnew("last");
// 	ft_lstadd_back(&first, last);
// 	ft_lstiter(first, &ft_toup);
// 	if (strcmp(first->content, "FIRST") != 0 || strcmp(new->content, "LIST") != 0 || strcmp(last->content, "LAST") != 0)
// 	{
// 		printf("Expected: 'Last' | Got: %s\n", (char *)ft_lstlast(first)->content);
// 		KO;
// 		return;
// 	}
// 	free(first);
// 	free(new);
// 	OK;
// }