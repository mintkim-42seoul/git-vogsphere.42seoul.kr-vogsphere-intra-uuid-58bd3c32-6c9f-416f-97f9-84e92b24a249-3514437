/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintkim <mintkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 04:40:17 by mintkim           #+#    #+#             */
/*   Updated: 2021/04/13 05:40:51 by mintkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_count = 0;
int g_i = 0;

int strlen(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

void word(char *str, char *charset)
{
	int i;
	int j;
	int cnt;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == charset[j] && str[i] && charset[j])
		{
			while (j < strlen(charset))
			{
				if (str[i + j] == charset[j] && str[i] && charset[i])
					cnt++;
				j++;
			}
			if (strlen(charset) == cnt)
			{
				g_count++;
				i = i + strlen(charset);
			}
		}
		i++;
	}
}

char	*ft_strncpy(char *str, char *charset, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

char **ft_split(char *str, char *charset)
{
	char **arr;
	arr = (char **)malloc(g_count * sizeof(char*) + 1);

	while (str[g_i])
	{
		j = 0;
		if (str[g_i] == charset[j] && str[g_i] && charset[j])
		{
			while (j < strlen(charset))
			{
				if (str[g_i + j] == charset[j] && str[g_i] && charset[g_i])
					cnt++;
				j++;
			}
			if (strlen(charset) == cnt)
			{
				strncpy
			}
		}
		i++;
	}

}
