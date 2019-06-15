#include<iostream>
using namespace std;

int v;

struct treeNode{
    int data=0;
    treeNode *left = NULL;
    treeNode *right = NULL;
};

int main(){
    treeNode *head = NULL;

    // creat tree as follows
    treeNode * createTreeNode(int);
    head = createTreeNode(2);
    head->left = createTreeNode(3);
    head->left->left = createTreeNode(4);
    head->left->right = createTreeNode(5);
    head->right = createTreeNode(1);
    head->right->left = createTreeNode(6);
    head->right->right = createTreeNode(7);

    // inorder traversal
    void inorder(treeNode*);
    cout<<"Inorder traversal "<<endl;
    inorder(head);
    cout<<endl;

    // pre-order traversal
    void preorder(treeNode *);
    cout<<"Preorder traversal "<<endl;
    preorder(head);
    cout<<endl;

    // post-order traversal
    void postorder(treeNode *);
    cout<<"Postorder traversal "<<endl;
    postorder(head);
    cout<<endl;

    return 0;
}

void postorder(treeNode * top){
    if(top->left)
        postorder(top->left);
    if(top->right)
        postorder(top->right);
    cout<<top->data<<" ";
}

void preorder(treeNode * top){
    cout<<top->data<<" ";
    if(top->left)
        preorder(top->left);
    if(top->right)
        preorder(top->right);
}

void inorder(treeNode * top){
    if(top->left)
        inorder(top->left);
    cout<<top->data<<" ";
    if(top->right)
        inorder(top->right);
}

treeNode * createTreeNode(int data){
    treeNode *ptr = new treeNode;
    ptr->data = data;
    return ptr;
}