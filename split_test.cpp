#include "split.h"
#include <iostream>

using namespace std;

<<<<<<< HEAD
int main()
{
	Node in(1,2,3,);
	Node odds();
	Node evens();

=======
void output(Node* in){
  if(in == NULL){
		return;
	}
  else{
    cout << in->value <<" ";
    output(in->next);
  }
 
 }
 

int main()
{
	Node *in = new Node(3,NULL);
	Node *temp = in;
	Node *m1 = new Node(2, NULL);
	Node *m2 = new Node(1, NULL);
	Node *m3 = new Node(4, NULL);
	Node *odds = NULL;
	Node *even = NULL;
	temp->next = m1;
	m1->next = m2;
	m2->next = m3;
	split(temp, odds, even);
	
	output(odds);
	output(even);
	output(in);

	delete in;
	delete m1;
	delete m2;
	delete m3;
>>>>>>> 24ca04ed62b60177cca76e5e3b0de220279e1d18
}