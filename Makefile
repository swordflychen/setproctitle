#
# date: 2016/02/18
#


all:
	gcc -o test ./src/test.c ./src/setproctitle.c

clean:
	rm -f test

