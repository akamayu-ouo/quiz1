CC=gcc
obj=list.o quick.o

all: $(obj) main.c
	$(CC) $(obj) main.c -o main

$(obj): %.o: %.h %.c

clean:
	rm -f *.o main


