/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rqouchic <rayane.qouchich@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 15:11:36 by rqouchic          #+#    #+#             */
/*   Updated: 2020/03/04 15:30:17 by rqouchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int tmp[300];
	int i = 0;
	int j = 0;

	//printf("salut\n");
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[2][i])
	{
		tmp[(int)(argv[2][i])] = 0;
		i++;
	}
	while (argv[1][j])
	{
		if (tmp[(int)(argv[1][j])] == 0)
		{
			tmp[(int)(argv[1][j])] = 1;
			write(1, &argv[1][j], 1);
		}
		j++;
	}
	i = 0;
	while (argv[2][i])
	{
		if (tmp[(int)(argv[2][i])] == 0)
		{
			tmp[(int)(argv[2][i])] = 1;
			write(1, &argv[2][i], 1);
		}
		i++;
	}




	write(1, "\n", 1);
	return (0);
}
