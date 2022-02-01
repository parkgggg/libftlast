/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:56:17 by gupark            #+#    #+#             */
/*   Updated: 2022/01/31 22:16:59 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*str2)
		return ((char *)str1);
	while (str1[i] && i < n)
	{
		j = 0;
		while (str1[i + j] == str2[j] && i + j < n && str2[j])
			j++;
		if (str2[j] == '\0')
			return ((char *)(str1 + i));
		i++;
	}
	return (0);
}
