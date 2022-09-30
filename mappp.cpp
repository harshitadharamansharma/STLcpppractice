// fata is stored as a key value
// all the keys are unique and points to only one value
// more than two can point same no. but same key can't point more than one;
// but sdame key ca
// like set relation; function----- in set theory


#include<iostream>
#include<map>

using namespace std;
 
int main()
{
    map<int,string> m;

    m[1] = "haha";
    m[14] = "hah0";
    m[11] = "haho";
    m[12] = "haohao";
    m[111] = "h0hi se";

// unordered mapping ---> printing sequence random

    m.insert(  {6,"banana"});

    cout<<"before erase:"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

     cout<<"finding 12--->"<<m.count(12)<<endl; 
     //cout<<"finding banana--->"<<m.count("banana")<<endl; 

    m.erase(12);
    cout<<"\nafter erase:"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }




// insert; erase, find, count in the case of map--->O(log n)
// bcz in this case the implementation is --->  red and black tree or balance tree 
// unordered ---> hash table ---> searching complexity---> O(1)

auto it = m.find(5);

for(auto i = it; i != m.end(); i++)
{
    cout<<(*i).first<<endl;

}
}
// 