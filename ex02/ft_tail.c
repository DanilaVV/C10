#include <unistd.h>
#include <string.h>
#include <fcntl.h>

void	ft_putstr(char *st)
{
	int	i;

	i = 0;
	while (st[i])
	{
		write (1, &st[i], 1);
		i++;
	}
}

int	ft_readms(char ms[30000], char *st)
{
	int		i;
	int		fd;

	i = 0;
	fd = open(st, O_RDONLY);
	if (fd < 0)
		ft_putstr(strerror(fd));
	read(fd, ms, 30000);
	while (ms[i])
		i++;
	close(fd);
	return (i);
}

int	ft_atoi(char *st)
{
	int	i;
	int	res;

	i = 2;
	res = 0;
	while (st[i])
	{
		res *= 10;
		res += (st[i] - '0');
		i++;
	}
	return (res);
}

void	ft_tail(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;
	char	ms[30000];

	i = 2;
	while (i < argc)
	{
		size = ft_atoi(argv[1]);
		j = ft_readms(ms, argv[i++]);
		while (j - size < j)
			write(1, &ms[j - size--], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argv[1][0] == '-' && argv[1][1] == 'c')
	{
		ft_tail(argc, argv);
		return (0);
	}
	if (argv[1][0] == '-' && argv[1][1] == 'C')
	{
		ft_tail(argc, argv);
		return (0);
	}
	return (1);
}
