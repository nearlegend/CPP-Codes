#include <iostream>
#include <algorithm>
#include <math.h>
#include<stack>
using namespace std;

void solve(stack<int>&a, int count, int size) {
    //base cas
    if(count == size/2) {
        cout<<"d"
;        a.pop();
        return ;
    }

    cout<<"D";
    int num = a.top();
    cout<<num;

    a.pop();
    
	//RECURSIVE CALL
    solve(a, count+1, size);
    
    a.push(num);
    
    
}
void mysolve(stack<int>&a, int count, int size)
{
    stack<int>d;
    count=size/2;
    
    while(count!=0)
    {
        d.push(a.top());
        a.pop();
        
        count--;
    }
  a.pop();
    while(!d.empty())
    {
        a.push(d.top());
        d.pop();
    }
}

void deleteMiddle(stack<int>&a, int N){
	
  	int count = 0;
    
    mysolve(a, count, N);
   
}

int main(){
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    
     deleteMiddle(a,a.size());
     cout<<" after";
    while(!a.empty())
    {
        cout<<a.top()<<" ";
        a.pop();
    }
    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a.top()<<" ";
    //     a.pop();
    // }

 
 
return 0;
}