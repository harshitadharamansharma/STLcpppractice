#include<iostream>
#include<stdio.h>
#include<array>

using namespace std;

int main()
{
  int basic[3] = {1,2,3};

  array<int,4> a = {1,2,3,4};

  int s = a.size();
  for(int i=0; i<s;i++)
  { cout<<a[i]<<endl;}

  cout<<"2nd element"<<a.at(2)<<"\nlast element"<<a.back()<<"\nfront"<<a.front()<<endl;
  cout<<"check if its empty or not :"<<a.empty();

    for(int i=0; i<s;i++)
  { cout<<a[i]<<endl;}

//return 0;
}
     