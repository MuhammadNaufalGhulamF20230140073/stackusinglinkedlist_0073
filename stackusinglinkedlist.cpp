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
          if (isEmpty()) {
            cout << "Stack is empty. " << endl;
        }

        cout << "Popped value: " << top->data << endl;
        top = top->next; // Update the top pointer to the next node

    }

  void peek() {
      if (top == NULL) {
            cout << "List is Empty. " << endl;
        }
          else {
            Node* current = top;
            while (current != NULL) {
                cout << current->data << "" << endl;
                current = current->next;
            }
            cout << endl;
        } // return the value of the top node
    }
    
     bool isEmpty() {
        return top == NULL; // Return true if the top pointer is NULL, indicating an Empty stack

    }      
};

int main() {
    Stack stack;