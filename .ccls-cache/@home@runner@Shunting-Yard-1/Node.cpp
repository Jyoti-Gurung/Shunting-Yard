//Author: Nathan Zou
//Date: 1/13/22
//For use by the person who is using this code for Linked Lists part 2

#include <iostream>
#include <cstring>

#include "Node.h"

using namespace std;

//Constructor
Node::Node() {
  int data;
  Node *link;
}

//Destructor
Node::~Node() {

}

//Stack Functions
void push(int input) {
  Node *ptr = new Node();
  ptr->data = value;
  ptr->link = top;
  top = ptr;
}

void pop() {
  bool isEmpty() {
    if (top = NULL) {
      return true;
    }
    else {
      return false;
    }
  }

  if (!isEmpty()) {
    Node *ptr = top;
    top = top -> link;
    delete(ptr);
  }
}

void peek() {
  bool isEmpty() {
    if (top = NULL) {
      return true;
    }
    else {
      return false;
    }
  }

  if (!isEmpty()) {
    cout << "Data at Top: " << top->data;
  }
}