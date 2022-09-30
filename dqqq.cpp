// can do insertion and deletion from both the ends pronnouncrr:- dq, dec, doubly ended queue random access using at operator

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(5);
    cout<<"*******************Print First Index Element---> "<<d.at(0)<<endl;
    for (int i : d)
        cout << i << " ";
    cout << endl;
   //d.pop_front();

   //at;front; back; empty;a.erase(from,to)
    d.push_front(9);
    d.push_front(8);
    //d.erase(d.begin());
    //d.erase(d.begin(),d.begin()+1);

     for (int i : d)
        cout << i << " ";
    cout << endl;
    
    //cout<<"\nd.begin()="<<d.begin()<<"\n"//<<"\nd.begin()+1="<<d.begin()+1<<endl;
    //cout<<int(d.begin());
    //rbegin()--->	Returns a reverse iterator which points to the last element of the deque (i.e., its reverse beginning)
    //cbegin() ,, begin()--->   https://www.geeksforgeeks.org/deque-cpp-stl/
    // refer the table

    d.erase(d.begin(),d.begin()+2);
    cout<<"after erase size of dequeue is:"<<d.size()<<endl;


    
    for (int i : d)
        cout << i << " ";
}
// size:-after erasing all the element is 0 
//and 
// maxsize:- remains same as it was at the begining