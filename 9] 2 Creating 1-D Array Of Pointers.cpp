//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include<iostream>
using namespace std;

int main() {
    int* p = new int[5];
    
    for (int i = 0; i < 5; i++) {
        p[i] = 10 * (i + 1);
    }
    cout << *p << endl;         
    cout << *p + 1 << endl;    
    cout << *(p + 1) << endl;   
    cout << *(p + 2) << endl;   
    cout << p[2] << endl;      
    p++;                       
    cout << *p << endl;        
    delete[] (p-1);             
    return 0;
}