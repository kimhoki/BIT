CC=gcc                                       
COMPILE.c=$(CC) $(CFLAGS) $(CPPFLAGS) -c     
LINK.c=$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
CFLAGS=
#-ansi -Wall
TEMPFILES=core core.* *.o temp.* *.out
MEMSTR = memstr

PROGS = 2msgq msgq test demon

all:	$(PROGS)

%:	%.c
	$(CC) $(CFLAGS) $@.c -o $@

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o
