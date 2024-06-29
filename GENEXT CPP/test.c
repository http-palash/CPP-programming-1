#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int value;
	struct node *left, *right;
};

struct node display(struct node *root) 
{ 
	if (root != NULL) {
		display(root->left);
		printf("%d \n", root->value);
		display(root->right);
	}
}

struct node *new_node(int value) 
{
	struct node *temp = (struct node *)malloc(sizeof(struct node)); 
	temp->value = value;
	temp->left = temp->right = NULL;
	return temp;
}

struct node* insert(struct node* node, int value) 
{ 
	if (node == NULL) 
    return new_node(value); 
	if (value < node->value)
    {
		node->left = insert(node->left, value);
	}
     else if (value > node->value) {
		node->right = insert(node->right, value);
	}
	return node;
}

int main() 
{

	printf("Tree insert operation:\n");
	struct node *root = NULL;
	root = insert(root, 100);
	insert(root, 200);
	insert(root, 300);
	insert(root, 400);
	insert(root, 5000);
	insert(root, 6000);
	insert(root, 7000);
	insert(root, 7000);
	 
    printf("Tree is :\n");
	display(root);
	return 0;
}
