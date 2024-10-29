#include <stdlib.h>
#include <stdio.h>

int asw (char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] != 0 && str[0] > 32)
		j++;
	while (str[i] != 0)
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13) && str[i + 1] > 32 \
		&& str[i + 1] != 127)
			j++;
		i++;
	}
	return (j);
}

int putwrd(char *str, int i, int j, char **res)
{
	int	k;
	int	m;

	k = i;
	m = 0;
	while (str[i] >= 33 && str[i] <= 126)
		i++;
	res[j] = malloc(sizeof(char) * (i - k + 1));
	res[j][i - k] = 0;
	while (k != i)
	{
		res[j][m] = str[k];
		m++;
		k++;
	}
	return (m);
}

char	**strsp(char *str)
{
	int	j;
	int	k;
	int	i;
	char	**res;

	j = asw(str);
	i = 0;
	k = 0;
	res = malloc(sizeof(char*) * (j + 1));
	res[j] = 0;
	while (str[i] != 0)
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		i = i + putwrd(str, i, k, res);
		k++;
	}
	return (res);
}

int	main(void)
{
	int	i;
	char	*str = "O Sol e amarelo";

	i = 0;
	while (i != asw(str))
	{
		printf("%s\n", strsp(str)[i]);
		i++;
	}
}
