#include <iostream>
#include "treeNode.h"
#include <queue>
using namespace std;


TreeNode<int>* inputLevelWise(){
   cout<<"Enter root data"<<endl;
   int rootData=0;
   int num=0;
   queue<TreeNode<int>*> q;
cin>>rootData;
TreeNode<int>* root=new TreeNode<int>(rootData);
q.push(root);
while(q.size()!=0){

TreeNode<int>* front=q.front();
q.pop();
cout<<"Enter no of children for "<<front->data<<endl;
cin>>num;

for(int i=0;i<num;i++){
int data=0;
cout<<"Enter "<<i<<"th data for"<<front->data<<endl;
cin>>data;
TreeNode<int>* root=new TreeNode<int>(data);
q.push(root);
front->children.push_back(root);
}
}
return root;
}


void printLevelWise(TreeNode<int>* root) {
        queue<TreeNode<int>*> q;

    q.push(root);
    while(q.size()!=0){
    TreeNode<int>* root=q.front();
    cout<<root->data<<":";
    int size=root->children.size();
    q.pop();
    for(int i=0;i<size;i++){
        if(i==size-1){
                   cout<<root->children[i]->data;

        }
        else{
       cout<<root->children[i]->data<<",";

        }
        q.push(root->children[i]);
    }
    cout<<endl;
    }

}



int main(){
    TreeNode<int> *root=inputLevelWise();
    cout<<endl;
    printLevelWise(root);

}