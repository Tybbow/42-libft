/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 14:05:44 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/16 05:51:49 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	len;
	n = (ft_strlen(src) >= n) ? n : ft_strlen(src) + 1;
	len = ft_strlen(dest) + n;
	ft_strncpy(&dest[ft_strlen(dest)], src, n);
	if (len < ft_strlen(dest))
		ft_bzero(&dest[len], (ft_strlen(dest) - len));
	return (dest);
}
