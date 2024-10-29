#include <stdio.h>
#include <stdlib.h>

int	small (int	s, int	e, int	i)
{
	while (s != e + 1)
	{
		i++;
		s++;
	}
}
int big (int	s, int	e, int	i)
{
	while (s + 1 != e)
	{
		i++;
		e++;
	}
}
int *ft_range(int	start, int	end)
{
	int	*i;
	int	j;
	int	s;
	int	e;

	if (start < end)
	{
		j = small(start, end, 0);
		e = 1;
	}
	else
	{
		j = big(start, end, 0);
		e = -1;
	}
	i = malloc(sizeof(int) * j);
	s = 0;
	while(s < j)
	{
		i[s] = start;
		start = start + e;
		s++;
	}
	return (i);
}
int	main(void)
{
	int	*p;
	int	k;

	p = ft_range(1, 3);
	k = 0;
	printf("%d ", p);
	/*while (k < 4)
	{
		printf("%d ", p[k]);
		k++;
	}*/
}