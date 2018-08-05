/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:13:22 by luwargni          #+#    #+#             */
/*   Updated: 2018/07/09 16:54:41 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	ft_strlowercase(str);
	while (str[i])
	{
		if (str[0] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if ((str[i] >= 0 && str[i] <= '/') ||
				(str[i] >= ':' && str[i] <= '@') ||
				(str[i] >= '[' && str[i] <= '`') ||
				(str[i] >= '{' && str[i] <= 127))
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
