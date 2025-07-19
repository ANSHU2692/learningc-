#include<iostream>
#include<cmath>
using namespace std;

int main(){

    //for loop

    // int num;
    // for(num=1;num<=9;num++){
    //     cout<<num<<"\n";
    // }

    // int i;
    // for(i=1;i<=5;i++){
    //     cout<<"apna college"<<endl;
    // }

    // int num,i;
    // cout<<"enter any number:";
    // cin>>num;

    // for(i=1;i<=num;i++){
    //     cout<<i<<" ";
    // }


    // int i ,num ,sum=0;
    // cout<<"enter any number:";
    // cin>>num;

    // for(i=1;i<=num;i++){
    //     sum+=i;
    // }
    // cout<<"total sum of first n natural numbers are:"<<sum;


    //while loop

    // SUM OF N NUMBERS

    // int n;
    // cout<<"enter any number:";
    // cin>>n;
    // int sum=0;

    // int i=1;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    // cout<<sum;

    // PRINTIG A PATTERN

    // int i,j,n=4;
    // for(i=0;i<n;i++){
    //      for(j=0;j<n;j++){
    //     cout<<'*';
    // }
    // cout<<endl;
    // }

    // REVERSE COUNTING

    // int num,i;

    // cout<<"enter any number:";
    // cin>>num;

    // for(i=num;i>=1;i--){
    //     cout<<i<<" ";
    // }

    // SUM OF DIGITS IN A NUMBER


    // int num;
    // int sum=0;
    // cout<<"enter any number:";
    // cin>>num;
    // while(num>0){
    //     int lastdig=num%10;
    //     sum+=lastdig;
    //     num=num/10;   
    // }
    // cout<<sum;

    // SUM OF ODD DIGITS IN A NUMBER

    // int num;
    // int sum=0;
    // int lastdig;
    // cout<<"enter any number:";
    // cin>>num;
    // while(num>0){

    //     lastdig=num%10;
    //     if(lastdig%2 !=0){
    //         sum+=lastdig;
    //     }     
    //     num=num/10;   
    // }
    // cout<<sum;

    // FOR REVERSING WHOLE NUMBER


    // int num,lastdig,result=0;

    // cout<<"enter any number:";
    // cin>>num;

    // while(num>0){
    //     lastdig=num%10;
    //     result=result*10+lastdig;  
    //     num=num/10;
    // }
    // cout<<result<<" ";


    // FOR REVERSING DIGITS OF ANY NUMBER


    // int num,last;
    
    // cout<<"enter any number:";
    // cin>>num;

    // while(num>0){
    //     last=num%10;
    //     cout<<last<<" ";
    //     num=num/10;

    // }



    // DO-WHILE LOOP

    // int n ,i=1;
    // cout<<"enter any number:";
    // cin>>n;

    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while (i<=n);

    // int val=1;

    // do{
    //     cout<<"print in do while loop.";
    //     val++;
    // }while(val>5);


    // while(val>5){
    //     cout<<"print in while loop";
    //     val++;
    // }


    // break statement
    // int i=1;
    // while (i<=10)
    // {
    //     if(i>=3){
    //         break;
    //     }
    //     cout<<"hello"<<" "<<i<<endl;
    //     i++;
       
    // }

    // int n;    
    // while(true)
    // {
    //     if(n%10==0){
    //         break;
    //     }
    //     cout<<"enter any number:"<<" ";
    //     cin>>n;
    //     cout<<n<<endl;
    // }
    // cout<<"loop has ended"<<endl;
    
    //continue

    // int i;

    // for(i=1;i<=10;i++){
    //     if(i%2==0){
    //         continue;
    //     }
    //     cout<<i<<" ";
    // }


    // int num;
   
    // do{
    //     cout<<"enter any number:";
    //     cin>>num;

    //     if(num==0){
    //         break;
    //     }
        
    //     if(num%10==0){
    //         continue;
    //     }
    //     cout<<num<<endl;
        
    // }while (true);

    // cout<<"end of loop.";


    // prime number

    
    // int n;
    // cout<<"enter any number.";
    // cin>>n;
    // bool isPrime= true;
    // for(int i=2;i<=sqrt(n);i++){
    //     if (n%i==0)  {
    //         isPrime=false;
    //         break;
    //     }  
    // }
    // if(isPrime==true){
    //     cout<<"number is prime.";
    // }else{
    //    cout<<"number is not prime." ;
    // }

    //factorial of number


    // int num;
    // cout<<"enter any number:";
    // cin>>num;
    // int fact=1;
    // for(int i=1;i<=num;i++){
    //     cout<<i<<endl;

    //     fact*=i;
       
    // }
    // cout<<fact;

    //table 

    // int num ,i;
    // cout<<"enter any number:";
    // cin>>num;
    // for(i=1;i<=10;i++){
    //     cout<<num<<"*"<<i<<"="<<num*i<<endl;

    // }

    //armstrong number

    // int num,i,last,ast=0,mul;
    // cout<<"enter any number:";
    // cin>>num;
    // int dig=num; //cloning number
    // while(true){
    //     if(num==0){
    //         break;          //ending loop
    //     }
    //     last=num%10;        //for extracting last didgit from number
    //     cout<<last<<endl;
    //     mul=(last*last*last);       // for cube of last digit
    //     num=num/10;     //removing last digit form number
    //     ast +=mul;      //suming up cubes

    // }
    // cout<<ast<<endl;
    // if(ast==dig){
    //     cout<<"number is armstrong";

    // }else{
    //     cout<<"number is not armstrong";
    // }


    // prime numbers between 2 to n

    // int n;
    // cout<<"enter any number:";
    // cin>>n;

    // for(int i=2;i<=n;i++){

    //     bool isPrime= true;

    //     for(int j=2;j<=sqrt(i);j++){
    //         if(i%j==0){
    //             isPrime=false;
    //             break;
    //         }
    //     }
    //     if(isPrime){
    //         cout<<i<<"is prime"<<endl;

    //     }  
    // }



    // int n;
    // cout<<"enter any number:";
    // cin>>n;

    // int first=0;
    // int second=1;

    // cout<<first<<" ";  cout<<second<<" ";


    // // 0 1 1 2 3 5 8 13 21 34

    // for(int i=2;i<=n;i++){
        
    //     int third=second+first;
    //     cout<< third<<" ";

    //     first=second;
    //     second=third;
        

     

    // }

   
    return 0;

}