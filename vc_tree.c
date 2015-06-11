#if 1

#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node *left;
	struct _node *right;
}NODE;

NODE *root =0;
typedef enum{LEFT,RIGHT}TYPE;

void insert_data(int data, NODE *s, TYPE type)
{
	NODE *temp;
	temp = (NODE *)malloc(sizeof(NODE));
	temp->data = data;
	temp->left = 0;
	temp->right= 0;
	if(root == 0){
			root = temp;
			return;
	}
	
	if(type == LEFT)
		s->left = temp;
	else if(type == RIGHT)
		s->right = temp;
}

void in_order( NODE *temp )
{
	if( temp == 0 )
		return ;
	in_order( temp->left );
	printf("%d\n", temp->data);
	in_order( temp->right );
}

void display( NODE *temp)
{
	int i;
	static int indent = -1;
	if(temp == 0)
		return;
	
	indent++;
	display(temp->left);
	
	for(i=0; i<indent; i++)
		printf("%4c", '.');
	
	printf("%4d\n", temp->data);
	display( temp->right );
	indent--;
}

#if 0
int main()
{
	insert_data(1,0,LEFT);
	insert_data(2,root,LEFT);
	insert_data(3,root,RIGHT);
	insert_data(4,root->left,LEFT);
	insert_data(5,root->left,RIGHT);
	insert_data(6,root->right,LEFT);
	insert_data(7,root->right,RIGHT);
	in_order(root);
}
#endif


#if 1
int main()
{
	insert_data(1,0,LEFT);
	insert_data(2,root,LEFT);
	insert_data(3,root,RIGHT);
	insert_data(4,root->left,LEFT);
	insert_data(5,root->left,RIGHT);
	insert_data(6,root->right,LEFT);
	insert_data(7,root->right,RIGHT);
	in_order(root);
	display(root);
}
#endif

#endif
