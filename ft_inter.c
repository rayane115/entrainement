/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <rayane.qouchich@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 18:35:58 by rqouchic          #+#    #+#             */
/*   Updated: 2020/03/03 20:32:02 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int check(char c, char *temp)
{
	int i = 0;
	int b = 0;


	while (temp[i])
	{
		if (c == temp[i])
		{
			b++;
		}
		i++;
	}
	//printf("%d mon b \n",b);
	if (b > 0)
		return (0);
	return(1);
}

int	main(void)
{

	char *chaine1 = strdup("rien");
	char *chaine2 = strdup("cette phrase ne cache rien");
	char *new = malloc(sizeof(char) * 500);
	char *temp = malloc(sizeof(char) * 500);

	int a = 0;
	int b = 0;
	int c = 0;

	while (chaine1[a] && chaine2[b])
	{
		while (chaine1[a] != chaine2[b])
			b++;
		if (chaine1[a] == chaine2[b])
		{
			new[c] = chaine1[a];
			a++;
			c++;
		}
	}
	a = 0;
	b = 0;

	while (new[b])
	{
		if (check(new[b], temp))
		{
			temp[a] = new[b];
			a++;
			b++;
		}
		else
			b++;
	}


	printf("%s\n", temp);

	return (0);
}

/*$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$*/
