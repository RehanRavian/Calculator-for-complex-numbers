#include<iostream>
#include"linklist.cpp"
using namespace std;

void main()
{
 Complex A1(-3, 5);
 Complex A2(-3, -3);
 Complex A3(-4, 3);
 Complex Add = (A1 + A3);
 Complex Sub = (A1 - A3);
 Complex Mult = (A2 * A3);
 Linklist list;
 list.insertatstart(A3);
 list.insertatstart(A2);
 list.insertatstart(A1);
 list.traverse();
 cout << "Adding 1 and 2\n";
 list.insertatstart(A1+A2);
 list.traverse();
 cout << "Subtracting 3 from 1 storing result at last\n";
 list.insertatend(A1 - A3);
 list.traverse();
 cout << "Multiplying 2 with 1 storing result at last \n";
 list.insertatend(A2*A3);
 list.traverse();
 cout << "Deleting at position 4";
 list.deleteatposition(4);
 cout << "Dividing 1 by 3\n";
 list.insertatstart(A1 / A3);
 list.traverse();
 system("pause"); 
 
}