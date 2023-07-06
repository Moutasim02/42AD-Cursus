#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>



int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *s);
void*			ft_memset(void *dest, int c, size_t count) ;
void			ft_bzero(void *s, size_t n);
void *			ft_memcpy(void * dst, const void * src, size_t n);
// void *			ft_memmove(void *dst, const void *src, size_t len); // ToDO: Not Finished
size_t			ft_strlcpy(char * dest, const char * src, size_t size);
// size_t			ft_strlcat(char * dst, const char * src, size_t dstsize);

#endif