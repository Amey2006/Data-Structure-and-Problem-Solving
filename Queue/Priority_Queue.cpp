#include<iostream>
#include<queue>
using namespace std;
int main()
{
    /*
    priority_queue<int> pq;// By default it is MAX - HEAP
    pq.push(10);
    pq.push(0);
    pq.push(100);
    pq.push(70);
    pq.push(55);
    cout<<"Poped element : "<<pq.top()<<endl;
    pq.pop();
    cout<<"Topmost Element : "<<pq.top()<<endl;
    cout<<"Size of pq : "<<pq.size()<<endl;
    cout<<"is pq empty  ? ->  "<<(pq.empty() ? "Yes":"No");\
    */
   //Implementing min heap 
   priority_queue<int, vector<int>,greater<int>> minheap;
   
   minheap.push(10);
   minheap.push(101);
   minheap.push(70);
   minheap.push(18);
   minheap.push(108);

    cout<<"Returning smallest element : "<<minheap.top();


    return 0;
}