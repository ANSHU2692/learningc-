#include<iostream>
using namespace std;

// & --> address of operator
// * --> for pointers

// int main(){

//     // int a = 10;
//     // int *ptr = &a;
//     // float pi=3.14;
//     // float *ptr3 = &pi;
//     // int **ptr2 =  &ptr;
//     // cout<<ptr<<"="<< &a << "\n";
//     // cout<<ptr2<<"=" << &ptr <<"\n";
//     // cout<<ptr3<< "="<< &pi <<  "\n";
//     // cout<< sizeof(ptr2)<<"\n";

//     // int a =10;
//     // int *ptr = &a;
//     // cout<< ptr <<"\n";
//     // cout<<*ptr<<"\n";
//     // *ptr = 20;
//     // cout<< a << "\n";

//     // int *ptr = NULL;
//     // cout<< ptr << "\n";
//     // cout<< *ptr << "\n";

//     // cout<<"bye";
//     return 0;
// }

// void ChangeA(int a){
//     a=20;
//     cout<<a<<"\n";
// }

// pass by pointers

// void ChangeA(int *ptr){
//     *ptr=20;
//     cout<<*ptr<<"\n";
// }

// passs by reference variable

// void ChangeA(int &para){
//     para=20;
//     cout<<para<<"\n";
// }

// int main(){
//     int a=10;
//     // int &b =a;
//     // b=20;
//     // cout<<b<<"\n";
//     ChangeA(a);
//     cout<<a<<"\n";
//     return 0;
// }


// int main(){
//     // int x=5;
//     // int y=10;
//     // int *ptr=&x;
//     // int *ptr2=&y;
//     // ptr = ptr2;
//     // cout<< ptr << "\n" << ptr2 << "\n";
//     // cout<<*ptr<<"\n"<<*ptr2<<"\n";
//     // float *a,b;
//     // int *a =0;
//     // cout<<a;

//     // int x;
//     // int *ptr;
//     // x=7;
//     // ptr = &x;
//     // cout<< *ptr;
//     return 0;
//}

// void multiBy2(int &a , int &b , int &c){
//     a *= 2;
//     b *= 2;
//     c *= 2;

// }
// int main(){
//     int x=1, y=2 , z=3;
//     multiBy2(x,y,z);
//     cout<<x<<"\n";
//     cout<<y<<"\n";
//     cout<<z<<"\n";
// }



// int main(){
//     int a = 32;
//     int *ptr = &a;

//     char ch = 'A';
//     char &cho = ch;

//     cho += a;
//     *ptr += ch;
    
//     cout << a << "," << ch <<"\n";

// }


// int main() {
//     int a = 32;            // Step 1: Initialize 'a' to 32
//     int *ptr = &a;         // Step 2: 'ptr' points to the memory address of 'a'

//     char ch = 'A';         // Step 3: Initialize 'ch' to 'A' (ASCII value 65)
//     char &cho = ch;        // Step 4: 'cho' is a reference (alias) to 'ch'

//     cho += a;              // Step 5: Add 'a' (32) to 'cho' (and thus 'ch')
//                            // Result: 'ch' becomes 65 + 32 = 97 ('a')

//     *ptr += ch;            // Step 6: Add 'ch' (97) to the value pointed by 'ptr' (which is 'a')
//                            // Result: 'a' becomes 32 + 97 = 129

//     cout << a << "," << ch << "\n";  // Step 7: Output the final values of 'a' and 'ch'
//                                      // Output: 129,a
// }














