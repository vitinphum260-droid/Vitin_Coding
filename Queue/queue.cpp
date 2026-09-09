#include <iostream>
#include <queue>
using namespace std;
void PrintQueue(queue<int> q){
    while (!q.empty()){ // check q is not empty -> true
        cout << q.front() << " ";
        q.pop(); // remove element of queue from the front 
    }
    cout <<endl;
}

int main(){
    queue<int> q;
    q.push(3); // function for add element 
    q.push(4);
    q.push(5);
    cout <<"Front: "<< q.front() <<endl;
    cout <<"Back: "<<  q.back() <<endl;
    cout <<"Size: "<< q.size() <<endl;

    // Deleting elements from the front of the queue
    //q.pop(); // remove element of queue from the front 
    cout <<"My Queue: "<<endl;
    PrintQueue(q);
    return 0;
}