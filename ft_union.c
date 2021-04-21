#include <unistd.h>

void ft_union(char *str, char *str2)
{
	int tab[256] = {0};
	int i;

	i = 0;
	while (str[i])
	{
		if (tab[str[i]] == 0)
		{
			tab[str[i]] = 1;
			write(1, &str[i], 1);
		}
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (tab[(int)str2[i]] == 0)
		{
			tab[(int)str2[i]] = 1;
			write(1, &str2[i], 1);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
