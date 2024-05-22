#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_lstadd_front(void)
{
	t_list	*first;
	t_list	*new;

	START("lstadd_front");
	first = ft_lstnew("First");
	new = ft_lstnew("New");
	ft_lstadd_front(&first, new);
	if (strcmp(new->next->content, "First") != 0)
	{
		printf("Expected: 'First' | Got: %s\n", (char *)new->next->content);
		KO;
		return;
	}
	OK;
}