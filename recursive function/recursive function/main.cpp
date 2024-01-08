//
//  main.cpp
//  recursive function
//
//  Created by Nisha Ramprasath on 4/11/23.
//

#include<iostream>
using namespace std;
    
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}
    
int main()
{
    int x=5;
    fun(x);
        
}
    
