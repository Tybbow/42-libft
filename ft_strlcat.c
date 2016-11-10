/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 14:21:18 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/10 05:29:43 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	if (!ft_strlen(dest))
	{
		ft_strncpy(dest, src, n - 1);
		return (ft_strlen(src));
	}
	if (n <= ft_strlen(dest))
		return (ft_strlen(src) + n);
	ft_strncpy(&dest[ft_strlen(dest)], src, n - ft_strlen(dest) - 1);
	return (ft_strlen(dest) + ft_strlen(src));
}
