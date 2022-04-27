/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:55:25 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/04/27 18:24:44 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	size_t		nr_bytes;
	char		*buf;
	static int	linestart = 0;
	char		*result;
	int			i;

	if (fd == -1)
		return (0);
	buf = (char *)malloc(BUFFER_SIZE * sizeof(char *));
	if (!buf)
		return (0);
	nr_bytes = read(fd, buf, BUFFER_SIZE);
	if (!buf[linestart])
	{
		free(buf);
		return (0);
	}
	result = (char *)malloc(linelen(buf, linestart) * sizeof(char *));
	if (!result)
		return (0);
	i = 0;
	while (buf[linestart] != '\n' && buf[linestart])
	{
		result[i] = buf[linestart];
		linestart++;
		i++;
	}
	if (buf[linestart])
	result[i] = buf[linestart];
	if (buf[linestart + 1])
		linestart += 1;
	free(buf);
	return (result);
}

int	main(void)
{
	int	fd;

	fd = open("fd.dict", O_RDONLY);
	printf("%s", get_next_line(fd));
	fd = open("fd.dict", O_RDONLY);
	printf("%s", get_next_line(fd));
	fd = open("fd.dict", O_RDONLY);
	printf("%s", get_next_line(fd));
	return (0);
}
