#ifndef NODE_H
#define NODE_H

using namespace std;

class Node {
  public:
    Node();
    ~Node();
    //Stack Functions
    void push(int input);
    void pop();
    void peek();

    //Queue Functions
    void enqueue();
    void dequeue();

  private:
    //Variables
    int data;
    Node *link;

};

#endif