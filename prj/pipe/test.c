#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h> 
#include <sys/msg.h>
#include <sys/stat.h>

struct AAA{
	int mtype;
	char mtext[1];
};

int main()
{
	struct AAA* p;
	int i;
	p = (struct AAA *)malloc(sizeof(struct AAA)+10);

	for(i = 0; i<=10; i++)
		p-> mtext[i] = i+1;
	for(i = 0; i<=10;i++)
		printf("mtext[%d]: %d\n",i,p->mtext[i]);
	
    exit(0);
}