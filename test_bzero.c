#include <string.h>
#include "../libft.h"
#include "macros.h"

void	test_bzero(void)
{
	char	f[10] = "xxxxxxxxxx";
	char	r[10] = "xxxxxxxxxx";
	char	*ft;
	char	*reel;

	START("bzero");
	ft = f;
	reel = r;
	ft_bzero(ft, 5);
	bzero(reel, 5);
	if (strncmp(ft, reel, 10) != 0)
	{
		printf("Test: xxxxxxxxxx\n");
		printf("Expected: %s | Got: %s\n", r, f);
		KO;
		return;
	}
	OK;
}