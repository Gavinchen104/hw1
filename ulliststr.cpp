#include <cstddef>
#include <stdexcept>
#include "ulliststr.h"
#include <iostream>
ULListStr::ULListStr()
{
  head_ = NULL;
  tail_ = NULL;
  size_ = 0;
}

ULListStr::~ULListStr()
{
  clear();
}

bool ULListStr::empty() const
{
  return size_ == 0;
}

size_t ULListStr::size() const
{
  return size_;
}

// WRITE YOUR CODE HERE
/**
   * Adds a new value to the back of the list
   *   - MUST RUN in O(1)
   */
void ULListStr:: push_back(const std::string& val){
  
  if(empty()){
    //create a new Item
    Item *newitem1 = new Item;
    newitem1->prev = NULL;
    newitem1->next = NULL;
    newitem1->first = 0;
    newitem1->last = 0;
    newitem1->val[newitem1->first] = val;
    newitem1->last++;
    head_ = newitem1;
    tail_ = newitem1;
  }
  else{
    if(tail_->last==ARRSIZE){
      //create new Item 
      Item *newitem2 = new Item;
      newitem2->prev = tail_;
      tail_->next = newitem2;
      newitem2->next = NULL;
      newitem2->first = 0;
      newitem2->last = 0;
      newitem2->val[0] = val;
      newitem2->last ++;
      tail_ = newitem2;
    }
    else{
      tail_->val[tail_->last] = val;
      tail_->last++;
    }
  }
  size_++;
}

void ULListStr::push_front(const std::string& val){
  if(empty()){
    //create a new Item
    Item *newitem = new Item;
    newitem->prev = NULL;
    newitem->next = NULL;
    newitem->first = ARRSIZE-1;
    newitem->last = ARRSIZE;
    newitem->val[newitem->first] = val;
    head_ = newitem;
    tail_ = newitem;
    
  }
  else{
    if(head_->first==0){
      //create new Item 
      Item *newitem = new Item;
      newitem->prev = NULL;
      newitem->next = head_;
			head_->prev = newitem;
      newitem->first =ARRSIZE;
      newitem->last = ARRSIZE;
      newitem->val[newitem->first-1] = val;
      newitem->first--;
      head_ = newitem;
			
    
    }
    else{
      head_->val[head_->first-1] = val;
      head_->first--;
    }
  }
  size_++;
}

void ULListStr::pop_back(){
  if(!empty()){
		
    if(tail_->last == 1 ){
			
      Item *temp = tail_;
      tail_ = temp->prev;
			delete temp;			
      size_--;		
			return;
    }
    else{
			
      tail_->last--;
      tail_->val[tail_->last] = '\0';
      size_--;
			return;
    }
  }
	return;
}

void ULListStr::pop_front(){
  if(!empty()){
    if((head_->last - head_->first) == 1){
      Item *temp = head_;
      head_ = temp->next;
      delete temp;
      size_--;
    }
    else{
      head_->val[head_->first] = '\0';
			 head_->first ++;
      size_--;
    }
  }
}

std::string const & ULListStr::back() const{
	std::string* ptr = getValAtLoc(size_-1);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

std::string const & ULListStr::front() const{
	std::string* ptr = getValAtLoc(0);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}
/** 
   * Returns a pointer to the item at index, loc,
   *  if loc is valid and NULL otherwise
   *   - MUST RUN in O(n) 
   */
std::string* ULListStr::getValAtLoc(size_t loc) const{
	if(loc < size_){
    Item *temp1 = head_;
		while((temp1->last - temp1->first) <= loc){
      loc -= temp1->last - temp1->first;
      temp1 = temp1->next;
		}
    return &temp1->val[temp1->first + loc];	
	}
	
	else {
		return NULL;
	}
}


void ULListStr::set(size_t loc, const std::string& val)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  *ptr = val;
}


std::string& ULListStr::get(size_t loc)
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

std::string const & ULListStr::get(size_t loc) const
{
  std::string* ptr = getValAtLoc(loc);
  if(ptr == NULL){
    throw std::invalid_argument("Bad location");
  }
  return *ptr;
}

void ULListStr::clear()
{
  while(head_ != NULL){
    Item *temp = head_->next;
    delete head_;
    head_ = temp;
  }
  tail_ = NULL;
  size_ = 0;
}
