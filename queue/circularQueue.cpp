#include<iostream>
using namespace std;

class circularQueue{
    int* arr;
    int currSize,cap;
    int f ,r ;

    public:

    circularQueue(int size){
     cap = size;
     arr =  new int(size);
     f = 0 ; r = -1;
     currSize =0 ;
    }

    void push(int val){
      if(currSize == cap){
        cout<<"overflow condition";
        return;
      }else{
        r = (r+1)%cap;
        arr[r] = val;
        currSize++;
      }
    }

    void pop(){
       if(currSize == 0){
        cout<<"CQ is empty";
        return ;
       }else{
        f = (f+1) % cap;
        currSize--;
       }
    }

    int front(){
      if(currSize == 0){
        return -1;
      }
       return arr[f];
    }

    bool empty(){
      return currSize == 0;
    }
};

int main(){

    circularQueue cq(3) ;
    cq.push(1);
    cq.push(2);
    cq.push(4);
    

    for(int i =0 ; i <3 ; i++){
        cout<<cq.front()<<" ";
        cq.pop();
    }
    return 0;
    
}
