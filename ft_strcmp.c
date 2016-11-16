/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 01:57:14 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/16 02:24:32 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	int tmp;
	int len;

	len = (ft_strlen(str1) >= ft_strlen(str2)) ? ft_strlen(str1) : ft_strlen(str2);
	tmp = ft_memcmp(str1, str2, len + 1);
	return (tmp);
}