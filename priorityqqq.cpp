//it is implemented as a heap B

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    //max - heap
    priority_queue<int> maxi;

    //min - heap
    priority_queue<int, vector<int> , greater<int>> mini;
    //know the logic behind this

    cout<<" size of maxi before any pop or push:"<<maxi.size()<<endl;
    maxi.push(10);
    maxi.push(6);
    maxi.push(7);
    maxi.push(8);
    maxi.push(0);

    cout<<" size of maxi after pushing 10,6,7,8,0:"<<maxi.size()<<endl;
    //cout<<""
//    for(int i=0; i<maxi.size(); i++)
    int M = maxi.size();
    for(int i=0; i<M; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    



    //________

    cout<<" size of maxi before any pop or push:"<<mini.size()<<endl;
    mini.push(10);
    mini.push(6);
    mini.push(7);
    mini.push(8);
    mini.push(0);

    cout<<" size of maxi after pushing 10,6,7,8,0:"<<mini.size()<<endl;
    //cout<<""
//    for(int i=0; i<maxi.size(); i++)
    int N = mini.size();
    for(int i=0; i<N; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;


    cout<<"\n Are you Empty? tell me: "<<mini.empty()<<"\n hence you are... good!!"<<endl;

}