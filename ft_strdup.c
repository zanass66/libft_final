/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeanass <zeanass@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:48:22 by zeanass           #+#    #+#             */
/*   Updated: 2026/11/09 18:23:49 by zeanass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	size_t	i;
	char	*new_array;

	s_len = ft_strlen(s);
	new_array = malloc(sizeof(char) * (s_len + 1));
	if (!new_array)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		new_array[i] = s[i];
		i++;
	}
	new_array[i] = '\0';
	return (new_array);
}
