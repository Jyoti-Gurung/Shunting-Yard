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

//Queue Variables & Functions
Node *front = NULL;
Node *rear = NULL;

bool isQueueEmpty() {
  if (front == NULL && rear == NULL) {
    return true;
  }
  else {
    return false;
  }
}
void enqueue(int value);
void dequeue();
void showQueueFront();
void displayQueueWhole();

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

//Queue Functions
void enqueue(int value) {
  Node *ptr = new Node();
  ptr->data = value;
  ptr->link = NULL;

  if (front == NULL) {
    front = ptr;
    rear = ptr;
  }
  else {
    rear->link = ptr;
    rear = ptr;
  }
}

void dequeue() {
  if (isQueueEmpty()) {
    cout << "Queue Empty";
  }
  else {
    if (front == rear) {
      free(front);
      front = rear = NULL;
    }
    else {
      Node *ptr = front;
      front = front -> link;
      free(ptr);
    }
  }
}

void showQueueFront() {
  if (isQueueEmpty()) {
    cout << "Queue Empty";
  }
  else {
    cout << front->data;
  }
}

void displayQueueWhole() {
  if (isQueueEmpty()) {
    cout << "Queue Empty";
  }
  else {
    Node *ptr = front;
    while (ptr != NULL) {
      cout << ptr-> data << " ";
      ptr = ptr->link;
    }
  }
}