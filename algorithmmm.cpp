#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()

{

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6-->"<<binary_search(v.begin(),v.end(),6)<<endl;
//yes /no
// and can also get the iterator as:-
    cout<<"lower bound-->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound-->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
 cout<<"upperr bound-->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

// max and min out of two no.
// swap()
// reverse string
string aa="fghjfghj";
reverse(aa.begin(),aa.end());
cout<<"string->"<<aa<<endl;

//rotate start,en
rotate(v.begin(),v.begin()+1,v.end());
cout<<"after rotate"<<endl;
for(int i:v)
    cout<<i<<" ";
cout<<endl;
//sort ---> based on intro sort ---> combination of 3 sorts 1. quick 2. heap 3.insertion
sort(v.begin(),v.end());
for(int i:v)
    cout<<i<<" ";


}