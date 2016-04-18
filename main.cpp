// Jalen Johnson
//  main.cpp
//  Fibonacci number
//
//

#include <iostream>
using namespace std; // access cout, endl
int Fibonacci_R(int n)
{
    if(n<=0) return 0;
    else if(n==1) return 1;
    else return Fibonacci_R(n-1)+Fibonacci_R(n-2);
}
int main(void)
{
    int n;
    cout << "n = ";
    cin>>n;
    for(int i=0; i<=n; ++i)
        cout << "fib(" << i << ") = " << Fibonacci_R(i) << endl;
    cout << endl;

    return 0;
}
