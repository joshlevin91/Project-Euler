#include <fstream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <iostream>
#include <algorithm>

using namespace std;

// Binary tree node
struct Node {
	int data;
	Node* left;
	Node* right;

	Node (int val){
		data = val;
		left = NULL;
		right = NULL;
	}
};

// Return max sum of all tree paths from root to leaves
int maxTreePathSum(Node *root, int val = 0)  
{  
    if (root == NULL) return 0;  
  
    val += root->data;  
  
    if (root->left == NULL && root->right == NULL)  
    	return val;  
  	
    return max(maxTreePathSum(root->left, val), maxTreePathSum(root->right, val));
}  

int main(){

	ifstream inputFile ("p18.txt");
	string line;
	vector<string> tokens;
	vector<Node*> lastLine;

	Node* root;

	bool firstPass = true;
	while(getline(inputFile, line)){
		boost::split(tokens, line, [](char c){return c == ' ';});

		if (firstPass){
			root = new Node(stoi(tokens[0]));
			lastLine.push_back(root);
			firstPass = false;
			continue;
		}

		vector<Node*> newLine;
		for (auto data : tokens){
			newLine.push_back(new Node(stoi(data)));
		}

		for (int i = 0; i < lastLine.size(); i++){
			lastLine[i]->left = newLine[i];
			lastLine[i]->right = newLine[i+1];
		}

		lastLine = newLine;
	}

	cout << maxTreePathSum(root) << endl;

}