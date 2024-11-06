// Print Numbers 1 to N
// Write a program to input an integer N and print all numbers from 1 to N using a while loop.
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter number: ";
    cin>>N;
    int i=1;
    while(i<N){
        cout<<i;
        i++;
    }

    return 0;
}
