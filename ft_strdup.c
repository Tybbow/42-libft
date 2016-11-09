/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 02:07:26 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/09 07:15:03 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*tmp;

	tmp = ft_memalloc(ft_strlen(str) + 1);
	if (tmp)
		ft_strcpy(tmp, str);
	return (tmp);
}