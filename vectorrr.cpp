#include<iostream>
#include<vector>
using namespace std;
// you need to use using namespace std if you are usiong stl; otherwise it  will show error ; it will not recognize your stl
int main()
{
    std::cout<<"Hello World!\n";
    vector<int> v;
    vector<int> a(5,1);
  

    for(int i:a)
        cout<<i<<" ";
    cout<<endl;

    vector<int> l(a);
   for(int i:l)
        cout<<i<<" ";
    cout<<endl;
    cout<<"\ncheckuiing caPACITY AND SIZE OF VECTOR V AFTER EVERY OPERATION\n";    
    std::cout<<"capacity->"<<v.capacity()<<endl;
    std::cout<<"size->"<<v.size()<<endl;
    //cout<<"size->"
    //std::cout<<
    v.push_back(1);
    std::cout<<"capacity->"<<v.capacity()<<endl;
    std::cout<<"size->"<<v.size()<<endl;


    v.push_back(5);
    std::cout<<"capacity->"<<v.capacity()<<endl;
    std::cout<<"size->"<<v.size()<<endl;
    // it has at, front, back,pop_back()-> pop s last element functions
    //#size = no. of elements
    //#capacity = space assigned for some elements 

    
    v.push_back(50);
    std::cout<<"capacity->"<<v.capacity()<<endl;
    std::cout<<"size->"<<v.size()<<endl;

     v.pop_back();
    std::cout<<"/nAfter performing pop_back"<<endl;
    std::cout<<"capacity->"<<v.capacity()<<endl;
    std::cout<<"size->"<<v.size()<<endl;


    for(int i:v)
        cout<<i<<" ";
    cout<<endl;
    cout<<"jai hind";

    v.clear();
    cout<<"\n size and capacity after clear():"<< v.size() <<"\n"<<v.capacity();


    

}


//to do :- know the using namespace logic; know the return 0 for main()
//iterator:- starting iterator og the vector:-  .begin()
