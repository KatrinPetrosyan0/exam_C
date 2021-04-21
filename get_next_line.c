#include "get_next_line.h"

int get_next_line(char **line)
{
	int i;
	int n;
	char c;
	char *str;

	i = 0;
	if (!(str = (char *)malloc(1000 + 1)))
		return (-1);
	while ((n = read(0, &c, 1)) && c != '\n' && c != '\0')
	{
		if (c != '\n' && c != '\0')
			str[i] = c;
		++i;
	}
	str[i] = '\0';
	*line = str;
	return (n);
}

int main(void)
{
	int		r;
	char	*line;

	line = NULL;
	while ((r = get_next_line(&line)) > 0)
	{
		printf("%s\n", line);
		free(line);
		line = NULL;
	}
	printf("%s", line);
	free(line);
	line = NULL;
}

