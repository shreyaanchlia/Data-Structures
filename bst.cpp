#include<iostream>
using namespace std;
struct  node 
{
	int info;
	node *left;
	node *right;
};
node *root=NULL;
node* newnode(int data)
{
	static int c=0;
node *temp=new node;
temp->info=data;
temp->left=NULL;
temp->right=NULL;
cout<<++c<<"  "<<temp->info<<endl;
return temp;
}
node* insert(node *root,int key)
{
	if(root==NULL)
		return newnode(key);
	if(key<root->info)
	{
		root->left=insert(root->left,key);
		cout<<"left";
	}
	else if(key>root->info)
	{
		root->right=insert(root->right,key);
		cout<<"right";
	}
	return root;
}
void inorder(node *root)
{
	if(root==NULL)
		return ;
	inorder(root->left);
	cout<<root->info<<" ";
	inorder(root->right);
}
int main()
{
insert(root,50);
insert(root,55);
insert(root,23);
insert(root,12);
insert(root,45);
insert(root,3);
insert(root,5);
cout<<"inorder traversal"<<endl;
inorder(root);
}
