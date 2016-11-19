/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 06:09:28 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/19 16:00:36 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char	*tmp;

	tmp = ft_strnew(len);
	if (tmp && str)
		tmp = ft_strncpy(tmp, &str[start], len);
	return (tmp);
}
