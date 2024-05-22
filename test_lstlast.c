#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_lstlast(void)
{
	int		i;
	t_list	*first;
	t_list	*new;
	t_list	*last;

	START("lstlast");
	first = ft_lstnew("Last");
	i = 0;
	while (i < 10)
	{
		new = ft_lstnew("New");
		ft_lstadd_front(&first, new);
		i++;
	}
	last = ft_lstlast(first);
	if (strcmp(last->content, "Last"))
	{
		printf("Expected: 'Last' | Got: %s\n", (char *)last->content);
		KO;
		return;
	}
	OK;
}