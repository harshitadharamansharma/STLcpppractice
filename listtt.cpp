// list stl is implemented using doubly linked list
// has 2 pointers for front and one for back
// can't access direclty using at() we need to traverse to the element which we want to access;

#include<iostream>
#include<list>

using namespace std;

int main()

{
   list <int> l;
   list<int> n(5,100);

   for(int i:n)
      cout<<i<<" ";
   cout<<endl;

   l.push_back(1);
   l.push_front(2);

   for(int i:l)
        cout<<i<<" ";
    cout<<endl;

    l.erase(l.begin());
    cout<<"after erase"<<endl;

//Time Complexity: O(1)
//Auxiliary Space: O(1)

    for(int i:l)
        cout<<i<<" ";
    //cout<<i<<" "
    cout<<endl;

    cout<<"\n size of list: "<<l.size()<<endl;
    cout<<"maxsize of list: "<<l.max_size()<<endl;
    //https://www.geeksforgeeks.org/list-max_size-function-in-c-stl/


}

/* output

2 1 
after erase
1

 size of list: 1
maxsize of list: 357913941

*/
