#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *t;
struct node *newnode(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
};
struct node *insert(struct node *t,int value)
{
    if(t==NULL)
    {
        return newnode(value);
    }
    else
    {
        if(value<t->data)
        {
            t->left=insert(t->left,value);
        }
        else
        {
            if(value>t->data)
            {
                t->right=insert(t->right,value);
            }
        }
    }
};
void inorder(struct node *t)
{
    if(t==NULL)
    {
        return ;
    }
    inorder(t->left);
    printf("%d",t->data);
    inorder(t->right);
}
void main()
{
    int y;
    struct node *root=NULL;
    root=insert(root,1);
    root=insert(root,2);
    root=insert(root,3);
    root=insert(root,4);
    root=insert(root,5);
    root=insert(root,6);
    printf("INORDER TRAVERSAL IS:\n");
    inorder(root);
}





