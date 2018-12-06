#include"linklist.h"
Linklist::Linklist()
	{
		head = NULL;
	}
void Linklist::insertatstart(Complex data)
	{
		node *p = new node;
		p->value = data;
		p->nextptr = head;
		head = p;
	}
void Linklist::deleteatstart()
	{
		node* temp;
		temp = head->nextptr;
		delete head;
		head = temp;
		temp = NULL;
	}
void Linklist::deleteatend()
	{
		node* current = head;
		node* previous = NULL;
		while (current->nextptr != NULL)
		{
			previous = current;
			current = current->nextptr;
		}
		delete current;
		previous->nextptr = NULL;
	}
void Linklist::traverse()
	{
		node*temp = head;
		while (temp != NULL)
		{


			cout << temp->value;
			temp = temp->nextptr;
		}
	}
	void Linklist::deleteatposition(int x)
	{
		node* next = NULL;
		node* current = head;
		node* previous = NULL;
		for (int i = 1; i<x; i++)
		{
			previous = current;
			current = current->nextptr;
			next = current->nextptr;
		}
		delete current;
		previous->nextptr = next;
		current = NULL;
	}
	void Linklist::insertatposition(int pos, Complex data)
	{
		node* current = head;
		node* previous = NULL;
		for (int i = 1; i<pos; i++)
		{
			previous = current;
			current = current->nextptr;
		}
		node* p = new node;
		p->value = data;
		previous->nextptr = p;
		p->nextptr = current;
	}
	void Linklist::insertatend(Complex data)
	{
		node* current = head;
		while (current->nextptr != NULL)
		{

			current = current->nextptr;
		}
		node* p = new node;
		p->value = data;
		p->nextptr = NULL;
		current->nextptr = p;

	}