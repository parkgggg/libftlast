/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:36:35 by gupark            #+#    #+#             */
/*   Updated: 2022/02/05 16:22:04 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*pt;

	pt = NULL;
	while (*str)
	{
		if (*str == (char)c)
			pt = (char *)str;
		str++;
	}
	if (*str == (char)c)
		pt = (char *)str;
	return (pt);
}
