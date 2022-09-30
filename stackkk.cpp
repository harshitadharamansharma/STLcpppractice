#include<iostream>
#include<stack>

using namespace std;

int main()

{
    stack<int> s;

    // normal push pop

    s.push(5);
    s.push(50);
    s.push(500);
    s.push(5000);
    s.push(50000);
    s.push(500000);
    s.push(500008);
    s.push(589089);
    s.push(599);

    cout<<"\nsize of the stack before pop: "<<s.size()<<endl;
    //cout<<"\nlenght of the stack before pop: "<<mblen(s)<<endl;
   /*
C:/mingw/mingw32/i686-w64-mingw32/include/stdlib.h:425:33: note:   initializing argument 1 of 'int mblen(const char*, size_t)'
   int __cdecl mblen(const char *_Ch,size_t _MaxCount); 
*/
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    
    cout<<"\nsize of the stack after popping 6 times :"<<s.size()<<endl;

  //  for(int j : s)
   //     cout<<j<<" ";
   // cout<<endl;
    
    /* we can't traverse a stack we need to do:-
    https://www.techiedelight.com/traverse-a-stack-in-cpp/  
    
      std::stack<int> stk_copy(stk);
    while(!stk_copy.empty()) {
        std::cout << stk_copy.top() << std::endl;
        stk_copy.pop();
    }

    */
    
    
    
    cout<<"printing top element--->"<<s.top();
    cout<<"\nprinting 2nd top element--->"<<s.top()+1;
    cout<<"\nsize of the stack :"<<s.size()<<endl;
    cout<<"\n empty or not: "<<s.empty(); // 0--> not empty
}