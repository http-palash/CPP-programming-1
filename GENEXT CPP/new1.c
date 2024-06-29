#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int v;
	struct node *l, *r;
};

struct node disp(struct node *r) 
{ 
	if (r != NULL) {
		disp(r->l);
		printf("%d \n", r->v);
		disp(r->r);
	}
}

struct node *new_node(int v) 
{
	struct node *ptr = (struct node *)malloc(sizeof(struct node)); 
	ptr->v = v;
	ptr->l = ptr->r = NULL;
	return ptr;
}

struct node* ins(struct node* node, int v) 
{ 
	if (node == NULL) 
    return new_node(v); 
	if (v < node->v)
    {
		node->l = ins(node->l, v);
	}
     else if (v > node->v) {
		node->r = ins(node->r, v);
	}
	return node;
}

int main() 
{

	printf("Tree insertion operation:\n");
	struct node *r = NULL;
	r = ins(r, 834);
	ins(r, 947);
	ins(r, 780);
	ins(r, 6);
	ins(r, 700);
    ins(r, 780);
 	ins(r, 790);
 	ins(r, 890);
 	ins(r, 990);
    printf("Tree is :\n");
	disp(r);
	return 0;
}
