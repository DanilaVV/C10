#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *st)
{
	int	i;

	i = 0;
	while (st[i++])
		write(1, &st[i - 1], 1);
}

int	main(int argc, char **argv)
{
	int		f;
	char	str[10000];

	if (argc < 2)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	if (argc == 2)
	{
		f = open(argv[1], O_RDONLY);
		read(f, str, sizeof(str));
		ft_putstr(str);
		close(f);
	}
	return (0);
}
