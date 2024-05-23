#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_lstadd_back(void)
{
	int		i;
	t_list	*first;
	t_list	*new;

	START("lstadd_back");
	i = 0;
	first = ft_lstnew("First");
	while (i < 9)
	{
		new = ft_lstnew("List");
		ft_lstadd_front(&first, new);
		i++;
	}
	new = ft_lstnew("Last");
	ft_lstadd_back(&first, new);
	if (strcmp(ft_lstlast(first)->content, "Last") != 0)
	{
		printf("Expected: 'Last' | Got: %s\n", (char *)ft_lstlast(first)->content);
		KO;
		return;
	}
	free(first);
	free(new);
	OK;
}