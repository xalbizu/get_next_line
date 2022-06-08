/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:44:45 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/06/08 15:10:28 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

void	updateline(char *line, int size);
char	*get_next_line(int fd);
void	buffer(char *buf, int size);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *s1);
int		ft_findchar(char *s1);
char	*ft_strndup(char *src, int size);

#endif