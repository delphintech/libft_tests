#include <stdio.h>
#ifndef LIST_H
# define LIST_H

void	test_isalpha(void);
void	test_isdigit(void);
void	test_toupper(void);
void	test_tolower(void);
void	test_isalnum(void);
void	test_isascii(void);
void	test_strchr(void);
void	test_isprint(void);
void	test_strrchr(void);
void	test_strlen(void);
void	test_strncmp(void);
void	test_memset(void);
void	test_bzero(void);
void	test_memchr(void);
void	test_memcpy(void);
void	test_memcmp(void);
void	test_memmove(void);
void	test_strnstr(void);
void	test_strlcpy(void);
void	test_strlcat(void);
void	test_atoi(void);

void	test_calloc(void);
void	test_strdup(void);

void	test_substr(void);
void	test_strjoin(void);
void	test_strtrim(void);
void	test_split(void);
void	test_itoa(void);
void	test_strmapi(void);
void	test_striteri(void);
void	test_putchar_fd(void);
void	test_putstr_fd(void);
void	test_putendl_fd(void);
void	test_putnbr_fd(void);

// BONUS
void	test_lstnew(void);
void	test_lstadd_front(void);
void	test_lstsize(void);
void	test_lstlast(void);
// void	test_lstadd_back(void);
// void	test_lstdelone(void);
// void	test_lstclear(void);
// void	test_lstiter(void);
// void	test_lstmap(void);

#endif