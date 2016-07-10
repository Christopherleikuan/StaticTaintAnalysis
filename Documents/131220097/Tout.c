#include"Tout.h"
Ttable::Ttable()
{
	VarDecl *p = NULL;
	int line = -1;
	makeTnode(p, line);
}

Ttable::~Ttable()
{
	Node*p = NULL;
	while (p == head)
	{
		p = head;
		while (p != NULL)
		{

			p = p->next;
		}
		delete p;
	}
}
void Ttable::outTtable()
{

}
bool Ttable::insert(VarDecl*p, int line)
{
	Node *t = makeTnode(p, line);
	if (head == NULL)
	{
		head = t;
		head->next = NULL;
	}
	else
	{
		t->next = head->next;
		head->next = t;


	}
}

