/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 02:02:47 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/16 02:33:47 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int tmp;

	if (n > ft_strlen(str1) + 1 && n > ft_strlen(str2) + 1)
		n = (ft_strlen(str1) >= ft_strlen(str2)) ? 
			ft_strlen(str1) : ft_strlen(str2);
	tmp = ft_memcmp(str1, str2, n);
	return (tmp);
}