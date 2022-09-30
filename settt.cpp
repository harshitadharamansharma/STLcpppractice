//all the element are unique
// implementation:- bst 
// only inout or delete no modification
// return in sorted order
// set is slower than unordered set

//unordered set:- lements are in random way; not sorted


#include<iostream>
#include<set>

using namespace std;
int main()
{
    set<int> s;

    s.insert(5);
    
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);


    
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(6);
    s.insert(1);


    for(auto i:s)
    //know auto
    {
        cout<<i<<endl;
    }

    set<int>::iterator it = s.begin();
    it++;
    cout<<endl;
    
    s.erase(it);

    for(auto i:s)
    //know auto
    {
        cout<<i<<endl;
    }
    cout<<endl;


    cout<<"no. of times -5 present or not->"<<s.count(-5)<<endl;
    cout<<"no. of times 5 present or not->"<<s.count(5)<<endl;

    set<int>::iterator itr = s.find(5);
    //find():-when it gets the element it retutrns the iterator
    // response of find() is the reference for itr
    cout<<"value present at itr-> "<<*it<<endl;
   
    for(auto it = itr; it!=s.end();it++ )
    {
        cout<<*it<<" ";
    }cout<<endl;

} 


//empty 
//   insert find erase count ---> O(log n)
// size begin end empty  ---> O(1)