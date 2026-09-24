CC = gcc
CGLAGS = -Wall -Wextra -g -MMD

target1=task1
target2=task2

.PHONY: all clean
all: $(target1) $(target2)

$(target1): task1.C
	$(CC) $(CFLAGS) -o $(target1) task1.C

$(target2): task2.C
	$(CC) $(CFLAGS) -o $(target2) task2.C

clean:
	rm -f $(target1) $(target2)