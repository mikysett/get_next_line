/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msessa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 22:28:06 by msessa            #+#    #+#             */
/*   Updated: 2021/03/02 17:37:21 by msessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		ft_free_exit(char **line)
{
	free(*line);
	*line = 0;
	return (-1);
}

size_t	ft_partial_len(char *buf)
{
	char *o_buf;

	o_buf = buf;
	while (*buf && *buf != '\n')
		buf++;
	return (buf - o_buf);
}

size_t	ft_strlen(const char *s)
{
	const char *i;

	i = s;
	while (*i)
		i++;
	return (i - s);
}
