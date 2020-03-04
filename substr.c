/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <rayane.qouchich@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:53:28 by rqouchic          #+#    #+#             */
/*   Updated: 2020/03/04 17:03:15 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_substr(char *str, int start, int len)
{
	char *tab = malloc(sizeof(char) * len + 1);

	int i = 0;
	while (str[start] && len)
	{
		tab[i] = str[start];
		len--;
		start++;
		i++;
	}
	tab[i] = '\0';
	printf("%s\n", tab);
}

int	main()
{
	char *r = ("salut commen tu vas");
	ft_substr(r, 2, 10);
	return (0);

}
