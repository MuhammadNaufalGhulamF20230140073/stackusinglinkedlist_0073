#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }    
};

class Stack {
    private:
    Node* top; // Pointer to the top node of the stack

public:
    Stack() {
        top = NULL; // Initialize the stack with a null top pointer

    } 

     int push(int value) {
         Node* newNode = new Node();
          newNode->data = value;
          newNode->next = top;
          top = newNode;
          cout << "Push value: " << value << endl;
        return value;
    } 

     void pop(){
