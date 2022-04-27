/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:03:36 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/27 19:10:31 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	linelen(char *buf, int start)
{
	int	i;

	i = 0;
	while (buf[start] && buf[start] != '\n')
	{
		i++;
		start++;
	}
	return (i);
}
