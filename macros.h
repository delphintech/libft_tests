#include <stdio.h>

#ifndef MACROS_H
# define MACROS_H

	# define START(name) printf("\033[0;35m----- %s -----\033[0m\n", name)
	# define CHARTEST(c) printf("Test: %c\n", c)
	# define STRTEST(s) printf("Test: %s\n", s)
	# define INTTEST(n) printf("Test: %d\n", n)
	# define OK printf("\033[0;32m//  OK  //\033[0m\n")
	# define KO printf("\033[0;31m//  KO  //\033[0m\n")

#endif