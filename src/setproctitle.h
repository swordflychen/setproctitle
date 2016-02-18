/*
 * file: setproctitle.h
 * date: 2016/02/18
 * auth: chenjf
 * desc: 
 */

/* set program title. */
void spt_init(int argc, char *argv[]);
void setproctitle(const char *fmt, ...);

