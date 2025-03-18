//#include<iostream>
//struct Node {
//	int data;
//	Node* left;
//	Node* right;
//};
//Node* createnode(int dat)
//{
//	Node* newnode = new Node();
//	newnode->left = newnode->right = nullptr;
//	newnode->data = dat;
//	return newnode;
//}
////(data left right)
//void printnodepreorder(struct Node* root)
//{
//	if (root == nullptr)return;
//
//	std::cout << root->data << " -> ";
//	printnodepreorder(root->left);
//	printnodepreorder(root->right);
//}
////(left data right)
//void printnodeinorder(struct Node* rootnode)
//{
//	if (rootnode == nullptr)return;
//
//	printnodeinorder(rootnode->left);
//	std::cout << rootnode->data << "->";
//	printnodeinorder(rootnode->right);
//}
////(left right data)
//void printnodepostorder(struct Node* rootnode)
//{
//	if (rootnode == nullptr)return;
//
//	printnodepostorder(rootnode->left);
//	printnodepostorder(rootnode->right);
//	std::cout << rootnode->data << "->";
//}
//struct Node* insertnode(struct Node* root, int dat)
//{
//	if (root == nullptr)return root;
//
//	if (dat < root->data)
//	{
//		root->left=insertnode(root->left,dat);
//	}
//	else {
//		root->right = insertnode(root->right, dat);
//	}
//	return root; 
//
//}
//int main()
//{
//	Node* root = createnode(12);
//	root->left = createnode(10);
//	root->right = createnode(13);
//
//	root->left->left = createnode(8);
//	root->left->right = createnode(11);
//
//	root->right->left = createnode(9);
//	root->right->right = createnode(10);
//	
//	printnodepreorder(root);
//	std::cout << "\n";
//	printnodeinorder(root);
//	std::cout << "\n";
//	printnodepostorder(root);
//	insertnode(root, 18);
//}
struct root {
	root* left;
	int val;
	root* right;
};
int main() {

}