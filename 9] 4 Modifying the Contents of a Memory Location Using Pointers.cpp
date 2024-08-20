//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* aptr = &a;
    cout << *aptr << endl;  
    *aptr = 20;             
    cout << a << endl;      
    int arr[] = {10, 20, 30};
    cout << *arr << endl;  

    return 0;
}