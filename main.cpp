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
void push(int value); //add to stack
void pop(); //delete latest addition
void peek(); //view latest addition

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
void enqueue(int value); //add to queue
void dequeue(); //delete oldest queue
void showQueueBack(); //show the oldest queue
void displayQueueWhole(); //loop through entire queue

int main() {
  enqueue(10);
  enqueue(15);
  enqueue(20);
  displayQueueWhole();
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
    cout << endl << "Stack Empty";
  else
    {
      Node *ptr = top;
      top = top -> link;
      delete(ptr);
    }
}

void peek() {
  if (top == NULL)
    cout << endl << "Stack Empty";
  else
    {
    cout << endl << "Stack at top: " << top->data;
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

void showQueueBack() {
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

/*Citations
stack: https://www.youtube.com/watch?v=TCmkquGrmDQ
queue: https://www.youtube.com/watch?v=Anq11tezBSM
*/