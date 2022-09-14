/* Write your test code for the ULListStr in this file */

#include <iostream>
#include "ulliststr.h"

using namespace std;


int main(int argc, char** argv)
{
	ULListStr list;
	size_t n;

	//push_back;
	cout <<"push_back"<< endl;

	//for empty;
	cout << "for empty" << endl;

	list.push_back("1");
	cout<< "correct output: 1"<< endl;
	cout<< "output: "<< list.get(0)<< endl;
	list.clear();


	//for one item;
	cout << "for one item" << endl;

	for(size_t i =0; i< 2; i++){
		list.push_back(to_string(1+i));
	}
	cout<< "correct output: 1 2"<< endl;
	cout<< "output: ";
	for(size_t i =0; i< 2; i++){
		cout<< list.get(i)<< " ";
	}
	cout << endl;
	list.clear();

	//for more than one item;
	cout << "for more than one item"<< endl;

	for(size_t i =0; i< 20; i++){
		list.push_back(to_string(1+i));
	}
	cout<< "correct output: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"<< endl;
	cout<< "output: ";
	for(size_t i =0; i< 20; i++){
		cout<< list.get(i)<< " ";
	}
	cout << endl;
	list.clear();



	//push_front;
	cout << "push_front" << endl;

	//for empty;
	cout << "for empty" << endl;

	list.push_front("1");
	cout<< "correct output: 1"<< endl;
	cout<< "output: "<< list.get(0)<< endl;
	list.clear();


	//for one item;
	cout << "for one item" << endl;

	for(size_t i =0; i< 2; i++){
		list.push_front(to_string(1+i));
	}
	cout<< "correct output: 2 1"<< endl;
	cout<< "output: ";
	for(size_t i =0; i< 2; i++){
		cout<< list.get(i)<< " ";
	}
	cout << endl;
	list.clear();

	//for more than one item;
	cout << "for more than one item"<< endl;

	for(size_t i =0; i< 20; i++){
		list.push_front(to_string(1+i));
	}
	cout<< "correct output: 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1"<< endl;
	cout<< "output: ";
	for(size_t i =0; i< 20; i++){
		cout<< list.get(i)<< " ";
	}
	cout << endl;
	list.clear();

	//combination of push_back and push_front;
	cout << "combination of push_back and push_front" << endl;


	for(size_t i = 0; i < 11; i +=2){
		list.push_back(to_string(1+i));
	}
	for(size_t i = 1; i < 11; i +=2){
		list.push_front(to_string(1+i));
	}
	cout << "correct output: 10 8 6 4 2 1 3 5 7 9 11"<< endl;
	cout <<"output";
	for(size_t i =0; i< 11; i++){
		cout<< list.get(i)<< " ";
	}
	cout << endl;
	list.clear();

	//pop_back
	cout<< "pop_back" << endl;

	for(size_t i = 0; i < ARRSIZE+5; i++){
  list.push_front(to_string(i));
	}
	cout << "the list:";
	for(size_t i = 0; i < list.size();i++){
  	cout << list.get(i) << " ";
 	}
	cout << endl;

	cout << "after 1 pop: ";
	list.pop_back();
	for(size_t i = 0; i < list.size();i++){
  	cout << list.get(i) << " ";
 	}
	cout << endl;

	cout << "test to see if pop_back can clear the list"<< endl;
	n= list.size();
	for(size_t i =0; i <n; i++){
		list.pop_back();
	}
	if(list.empty()){
		cout << "empty"<< endl;
	}
	else{
		cout << "not empty" << endl;
	}




	//pop_front
	cout<< "pop_front" << endl;

	for(size_t i = 0; i < ARRSIZE+5; i++){
  list.push_front(to_string(i));
	}
	cout << "the list:";
	for(size_t i = 0; i < list.size();i++){
  	cout << list.get(i) << " ";
 	}
	cout << endl;

	cout << "after 1 pop: ";
	list.pop_front();
	for(size_t i = 0; i < list.size();i++){
  	cout << list.get(i) << " ";
 	}
	cout << endl;

	cout << "test to see if pop_front can clear the list"<< endl;
	n= list.size();
	for(size_t i =0; i <n; i++){
		list.pop_front();
	}
	if(list.empty()){
		cout << "empty"<< endl;
	}
	else{
		cout << "not empty" << endl;
	}

	//back() and front();
	for(size_t i = 0; i < ARRSIZE+4; i++){
  	list.push_front(to_string(i)); 
 	}	
 	for(size_t i = 0; i < list.size();i++){
  	cout << list.get(i) << " ";
 	}
	cout << endl;
	cout << "front is: "<<list.front() << endl;
	cout << "back is:"<<list.back() << endl;


  return 0;
}


