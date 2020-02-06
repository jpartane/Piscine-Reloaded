/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:35:33 by jpartane          #+#    #+#             */
/*   Updated: 2019/10/18 12:48:27 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0')
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*x;

	i = 1;
	j = 0;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			x = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = x;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
