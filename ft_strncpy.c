/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 07:48:39 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/19 15:59:16 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	ft_memcpy(dest, src, n);
	if (ft_strlen(dest) < n)
		ft_bzero(&dest[ft_strlen(dest)], (n - ft_strlen(dest)));
	return (dest);
}
