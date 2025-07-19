#include<iostream>
using namespace std;

int main(){
    // int age;
    // cout<<"enter your age:";
    // cin>> age;
    // if(age>=18){
    //     cout<<"elegible for vote in india";
    // }
    // else{
    //     cout<<"can not vote";
    // }

    // int a,b;
    // cout<<"enter value of a:";
    // cin>>a;
    // cout<<"enter value of b:";
    // cin>>b;
    // if(a>b){
    //     cout<<"a is larger:"<<a<<endl;
    // }else{
    //     cout<<"b is larger:"<<b<<endl;
    // }

    // int num;
    // cout<<"enter any number:";
    // cin>>num;

    // if(num%2==0){
    //     cout<<"num is even."<<num<<endl;
    // }else{
    //     cout<<"num is odd"<<num<<endl;
    // }

    // int marks;
    // cout<<"enter marks:";
    // cin>>marks;
    // if(marks>=90){
    //     cout<<"A";
    // }else if(marks>=85){
    //     cout<<"B";
    // }else{
    //     cout<<"C";
    // }

    // int income;float tax;
    // cout<<"enter your income in laks:";
    // cin>> income;

    // if(income<=5){
    //     cout<<"aplicable 0'%' tax  ";
    //     tax=0;        
    // }
    //  else if(income>5 && income<=10){
    //     cout<<"aplicable 20'%' tax  ";
    //     tax=income*.2;      
    // }
    //   else{
    //     cout<<"aplicable 30'%' tax  ";
    //     tax=income*.3;      
    // }
    // cout<<tax*100000;



    // int a, b, c;
    // cout<<"enter value of a:";
    // cin>>a;
    // cout<<"enter value of b:";
    // cin>>b;
    // cout<<"enter value of c:";
    // cin>>c;

    // if(a>b && a>c){      
    //         cout<<"a is largest"<<a;     
    // }  
    // else if(b>c){ 
    //         cout <<"b is largest"<<b;
    //  }
    // else{
    //     cout <<"c is largest"<<c;
    // }

    // bool isAge;
    // int age;

    // cout<<"enter your age:";
    // cin>>age;

    // isAge=(age>=18)?true:false;

    // cout<<isAge;

    // int a,b,largest;
    // cout<< "enter value of a:" ;
    // cin>>a;
    // cout<<"enter the value of b:";
    // cin>>b;

    // largest=a>=b?a:b;

    // cout<< largest;

    //odd ya even
    // int num;
    // cout<<"enter any number:";
    // cin>>num;

    // bool odevn=num%2==0 ?true:false;

    // cout<<odevn;

    // int day;

    // cout<<"enter day between 1 to 7";
    // cin>>day;

    // switch(day){
    //     case 1: cout<< "monday" << endl;
    //         break;
    //     case 2: cout<< "tuesday" << endl;
    //         break;
    //     case 3: cout<< "wednsday" << endl;
    //         break;
    //     case 4: cout<< "thursday" << endl;
    //         break;
    //     case 5: cout<< "friday" << endl;
    //         break;
    //     case 6: cout<< "saturday" << endl;
    //         break;
    //     case 7: cout<< "sunday" << endl;
    //         break;
    //     default: cout<<"invalid"<<endl;

    // }

    
    // int a,b;
    // cout<<"enter valur of a:";
    // cin>>a;
    // cout<<"enter the value of b:";
    // cin>>b;
    // char operations;
    // cout<<"enter following operations- \n 1:+ \n 2:- \n 3:* \n 4:/ \n";
    // cin>>operations;
    // switch(operations){
    //     case '+': cout<<a+b << endl;
    //         break;
    //     case '-': cout<< a-b << endl;
    //         break;
    //     case '*': cout<<a*b << endl;
    //         break;
    //     case '/': cout<<a/b << endl;
    //         break;
    //     default: cout<<"invalid"<<endl;

    // }


    // assignment

    // number is + - 0

    // int num;
    // cout<<"enter any number:";
    // cin>>num;

    // if(num==0){
    //     cout<<"entered number is zero";
    // }else if(num>0){
    //     cout<<"entered number is positive ";

    // }else{
    //     cout<<"entered number is negative";
    // }


    // int year;
    // cout<<"enter any year:";
    // cin>>year;

    // if(year%4==0|| year%400==0){
    //     cout<<"year is leap year";
   

    // }else{
    //     cout<<"year is not leap year";
    // }


    // int a=63,b=36;
    // bool x = (a<b) ? true:false ;
    // int y= (a>b) ? a:b ;
    // cout<<x<<","<<y<<endl; 


    // int a=5;
    // if(++a*5<=25){
    //     cout<<"Hello\n";
    // }else{
    //     cout<<"Bye\n";
    // }

    /*Armstrong number is anumber that is equal to the sum of cubes of its digits.
    Eg: 371 is an armstrong number. 3*3*3+7*7*7+1*1*1=371 */

   
    // int n;
    // cout << "Enter a 3-digit number: ";
    // cin >> n;
    
    // // Creating a copy of the input number
    // int num = n;
    
    // // Extracting the digits of the number
    // int dig1 = num % 10;  // Last digit
    // num /= 10;            // Removing the last digit
    // int dig2 = num % 10;  // Middle digit
    // num /= 10;            // Removing the middle digit
    // int dig3 = num;       // First digit (what's left)
    
    // // Calculating the sum of the cubes of the digits
    // int cubeSum = dig1 * dig1 * dig1 + dig2 * dig2 * dig2 + dig3 * dig3 * dig3;
    
    // // Checking if the cube sum equals the original number
    // if (cubeSum == n) {
    //     cout << n << " is an Armstrong Number\n";
    // } else {
    //     cout << n << " is NOT an Armstrong Number\n";
    // }
    
    return 0;
}