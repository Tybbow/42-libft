/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 02:07:26 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/08 13:57:57 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*tmp;

	tmp = ft_memalloc(ft_strlen(str) + 1);
	if (!tmp)
		return (NULL);
	return (ft_strcpy(tmp, str));
}