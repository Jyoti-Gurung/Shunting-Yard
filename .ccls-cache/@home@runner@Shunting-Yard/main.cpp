/*
Author: Jyoti Gurung
Date: 2/11/22
Project: Build a Stack & Queue using a Linked List, and a Shunting Yard Algorithm and Binary Tree (output in the prefix, postfix, and infix notations)
*/

#include <iostream>
#include "Node.h"

using namespace std;

/*
struct Node {
  int data;
  Node *link;
};
*/

Node *top = NULL;

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

int main() {
  push(1);
  push(2);
  pop();
  peek();
}