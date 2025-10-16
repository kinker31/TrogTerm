CC = gcc
CFLAGS = -Wall -Wextra -O3 -s
LDFLAGS = -lncurses

TARGET = trogterm
SRCS = src/trogterm.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean
all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(TARGET)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(TARGET)