/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-gal <vle-gal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 16:53:00 by vle-gal           #+#    #+#             */
/*   Updated: 2017/11/10 17:49:01 by vle-gal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1l;
	size_t	s2l;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	if (!(str = ft_memalloc((s1l + s2l + 1))))
		return (NULL);
	ft_strcat(str, s1);
	ft_strcat(str, s2);
	return (str);
}
