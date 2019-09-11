/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:40:17 by cburns            #+#    #+#             */
/*   Updated: 2019/09/11 06:57:02 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
int		ft_strlen(char const *s);
char	*ft_strdup(char const *s);
char	*ft_strcpy(char *dest, char const *s);
char	*ft_strncpy(char *dest, char const *s, size_t n);
void	*ft_memset(void *dest, int c, size_t n);
int		ft_strcmp(char const *s1, char const *s2);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
char	*ft_strcat(char *dest, char const *src);
char	*ft_strncat(char *dest, char const *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t len);
int		ft_atoi(char const *s);
void	ft_bzero(void *dest, size_t lenght);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strstr(char const *s1, char const *s2);
char	*ft_strnstr(char const *s1, char const *s2, size_t len);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_itoa(int n);
void	ft_strclr(char *s);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
#endif
