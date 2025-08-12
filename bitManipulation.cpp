#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     //bitwise operators
//     // cout<<(3&5)<<endl;
//     // cout<<(3|5)<<endl;
//     // cout<<(3^5)<<endl;


//     // return 0;

// //     cout<<(7<<2)<<endl;
// //     cout<<(7>>2)<<endl;

//     // cout<<(~4);
//     cout<<(8>>1)<<endl;
// }

// void oddeven(int num){
//     if(!(num&1)){
//         cout<<"number is even \n";
//     }else{
//         cout<<"number is odd \n";
//     }
// }

// int main(){
//     oddeven(3);
//     oddeven(8);
//     return 0;
// }

// void Getibit(int num,int i){
//     int bitmask=1<<i;

//     if(!(num&bitmask)){
//         cout<<"ith bit is 0  \n";
//     }else{
//         cout<<"ith bit is 1  \n";
//     }
// }
// int main(){

//     Getibit(6,2);
//     Getibit(7,1);
//     Getibit(7,5);

//     return 0;

// }

// int Setbit(int num,int i){
//     int bitmask = 1<<i;
//     return(num|bitmask);
// }
// int main(){
//     cout<<Setbit(6,3);

// }


// int Clearbit(int num,int i){
//     int bitmask = ~(1<<i);
//     num=num&bitmask;
//     return num;
// }
// int main(){
//     cout<<Clearbit(6,1);

// }

// bool Powerof2(int num){
//     if(!(num&num-1)){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     cout<<Powerof2(4)<<endl;
//     cout<<Powerof2(16)<<endl;
//     cout<<Powerof2(19)<<endl;
//     cout<<Powerof2(7)<<endl;
//    return 0;
// }

// int updatingbit(int num,int i,int val){
//     num=num & ~(1<<i);
//     num=num|(val<<i);
//     return num;
// }
// int main(){
//     cout<<updatingbit(7,2,0)<<endl;
//     cout<<updatingbit(7,3,1)<<endl;
//     return 0;
// }

// void clearith(int num,int i){
//     int mask= ~0<<i ;
//     num=num & mask;
//     cout<< num;
// }
// int main(){
//     clearith(15,2);
//}


// int countset(int num){
//     int count=0;
//     while (num>0)
//     {
//         int Lastdig=num&1;
//         count +=Lastdig;
//         num=num>>1;
//     }
//     return count;
// }
// int main(){
//     cout<<countset(10)<<endl;
//     cout<<countset(7);

// }


// void fastExpo(int x,int n){
//     int ans =1;
//     while(n>0){
//         int lastbit = n&1;
//         if(lastbit){
//             ans=ans*x;
//         }
//         x=x*x;
//         n=n>>1;
//     }
//     cout<<ans<<endl;
// }
// int main(){
//     fastExpo(3,5);
//     fastExpo(3,4);
//     return 0;
// }
