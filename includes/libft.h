/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:58:34 by Cerdelen          #+#    #+#             */
/*   Updated: 2021/11/22 19:58:34 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>

#define BUFFER_SIZE 100

/**
*			CHECKS
*/

bool		ft_string_is(char *s, int (*char_is)(int));
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);

/**
*			CONVERSIONS
*/

int			ft_atoi(const char *nptr);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_itoa(int n);

/**
*			MEMORY
*/

void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nelem, size_t elsize);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);

/**
*			ARRAYS
*/

//strings
void		ft_print_string_array(char	**arr, int fd);
void		ft_free_string_array(char	**arr);
size_t		ft_string_array_size(char	**arr);
size_t		ft_string_array_size(char	**arr);
//int
void		ft_print_int_array(int *arr, size_t n, int fd);
void		ft_print_int_array_capped_line(int *arr, size_t n, int fd);
//size_t
void		ft_print_size_t_array(size_t *arr, size_t n, int fd);
void		ft_print_size_t_array_capped_line(size_t *arr, size_t n, int fd);

/**
*			PRINT
*/

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

/**
*			STRINGS
*/

char		*ft_strchr(const char *s, int c);
char		*ft_strdup(const char *s);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_strlcpy(char *dst, const char *src, size_t size);
int			ft_strlen(const char *s);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const void *s1, const void *s2, size_t n);
char		*ft_strrchr(const char *s, int c);
char		**ft_split(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);

/**
*			GNL
*/

char	*get_next_line(int fd);
char	*appending(char *str1, char *str2);
char	*get_line(char *str1, char **remainderarr, int fd, char *buff);
char	*gnl_strchr(const char *s, int c);
int		gnl_strlen(const char *s);
void	*gnl_memcpy(void *dest, const void *src, size_t n);
void	*gnl_memmove(void *dest, const void *src, size_t n);

/**
*			LINKED LIST
*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *elem);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *elem);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstpop(t_list **lst, void (*del)(void *));



/**
*		TERMINAL PRINT COLOURS 
*/

# define DEFAULT_TERMINAL_COL "\33[0m"
# define GREEN_TERMINAL_COL "\33[32m"
# define RED_TERMINAL_COL "\33[1;31m"
# define YELLOW_TERMINAL_COL "\33[33m"
# define BLUE_TERMINAL_COL "\33[34m"
# define PURPLE_TERMINAL_COL "\33[35m"

#endif