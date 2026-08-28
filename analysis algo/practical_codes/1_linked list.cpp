#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class List {
    Node* head;
    Node* tail;
    
public:
    List() {
        head = tail = nullptr;
    }
~List() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* nextNode = temp->next; // Save the next node
            delete temp;                 // Delete the current node
            temp = nextNode;             // Move to the next node
        }
    }
    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
            return;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if (head == nullptr) {
            cout << "this is the null linked list" << endl;
            return;
        } else {
            Node* temp = head;
            head = head->next;
            if (head == nullptr) tail = nullptr;  // List now empty
            delete temp;
        }
    }

    void pop_back() {
        if (head == nullptr) {
            cout << "your list is empty" << endl;
            return;
        }
        if (head == tail) {  // Single node
            delete head;
            head = tail = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = nullptr;
    }

    void insert(int val, int pos) {
        if (pos < 0) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 0) {
            push_front(val);
            return;
        }
        Node* temp = head;
        for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position too large" << endl;
            return;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        if (newNode->next == nullptr) tail = newNode;  // Inserted at end
    }
    int search (int key){
        Node*temp=head;
        int idx=0; 
        while(temp!=nullptr){
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }

    void printll() {
        Node* temp = head;
        while (temp !=nullptr) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_back(5);
    ll.pop_front();
    ll.pop_back();   
    ll.insert(23, 0);
    ll.printll();
    cout<<ll.search(2)<<endl;
    return 0;
}
