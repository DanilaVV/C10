FLAGS = -Wall -Wextra -Werror
TARGET = ft_display_file
.PHONY: all clean fclean

all: $(TARGET)

$(TARGET): $(TARGET).o
	gcc -o $(TARGET) $(TARGET).o

$(TARGET).o: $(TARGET).c
	gcc $(FLAGS) -c $(TARGET).c

clean:
	rm $(TARGET).o

fclean: clean
	rm $(TARGET)
