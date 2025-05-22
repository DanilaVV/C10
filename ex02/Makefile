target = run
obj = *.o
.PHONY: all clean fclean

all: $(target)

clean:
	rm $(obj)

fclean:
	rm $(target) $(obj)

run: ft_tail.o
	gcc -o run ft_tail.o

ft_tail.o: ft_tail.c
	gcc -c ft_tail.c -o ft_tail.o
