#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define pf push_front
#define mp make_pair

typedef pair<int,int> ii;
typedef pair<int,string> pis;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef set<int> si;
typedef set<char> sc;
typedef map<int,string> mis;

struct node{
	int val;
	struct node* left;
	struct node* right;
};

typedef struct node* Node;

Node newNode(int data){
	Node node = (Node) malloc(sizeof(Node));
	node->val = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

void postorder(Node node) {
	if (node !=NULL) {
		cout << node->val << " ";
		postorder(node->left);
		postorder(node->right);
	}
	//cout << "x";
}
int nn=0;
bool isBST(Node root){
    static Node prev = NULL;
    nn++;
    if(root){
		cout << root->val << " ";
		bool cekKiri = isBST(root->left);
		cout << " * ";
        if (!cekKiri){
			cout << "cek1\n";
			return false;
		}
 
        if (prev != NULL && root->val <= prev->val)
          return false;
 
        prev = root;
        cout << ":" << prev->val << ":mass\n";
 
        return isBST(root->right);
    }
    //nn++;
 
    return true;
}

int main(){
	Node root = newNode(4);
	root->left        = newNode(2);
	root->right       = newNode(5);
	root->right->left = newNode(6);
	root->left->left  = newNode(1);
	root->left->right = newNode(3); 
	postorder(root);
	cout << endl << "-------\n";
	if(isBST(root)) printf("Is BST\n");
	else printf("Not a BST\n");
	cout << nn << endl;
	return 0;
}
