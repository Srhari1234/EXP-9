# EXP-9

# Aim : -

To Study And Implement C++ Pointers Basics.

# Theory: -



# 1. C++ Program To Illustrate Pointers: 
~~~
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
~~~

# Output: -

<img width="388" alt="image" src="https://github.com/user-attachments/assets/acb8f597-4571-4f78-82b6-de0e7ef1379e">

# 2. Creating 1-D Array Of Pointers : 
~~~
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
~~~

# Output: 

<img width="398" alt="image" src="https://github.com/user-attachments/assets/d15e0fa6-d25d-4069-8baf-2dcf32e57f4d">

# 3. Pointer Arithmetic in C++ : 
~~~
//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include<iostream>
using namespace std;

int main() {
    int b = 10;
    int *ptr = &b;
    cout << "*ptr: " << *ptr << "   b: " << b << endl;
    ptr++;
    cout << "After increment: " << *ptr << endl;
    float *n, a = 8.923;
    n = &a;
    cout << endl << "*n: " << *n << "   a: " << a << "   n: " << n << "   &a: " << &a << endl;
    n++;
    cout << "After increment: " << n << endl;
    char *ch, c = 'c';
    ch = &c;
    cout << endl << (void*)ch << endl;
    ch++;
    cout << "After increment: " << (void*)ch << endl;

    return 0;
}
~~~

# Output: - 

<img width="406" alt="image" src="https://github.com/user-attachments/assets/8613facb-2a97-4e7f-a74b-72832a763d1f">

# 4. Modifying the Contents of a Memory Location Using Pointers : 
~~~
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
~~~

# Output: 

<img width="444" alt="image" src="https://github.com/user-attachments/assets/9acf8328-21a8-474b-a429-63a664a71a6f">

# 5. Incrementing a Pointer to Traverse an Array : 
~~~
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
~~~

# Output:  

<img width="444" alt="image" src="https://github.com/user-attachments/assets/29e1596c-57cb-4a14-be4f-2b54497fb2a0">

# CONCLUSION: 
Mastering pointers is crucial for effective C++ programming. Pointers allow direct memory access, which enhances performance and flexibility by enabling efficient data manipulation and memory management. They facilitate operations like dynamic memory allocation, array handling, and complex data structure management. Understanding pointers also aids in optimizing code and developing robust algorithms. By learning to declare, initialize, and use pointers effectively, programmers gain the skills necessary to handle advanced programming tasks and create high-performance applications. Proficiency with pointers is essential for leveraging the full power of C++ and excelling in systems-level programming.
