//Sum of First N Numbers
//Write a program that takes an integer N as input and calculates the sum of the first N natural numbers (1 + 2 + ... + N) using a while loop.

#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter number: ";
    cin>>N;
    int i=0;
    int sum=0;
    while(i<N){
        i++;
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}