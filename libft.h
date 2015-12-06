/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelin <rbelin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:20:01 by rbelin            #+#    #+#             */
/*   Updated: 2015/12/03 06:21:12 by rbelin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

#define LIBFT_FD_STAND 1

typedef struct		s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

/* List */
t_list			*ft_lstnew(const void *content, size_t content_size);
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

/* Char */
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

/* String */
size_t			ft_strlen(const char *str);
char			*ft_strdup(const char *str);
char			*ft_strnew(size_t n);
void			ft_strclr(char *str);
void			ft_strdel(char **ap);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strcat(char *dst, const char *src);
char			*ft_strncat(char *dst, const char *src, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t n);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strsub(const char *str, unsigned int start, size_t len);
char			*ft_strtrim(const char *str);
char			*ft_strchr(const char *str, char c);
char			*ft_strrchr(const char *str, char c);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
int			ft_strequ(const char *s1, const char *s2);
int			ft_strnequ(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strmap(const char *str, char (*f)(char));
char			*ft_strmapi(const char *str, char (*f)(unsigned int, char));
void			ft_striter(char *str, void (*f)(char *));
void			ft_striteri(char *str, void (*f)(unsigned int, char *));
char			**ft_strsplit(const char *str, char c);

/* Memory */
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memalloc(size_t n);
void			ft_memdel(void **ap);

/* Convertion */
int			ft_atoi(const char *str);
char			*ft_itoa(int n);

/* Output */
void			ft_putstr_fd(const char *str, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(const char *str, int fd);
void			ft_putstr(const char *str);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putendl(const char *str);


/* Add-on */
char			*ft_strndup(const char *str, size_t n);
char			*ft_strrplstr(const char *format, const char *s1, const char *s2);


#endif
