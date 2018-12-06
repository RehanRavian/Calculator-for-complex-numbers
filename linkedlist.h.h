#include<iostream>
#include"complex.cpp"
using namespace std;


struct node
{

	Complex value;
	node*nextptr;
};
class Linklist
{
private:
	node* head;
public:
	Linklist();
	void insertatstart(Complex data);
	void deleteatstart();
	void deleteatend();
	void traverse();
	void deleteatposition(int x);
	void insertatposition(int pos, Complex data);
	void insertatend(Complex data);
};
