/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 14:21:18 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/19 15:57:41 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = ft_strlen(dest);
	if (!len)
	{
		ft_strcat(dest, src);
		return (ft_strlen(src));
	}
	if (n <= len)
		return (ft_strlen(src) + n);
	ft_strncat(dest, src, n - len - 1);
	return (len + ft_strlen(src));
}
