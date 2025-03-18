#include<iostream>
struct List {
	List* Next;
	int data;
	List* Prev;
};
struct List* createnode(struct List* head, int val)
{
	List* newnode = new List();
	newnode->data = val;
	newnode->Next = nullptr;
	newnode->Prev = nullptr;
	head = newnode;
	return head;
}
struct List* addatbegin(struct List* Node,int val) {
	struct List* temp = new List();
	temp->Next = nullptr;
	temp->data = val;
	temp->Prev = nullptr;
	Node->Prev = temp;
	temp->Next = Node;
	Node = temp;
	return Node;
}
struct List* addatend(struct List* Node, int val)
{
	List* temp = new List();
	//temp->Next = nullptr;
	temp->data = val;
	temp->Prev = nullptr;

	List* tp = Node;
	while (tp->Next != nullptr)
	{
		tp = tp->Next;
	}
	tp->Next = temp;
	temp->Prev = tp;
	tp = temp;
	return Node;
}
struct List* Addatpos(struct List* Node, int pos)
{
	List* newP = nullptr;
	newP = createnode(newP, 500);
	List* temp = Node;
	List* temp2 = nullptr;

	while (pos != 1)
	{
		temp = temp->Next;
		pos--;
	}
	temp2 = temp->Next;
	temp->Next = newP;
	temp2->Prev = newP;
	newP->Prev = temp;
	newP->Next = temp2;
	return Node;
}
struct List* reversealinkedlist(List* current) {
	List* ptr = current;
	List* temp = nullptr;
	while (ptr != nullptr) {
		temp = ptr->Prev;
		ptr->Prev = ptr->Next;
		ptr->Next = temp;
		ptr = ptr->Prev;
	}
	return current;
}
int main() {
	List* head = nullptr;
	List* ptr;
	head = createnode(head,10);
	head = addatbegin(head, 100);
	head = addatend(head, 200);
	head = addatbegin(head, 20);
	head = addatend(head, 400);
	head = Addatpos(head, 4);
	
	ptr = head;
	while (ptr != nullptr)
	{
		std::cout << ptr->data << "->";
		ptr = ptr->Next;
	}
	std::cout << "nullptr\n";

	head = reversealinkedlist(head);

	ptr = head;
	while (ptr != nullptr) {
		std::cout << ptr->data << " ";
		ptr = ptr->Next;
	}

	

}
/*
* complete code of Doubly linked list
* struct Node {
	Node* prev;
	int data;
	Node* next;
};
struct Node* createnode(struct Node* head, int val)
{
	struct Node* newnode = new Node();
	newnode->data = val;
	newnode->next = nullptr;
	newnode->prev = nullptr;
	head = newnode;
	return head;
}
struct Node* add_Atbeg(struct Node* head, int val)
{
	Node* temp = new Node();
	temp->data = val;
	temp->next = nullptr;
	temp->prev = nullptr;
	temp->next = head;
	head->prev = temp;
	head = temp;
	return head;
}
struct Node* add_Atend(struct Node* head, int val)
{
	Node* temp = new Node();
	temp->next = nullptr;
	temp->data = val;
	temp->prev = nullptr;

	Node* ptr = head;
	while(ptr->next != nullptr)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	temp->prev = ptr;
	ptr = temp;
	return head;
}
struct Node* add_Atmid(struct Node* head, int pos)
{
	struct Node* newp = nullptr;
	newp= createnode(newp, 110);
	struct Node* temp2 = nullptr;
	struct Node* ptr = head;
	while (pos != 1)
	{
		ptr = ptr->next;
		pos--;
	}
	if (ptr->next == nullptr) {
		ptr->next = newp;
		newp->prev = ptr;
	}
	else {
		temp2 = ptr->next;
		ptr->next = newp;
		temp2->prev = newp;
		newp->prev = ptr;
		newp->next = temp2;
		ptr = temp2;
	}
	return head;
}
struct Node* deletethenode(struct Node* head)
{
	struct Node* node = head;
	head = head->next;
	delete node;
	node = nullptr;
	head->prev = nullptr;
	return head;
}
struct Node* deletethenodeatend(struct Node* head) {
	struct Node* node = head;
	struct Node* temp = nullptr;
	while (node->next!= nullptr)
	{
		node = node->next;
	}
	temp = node->prev;
	temp->next = nullptr;
	delete node;
	node=nullptr;
	return head;
}
struct Node* deleteatmid(struct Node* head, int pos)
{
	Node* temp = nullptr;
	Node* ptr = head;
	while (pos > 1)
	{
		ptr = ptr->next;
		pos--;
	}
	temp = ptr->prev;
	temp->next = ptr->next;
	temp->next->prev = ptr;
	delete ptr;
	ptr = NULL;
	return head;
}
int main() {
	Node* head = nullptr;
	head = createnode(head, 1);
	head = add_Atbeg(head, 2);
	head = add_Atend(head, 3);
	
	head = add_Atmid(head, 3);
	Node* ptr = head;
	//Node* ptr2 = head;
	while (ptr != nullptr)
	{
		std::cout << ptr->data << "->";
		ptr = ptr->next;
	}
	std::cout << "\nafter deleted at first node\n";
	head = deletethenode(head);
	ptr = head;
	while (ptr != nullptr)
	{
		std::cout << ptr->data << "->";
		ptr = ptr->next;
	}
	std::cout << "\nafter deleted at last node\n";
	head = deletethenodeatend(head);
	ptr = head;
	while (ptr != nullptr)
	{
		std::cout << ptr->data << "->";
		ptr = ptr->next;
	}
}
*/
/*
* Tree Dta structure 
* struct Tree {
	Tree* left;
	int data;
	Tree* right;

	Tree(int dat) :data(dat), right(nullptr), left(nullptr) {};
};
struct Tree* createchild(Tree* child, int val) {
	if (child == nullptr) {
		return new Tree(val);
	}
	if (val < child->data) {
		child->left=createchild(child->left, val);
	}
	else if (val > child->data) {
		child->right=createchild(child->right,val);
	}
	return child;
}

void inorder(Tree* root) {
	if (root != nullptr) {
		inorder(root->left);
		std::cout << root->data << " ";
		inorder(root->right);
	}
	//std::cout << "\n";
}

Tree* search(Tree* Node,int val) {
	if (Node == nullptr || Node->data == val) {
		return Node;
	}
	if (val < Node->data) {
		return search(Node->left, val);
	}
	else if (val > Node->data) {
		return search(Node->right, val);
	}
	//std::cout << "\n";
	
}
void preorder(Tree* Node) {
	if (Node != nullptr) {
		std::cout << Node->data << " ";
		preorder(Node->left);
		preorder(Node->right);
	}
	//std::cout << "\n";
}
void postorder(Tree* Node) {
	std::cout << "\n";
	if (Node != nullptr) {
		preorder(Node->left);
		preorder(Node->right);
		std::cout << Node->data << " ";
	}
	
}
int main() {
	Tree* parent = nullptr;
	parent = createchild(parent, 56);
	createchild(parent, 65);
	createchild(parent, 43);
	createchild(parent, 50);
	createchild(parent, 60);
	createchild(parent, 70);

	inorder(parent);

	Tree* foundnode = search(parent, 70);
	if (foundnode) {
		std::cout << "\nNode found " << foundnode->data << "\n";
	}
	else {
		std::cout << "Node not found";
	}
	preorder(parent);
	postorder(parent);
}
*/