#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void	ft_error(char *st)
{
	int	i;

	i = 0;
	while (st[i])
	{
		write(1, &st[i], 1);
		i++;
	}
}

void	ft_putstr(char *st)
{
	int	i;

	i = 0;
	while (st[i])
	{
		write(1, &st[i], 1);
		st[i] = '\0';
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	ms[10000];

	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
		{
			read(fd, ms, 10000);
			ft_putstr(ms);
		}
		else
			ft_error(strerror(fd));
		close(fd);
		i++;
	}
	return (0);
}
