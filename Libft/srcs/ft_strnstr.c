/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <tekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:31:50 by tekim             #+#    #+#             */
/*   Updated: 2021/05/03 15:32:18 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (substr[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[j] == substr[j])
		{
			j++;
			if (substr[i] == '\0')
				return ((char *)str);
		}
		i++;
	}
	return (0);
}
