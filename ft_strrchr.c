/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 18:06:45 by mgusakov          #+#    #+#             */
/*   Updated: 2021/05/24 11:56:08 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	str = (char *)s;
	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (str[len] == (char)c)
			return (&str[len]);
	}
	return (NULL);
}