/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:10:36 by gupark            #+#    #+#             */
/*   Updated: 2022/01/31 23:15:34 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = 0;
	if (size == 0 || size - 1 < d_len)
		return (size + s_len);
	if (size - 1 > d_len)
	{
		while (src[i] && i < size - 1 - d_len)
		{
			dest[d_len + i] = src[i];
			i++;
		}
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
