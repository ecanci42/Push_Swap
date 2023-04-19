/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecanci <ecanci@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 19:00:49 by ecanci            #+#    #+#             */
/*   Updated: 2023/03/24 19:00:50 by ecanci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*ft_read_to_left_str(int fd, char *left_str);
char	*ft_strchrgnl(char *s, int c);
char	*ft_strjoingnl(char *left_str, char *buff);
size_t	ft_strlengnl(char *s);
char	*ft_get_line(char *left_str);
char	*ft_new_left_str(char *left_str);

#endif