/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:22:50 by gupark            #+#    #+#             */
/*   Updated: 2022/02/02 00:42:48 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	len;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	while (s1[beg] && ft_strchr(set, s1[beg]))
		beg++;
	len = ft_strlen(s1 + beg);
	if (len)
		while (s1[beg + len - 1] != 0 && ft_strchr(set, s1[beg + len - 1]) != 0)
			len--;
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	ft_strncpy(new, s1 + beg, len);
	new[len] = '\0';
	return (new);
}
