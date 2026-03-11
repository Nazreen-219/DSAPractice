#include<iostream>
using namespace std;

class Node{
    public :
     int data;
     Node* next; //next pointer will store address of next node
     
     Node(int val){
        data = val;
        next = NULL;
     }


};
 //this is an individual node class - class ki object1 - node1 , obj2 - node2 .. and so on
// another class 

class List {
    Node* head;
    Node* tail;
     
    public:
    List(){
        head = tail = NULL;
    }
   
    void push_front(int val){
        Node* newNode = new  Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head; //newNode pointer ki next property usko head assign krdo
            head = newNode;
        }

    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = NULL;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_back(){
       Node* temp ;
       while(temp->next != tail){
         temp = temp->next;
       }

       temp-> next = NULL;
       delete tail;
       tail = temp;
     }
     void pop_front(){
        Node* temp ;
        temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
     }
    void printll(){
     Node* temp = head;

    while(temp!= NULL){
    cout<<temp-> data <<endl;
    temp = temp->next;
    } 
    
    }

    void insert(int val , int pos){ //considering pos >0
        Node* temp;
        Node* newNode = new Node(val);
        for(int i = 0 ; i<pos-1 ; i++){
            temp = temp-> next;
        }

        newNode-> next = temp-> next;
        temp-> next = newNode;
    }
   
};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    
    ll.insert(4 , 1);
    ll.printll();
    return 0;
}


      