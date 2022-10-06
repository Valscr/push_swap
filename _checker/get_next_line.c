/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:19:24 by vescaffr          #+#    #+#             */
/*   Updated: 2022/10/06 10:38:15 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif

int	check_end(char *dest)
{
	int	j;

	j = 0;
	if (!dest)
		return (1);
	while (dest[j] != '\0')
	{
		if (dest[j] == '\0')
			return (0);
		j++;
	}
	return (1);
}

int	get_size(char *s1, char *s2)
{
	int	size;

	if (s1 != NULL)
		size = ft_strlen(s1) + ft_strlen(s2) + 1;
	else
		size = ft_strlen(s2) + 1;
	return (size);
}

char	*ft_strjoin1(char *s1, char *s2)
{
	int		i;
	char	*dest;
	int		j;

	i = 0;
	dest = malloc(sizeof(char) * get_size(s1, s2));
	if (!dest || !s2)
		return (NULL);
	if (s1 != NULL && s1[0] != 0)
	{
		while (s1[i] != '\0')
		{	
			dest[i] = s1[i];
			i++;
		}
	}
	j = 0;
	while (s2[j] != '\0')
		dest[i++] = s2[j++];
	dest[i] = '\0';
	free(s1);
	return (dest);
}

char	*get_next(char *save, int fd)
{
	int			bytes;
	char		*dest;

	dest = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!dest)
		return (0);
	bytes = 1;
	while (check_end(save) && bytes != 0)
	{
		bytes = read(fd, dest, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(dest);
			return (NULL);
		}
		dest[bytes] = '\0';
		save = ft_strjoin1(save, dest);
	}
	free(dest);
	return (save);
}

char	*get_next_line(int fd)
{
	static char		*save;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	save = get_next(save, fd);
	if (save == NULL)
		return (NULL);
	return (save);
}
