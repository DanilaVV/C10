target = run
obj = *.o
.PHONY: all clean fclean

all: $(target)

clean:
	rm $(obj)

fclean:
	rm $(target) $(obj)

run: ft_cat.o
	gcc -o run ft_cat.o

ft_cat.o: ft_cat.c
	gcc -c ft_cat.c -o ft_cat.o


