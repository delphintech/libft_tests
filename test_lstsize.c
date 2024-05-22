#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_lstsize(void)
{
	int		i;
	t_list	*first;
	t_list	*new;

	START("lstsize");
	i = 0;
	first = ft_lstnew("First");
	while (i < 10)
	{
		new = ft_lstnew("New");
		ft_lstadd_front(&first, new);
		i++;
	}
	i = ft_lstsize(first);
	if (i != 11)
	{
		printf("Expected: 11 | Got: %d\n", i);
		KO;
		return;
	}
	OK;
}