/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:53:52 by nroman            #+#    #+#             */
/*   Updated: 2018/03/21 11:13:31 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>
# define LN_BUFF 5000000

void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_realloc(char *str, int size);
int				ft_char_is_numeric(char str);
int				ft_atoi(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char			*ft_strcpy(char *dest, char *src);
int				ft_strlen(char *str);
int				ft_str_is_printable(char str);

#endif
