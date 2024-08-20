//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include<iostream>
using namespace std;
void geeks()
{
    int var = 70;
    int* ptr;
    ptr = &var;

    cout<<"Value at ptr = " << ptr << "\n";
    cout<<"Value at var = " << *ptr <<"\n";
    cout<<"Value at *ptr = " << *ptr <<"\n";
}
int main()
{
    geeks();
    return 0;
}