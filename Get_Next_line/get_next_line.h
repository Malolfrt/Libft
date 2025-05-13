/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:45:56 by mlefort           #+#    #+#             */
/*   Updated: 2024/02/29 16:18:13 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>

size_t	ft_strlen_gnl(char *s);
char	*ft_strchr_gnl(char *s, int c);
char	*ft_strcpy_gnl(char *dst, char *src);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*get_next_line_gnl(int fd);

#endif