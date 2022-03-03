/*
Author: Jyoti Gurung
Date: 2/11/22
Project: Build a Stack & Queue using a Linked List, and a Shunting Yard Algorithm and Binary Tree (output in the prefix, postfix, and infix notations)
*/

#include <iostream>
#include "Node.h"

using namespace std;

//Node Builder w/ struct
/*
struct Node {
  int data;
  Node *link;
};
*/

//Stack Variables & Functions
Node *top = NULL;
void push(int value);
void pop();
void peek();

int main() {
  push(1);
  push(2);
  pop();
  peek();
}

//Stack Functions
void push (int value) {
  Node *ptr = new Node();
  ptr->data = value;
  ptr->link = top;
  top = ptr;
}

void pop() {
  if (top == NULL)
    cout << "Stack Empty";
  else
    {
      Node *ptr = top;
      top = top -> link;
      delete(ptr);
    }
}

void peek() {
  if (top == NULL)
    cout << "Stack Empty";
  else
    {
    cout << "Stack at top: " << top->data;
    }
}