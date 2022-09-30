#include<iostream>
#include<queue>

using namespace std;
int main()
{
    

queue <string> s;

s.push("aa");
s.push("ba");
s.push("ca");
s.push("da");
s.push("ea");

cout<<"size before pop: "<<s.size();

//cout<<"\npopped element is: "<< s.pop();
//above line is showing error; you know why...
s.pop();

cout<<"\nsize after pop: "<<s.size();

/*
for(int i:s)
    cout<<i<<" ";
cout<<endl;
*/

// hence niot possiblr to traversr like this

/*
for(int i:s)
    cout<<s.first()<<" ";
cout<<endl;
*/
//experiment with this
}

//complexity O(1)