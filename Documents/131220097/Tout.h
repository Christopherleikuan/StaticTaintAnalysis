#include<stdio.h>
#include<iostream>
#include<string>
#include"AST.h"
#include"tinyxml.h"
using namespace std;
class Ttable
{
public:
	Ttable();
	~Ttable();
	bool insert(VarDecl *p, int line);
	void outTtable();
	VarDecl * serach(VarDecl * p);
	

private:
	struct Node
	{
		VarDecl *Taddress;
		int line;
		string Tname;
		Node * next;
	}node;
	Node * head;
	Node* makeTnode(VarDecl * p, int line)
	{
		Node * t = new Node;
		t->Taddress = p;
		t->line = line;
		t->Tname = p->getQualifiedNameAsString;
		return t;
	}
	
};

int main()
{
	
}
