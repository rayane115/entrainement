/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <rayane.qouchich@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 16:33:19 by rqouchic          #+#    #+#             */
/*   Updated: 2020/03/04 16:46:07 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_strjoin(char *a, char *b)
{
	char *tab;
	tab = malloc((sizeof(char) * (strlen(a) + strlen(b))));
	int i = 0;
	int j = 0;
	while (a[i])
	{
		tab[i] = a[i];
		i++;
	}
	while (b[j])
	{
		tab[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0';
	printf("%s\n",tab);
	free(b);
	free(a);

}

int	main()
{
	char *a = strdup("salut");
	char *b = strdup("sava");
	ft_strjoin(a, b);
}
