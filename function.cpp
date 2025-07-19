#include<iostream>
#include<cmath>
using namespace std;

// void sayhello(){
//     cout<<"hello :> \n";
// }

// void asistance(){
//     sayhello();
//     cout<< "work done::";
// }

// int main(){
    // asistance();
// }


// int sum (int a, int b){               //  for default value we can assign value to second parameter  b=1
//     int sum=a+b;
//     return sum ;
// }

// int sub (int a, int b){
//     int sub=a-b;
//     return sub ;
// }

// int main(){
//     int s=sum(5,6);
//     cout<<"sum is "<<s<<"\n";
//     int m=sub(5,2);
//     cout<<"difference is "<<m<<"\n";
//     return 0;
// }



// int pro(int a, int b){
//    int  pro=a*b;

//     return pro;
// }

// int main(){
//     int p = pro(5,2);
//     cout<<"the product "<<p<<"\n";

//     return 0;
// }


// void chek (int num){
   
//     if(num % 2==0){
//         cout<<"even";
//     }else{
//         cout<<"odd";
//     }

  
// }

// int main(){
    
//     chek(11);
        
// }


// bool iseven(int n){
//     if(n%2==0){
//         return true;

//     }else{
//         return false;
//     }
// }

// int main(){
//     cout<< iseven(2)<<"\n";
//     return 0;
// }



// int factorial(int num){
//     int fact=1;
//     for(int i=1;i<=num;i++){
//         fact=fact*i;     
//     }   

//     cout<<"the factorial of ("<<num<<")"<< fact<<"\n";

//     return fact; 
// }

// int main(){

//     factorial(3);
//     factorial(5);
//     return 0;
// }


// prime number

// bool isprime (int num){
//     if(num==1){
//         return false;
//     }

//     for(int i=2;i<=num-1;i++){
//         if(num%i==0){
//             return false;
//         }
//     }

//     return true;
// }

// int main(){
//     cout<< isprime(1) <<"\n";
//     cout<< isprime(2) <<"\n";
//     cout<< isprime(3) <<"\n";
//     cout<< isprime(4) <<"\n";
//     cout<< isprime(5) <<"\n";
//     cout<< isprime(6) <<"\n";
// }




// bool isprime (int num){
//     if(num==1){
//         return false;
//     }

//     for(int i=2;i<=sqrt(num);i++){
//         if(num%i==0){
//             return false;
//         }
//     }

//     return true;
// }

// int main(){
//     cout<< isprime(1) <<"\n";
//     cout<< isprime(2) <<"\n";
//     cout<< isprime(3) <<"\n";
//     cout<< isprime(4) <<"\n";
//     cout<< isprime(5) <<"\n";
//     cout<< isprime(6) <<"\n";
// }

//  binomial coefficient

// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact *=i;
//     }
//     return fact;
// }
// int coeff(int n,int r){
//     int firstdig=factorial(n);
//     int seconddig=factorial(r);
//     int thirddig=factorial(n-r);
//     int result= firstdig/(seconddig*thirddig);
//     return result;
// }

// int main(){
//     cout<< coeff(4,2)<<"\n";
//     cout<< coeff(3,2);
// return 0;
// }

// function overloading

// int sum(int a,int b){
//     cout<<(a+b)<<"\n";
//     return a+b;
// }

// double sum(double a, double b){
//     cout<<(a+b)<<"\n";
//     return a+b;
// }

// int sum(int a, int b, int c){
//     cout<<(a+b+c)<<"\n";
//     return a+b+c;
// }

// int main(){
//     sum(1,4);
//     sum(1.5,3.5);
//     sum(1,2,3);
// }

// for prime numbr=ers between 2 to n numbers

// bool prime2(int num){
//     if(num==1){
//         return false;
//     }
//     for(int i=2;i<=sqrt(num);i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// void all_prime(int n ){
//     for(int i=2;i<=n;i++){
//         if(prime2(i)){
//             cout<<i<<" ";
//         }
//      }
// }
// int main(){
//    all_prime(50);
// }


// assignment
// 1 palindrome  

// void pal(int num){
//     // int num;
//     // cout<<"enter three digit number :";
//     // cin>> num;
//     int n = num;
//     int m=0;
//     for(int i=1;i<=3;i++){
//         int lastnum= (n%10);
//         // cout<<lastnum<<"\n";
//         n=n/10;
//         m=m*10+lastnum;
//     }
//     cout<<m<<"\n";
//     if(num==m){
//         cout<<"palindome"<<"\n";
//     }else{
//         cout<<"not palindome"<<"\n";
//     }
//     // return 0;
// }
// int main(){
//     pal(121);
//     pal(321);
//     pal(101);
//     pal(111);
//     pal(121);
//     pal(568);
//     pal(658);
//     return 0;
// }



// int reverse (int n) { 
//     int res=0;
//     while(n>0){
//         int lastDig = n%10 ;
//         res=res*10+lastDig;
//         n=n/10;
//     }
//     return res;
// }
// bool isPalindrome(int num){
//         int revNum =reverse (num);
//     return num == revNum;
// }

// 2 sum of digits of three digit numbers

// int dig_sum (int num){
//     int n = num;
//     int m=0;
//     for(int i=1;i<=3;i++){
//         int lastnum= (n%10);
//         // cout<<lastnum<<"\n";
//         n=n/10;
//         m=m+lastnum;
//     }
//     cout<<m;
//     return m;
// }
// int main(){
//     dig_sum(123); cout<<"\n";
//     dig_sum(589);
//     return 0;
// }

// int digSum (int n){
//     int res=0;
//     while(n>0){
//         res+=n%10;
//         n=n/10;
//     }
//     return res;
// }

// 3    a*a+b*b+2ab

// int formula(int a, int b){
//     int eque = pow(a,2) + pow(b,2) + (2*a*b);
//     return eque;
// }

// int main(){
//     cout<< formula(2,3)<<"\n";
//     cout<< formula(6,3)<<"\n";
//     return 0;   
// }

// largest of three number

// int largest(int a,int b,int c){
//     if(a>b && a>c){
//         return a;
//     }
//     else if(b>a && b>c){
//         return b;
//     }
//     else if(c>a&& c>b){
//         return c;    
//     }
// }
// int main(){
//     cout<<largest(3,2,1)<<"\n";
//     cout<<largest(1,3,2)<<"\n";
//     cout<<largest(1,2,3)<<"\n";
//     return 0;
// }


// int largest(int a,int b,int  c){
//     if(a>=b&&a>=c){
//         return a;
//     }else if(b>=c){
//             return b;
//         }else{
//                 return c;
//             }
// }


// next char

// char upnext (char val){
//     if(val=='z'){
//         return 'a';   
//     }
//     val += 1;
//     return val;
// }
// int main(){
//     cout<<upnext('a')<<"\n";
//     cout<<upnext('c')<<"\n";
//     cout<<upnext('e')<<"\n";
//     cout<<upnext('g')<<"\n";
//     cout<<upnext('j')<<"\n";
//     cout<<upnext('z')<<"\n";
//     return 0;
// }

// assignment


int main(){
    // int x=5;
    // x*=(3+7);
    // cout<<x<<"\n";

    // int meal=5;
    // int tip=2;
    // int total=meal+(meal>6? ++tip:--tip);
    // cout<< total;


    //    int count=1;
    //    while(count<=15){
    //     cout<<(count%2==1 ? "****":"++++");
    //     ++count;
    //    }

    // int x=3, y=5, z=10;
    // cout<<++z + y - y + z + x++;


    // int counter=0;
    // do{
    //     cout<< "apna college \n";
    //     counter++;


    // }while (counter<10);

    //   int i;
    //   for(i=1;i<6;i++){
    //       if(i>3) continue;
    //   }
    //      cout<<i<<endl;

    // for(int i=1;i<=5;i++){
    //     for(int j=i;j<=5;j++){
    //         cout<<i;
    //     }
    //     cout<<"\n";
    // }














    return 0;
}


//  form binary number system

// binary to decimal


// #include<iostream>
// using namespace std;
// void binTOdec(int dig){
//     int num=dig;
//     int digsum =0;
//     int pow = 1;
//     while(num>0){
//         int lastdig=num%10;
//         digsum += lastdig*pow;
//         pow = pow*2;
//         num =num/10;
//     }
//     cout<< digsum;
//    }
// int main(){
//     binTOdec(1111);
//     return 0;
// }




// # include <iostream>
// using namespace std;

            // decimal to binary

// void digTObin(int decnum){
//     int n= decnum;
//     int rem=0;
//     int binum=0;
//     int pow = 1;

//     while(n>0){
//         rem = n %2;
//         binum += rem * pow;        
//         n = n/2;
//         pow = pow*10;
//     }
//     cout<< binum << endl;
// }
            // binary to decimal
// void binTOdec(int dig){
//     int num=dig;
//     int digsum =0;
//     int pow = 1;
//     while(num>0){
//         int lastdig=num%10;
//         digsum += lastdig*pow;
//         pow = pow*2;
//         num =num/10;
//     }
//     cout<< digsum;
// }

// int main(){
//     binTOdec(1110000);cout<<"\n";

//     digTObin(112);cout<<"\n";
//     return 0;
// }
