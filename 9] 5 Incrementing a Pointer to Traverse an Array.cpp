//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    cout << *arr << endl; 
    int *ptr = arr;
    for(int i = 0; i < 3; i++) {
        cout << *ptr << endl;  
        ptr++;                 
    }
    return 0;
}