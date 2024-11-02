# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>

int	main(void)
{
	char	p[] = "dfuAe137";

	printf("str: %s\n", strchr(p,65));
}