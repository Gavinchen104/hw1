/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"
<<<<<<< HEAD
=======
#include <cstddef>
>>>>>>> 24ca04ed62b60177cca76e5e3b0de220279e1d18

/* Add a prototype for a helper function here if you need */

void split(Node*& in, Node*& odds, Node*& evens)
{
  /* Add code here */
// WRITE YOUR CODE HERE
		if(in != NULL){
			if(in->value % 2 ==1){
				odds = in;
<<<<<<< HEAD
				Node *temp = new Node;
				temp = in;
				in = NULL;
				odds = odds->next;
				temp = in->next;
				return split(temp, odds, evens);
			}
			else {
				evens = in;
				evens = evens->next;
				in = in->next;
				return split(in, oods, evens);
			}
		}
		else{
=======
				// Node *temp = new Node;
				// temp = in;
				in = in->next;
				odds = odds->next;
				// delete temp;
				return split(in, odds, evens);
			}
			else {
				evens = in;
				// Node *temp2 = new Node;
				// temp2 = in;
				in = in->next;
				evens = evens->next;
				// delete temp2;
				return split(in, odds, evens);
			}
		}
		else{
			if(odds != NULL){
				odds->next = NULL;
			}
			if(evens !=NULL){
				evens->next = NULL;
			}
>>>>>>> 24ca04ed62b60177cca76e5e3b0de220279e1d18
			return;
		}

}

/* If you needed a helper function, write it here */

// WRITE YOUR CODE HERE