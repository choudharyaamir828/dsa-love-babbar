#include<iostream>
#include<queue>
using namespace std;
class Node{
	public:
	int data;
	Node* left;
	Node* right;
	
	 Node(int d){
	 	this->data = d;
	 	left = NULL;
	 	right = NULL;
	 	
	 }
};
Node * buildtree(Node* root){
	
	cout<<"enter the data =>" <<endl;
	int data;
	cin>>data;
	root = new Node(data);
	
	if(data == -1){
		return NULL;
	}
	
	cout << "enter data for inserting in left " << data << endl;
	root->left = buildtree(root->left);
	cout << " enter data for inserting in right side " << data << endl;
	root -> right =  buildtree(root->right);
	return root;
	
}
void levelorder(Node* root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		Node* temp = q.front();
		
		q.pop();
		
		
		
		if(temp == NULL){
			cout << endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout << temp->data << " ";
		
		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
	}
	}
}
void inorder(Node* root){
	if(root == NULL){
		return ;
	}
	inorder(root->left);
	cout << root->data <<" ";
	inorder(root->right);
}
void preorder(Node* root){
	if(root == NULL){
		return ;
	}
	cout<< root->data << " ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(Node* root){
	if(root == NULL){
		return ;
	}
	cout<< root->data << " ";
	postorder(root->left);
	postorder(root->right);
}
int main(){
	Node* root = NULL;
	
	root = buildtree(root);
	levelorder(root);             // level order treversal
	
//	cout <<" preorder treversal "<< endl;
//	preorder(root);
	
//	cout <<" inorder treversal " <<endl;
//	inorder(root);
//	cout <<"postorder treversal " <<endl;
//	postorder(root);
	
	
	return 0;
}














