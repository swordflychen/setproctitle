/*
 * file: test.c
 * date: 2016/02/18
 * auth: chenjf
 * desc:
 */

#include <stdlib.h>

#include "setproctitle.h"

int main(int argc, char ** argv)
{
	pid_t pid = fork();
	if (pid == 0) {
		spt_init(argc, argv);
		setproctitle("new name:%d", getpid());	
		while(1);
	}
	
	return 0;
}
