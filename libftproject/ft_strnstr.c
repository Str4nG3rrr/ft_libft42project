/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yghari <yghari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:16:05 by yghari            #+#    #+#             */
/*   Updated: 2021/11/24 20:56:36 by yghari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>

char	*ft_strnstr(const char *hastack, const char *needle, size_t len)
{
	size_t	i;
	size_t	lenstr;

	i = 0;
	lenstr = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)hastack);
	while (len > i && hastack[i])
	{
		if (ft_strncmp(hastack + i, needle, lenstr) == 0
			&& i + lenstr <= len)
			return ((char *)(hastack + i));
		i++;
	}	
	return (NULL);
}
