/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:33:24 by gupark            #+#    #+#             */
/*   Updated: 2022/02/02 19:08:54 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_separator(char c, char cr)
{
	if (c == cr)
		return (1);
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_wordcheck(char *str, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		if (ft_is_separator(str[i], c) == 0
			&& ft_is_separator(str[i + 1], c) == 1)
			w++;
		i++;
	}
	return (w);
}

void	ft_setword(char *dest, char *src, char c)
{
	int	i;

	i = 0;
	while (ft_is_separator(src[i], c) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int	ft_setset(char **split, char *str, char c)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		if (ft_is_separator(str[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_is_separator(str[i + j], c) == 0)
				j++;
			split[w] = (char *)malloc(sizeof(char) * (j + 1));
			if (!(split + w))
				return (0);
			ft_setword(split[w], str + i, c);
			i += j;
			w++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		numofw;
	char	**words;

	if (!s)
		return (NULL);
	numofw = ft_wordcheck((char *)s, c);
	words = (char **)malloc(sizeof(char *) * (numofw + 1));
	if (!words)
		return (NULL);
	if (!(ft_setset(words, (char *) s, c)))
	{
		numofw = 0;
		while (words + numofw)
		{
			free(words + numofw);
			numofw++;
		}
		free(words);
	}
	words[numofw] = 0;
	return (words);
}
