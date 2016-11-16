/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 14:21:18 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/16 08:44:33 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len;
	
	len = ft_strlen(dest);
	if (!len)
	{
		ft_strncpy(dest, src, n - 1);
		return (ft_strlen(src));
	}
	if (n <= len)
		return (ft_strlen(src) + n);
	ft_strncpy(&dest[len], src, n - len - 1);
	return ((n + len) - (n - len));
}
