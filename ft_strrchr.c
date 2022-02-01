/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:36:35 by gupark            #+#    #+#             */
/*   Updated: 2022/01/30 19:04:23 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*pt;

	pt = NULL;
	while (*str)
	{
		if (*str == c)
			pt = (char *)str;
		str++;
	}
	if (*str == c)
		pt = (char *)str;
	return (pt);
}
