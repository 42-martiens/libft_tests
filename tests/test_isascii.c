#include "libft_tests.h"
#include <ctype.h>

int		test_isascii()
{
	char *str = "\0\n@AZ[`\127z{~\265";
	int i;

	i = 0;
	while (i < 12)
	{
		if (isascii(str[i]) != ft_isascii(str[i]))
		{
			printf(RED);
			printf("[K0] : ");
			if (str[i] == 0)
				printf("Your isascii does not work for c = \\0\n");
			else if (str[i] >= 0 && str[i] <= 127)
				printf("Your isascii does not work for ascii characters\n");
			else if (str[i] > 127)
				printf("Your isascii does not work for non ascii characters\n");
			printf(DEFAULT);
		}
		else if (i % 2)
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		i++;
	}
	return (0);
}