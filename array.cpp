#include <iostream>
#include <climits>
#include<math.h>
using namespace std;


// int main(){
    // int marks[] = {1,2,3};
    // cout<< marks[0] <<"\n";
    // cout<< marks[1] <<"\n";
    // cout<< marks[2] <<"\n";
    // cout<< marks[3] <<"\n";
    // cout<< marks[4] <<"\n";
    // cout<< marks[5] <<"\n";
    // int n;
    // cout<<"Enter length  of array:";
    // cin>>n;
    // int arr [n] ;
    // // int n =sizeof(arr)/sizeof(int);
    // for(int i=0 ; i<n ; i++){
    //  cin>> arr[i];
    // }
    // for(int i=0 ; i<n ; i++){
    //  cout<< arr[i] <<"|";
    // }
    //        largest and smallest element in an array
    // int n;
    // cout<<"enter length of array:";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    // int max = arr[0];
    // int min = arr[0];
    // for(int i=0;i<n;i++){
    //     if(max<arr[i]){
    //         max=arr[i];
    //     }
    // }
    //   for(int i=0;i<n;i++){
    //     if(min>arr[i]){
    //         min=arr[i];
    //     }
    // }
    // cout<<"largest "<<max<<"\n";
    // cout<<"smallest "<<min<<"\n";
//     return 0;
// }

// int main (){
//     int arr[]={1,2,3,4};
//     cout<<arr<<endl;
//     return 0;
// }

// lenear search with shorted array
// void lear(int *arr ,int n){
//     int num;
//     cout<<"enter element from array:";
//     cin>>num;
//     for(int i =0;i<n;i++){
//         if(arr[i]==num){
//             cout<<i<<"   index of "<<num<<"\n";
//         }
//     }
// }
// // by madamji in video
// int lear2(int *arr ,int n,int key){
//     for(int i =0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// reversing of array...
// void rev(int *arr,int n){
//     for (int i = 0; i < n / 2; i++) {
//         // Swap elements at index i and (n-1-i)
//         int temp = arr[i];
//         arr[i] = arr[n-1-i];
//         arr[n-1-i] = temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" | ";
//     }
//     cout<<"\n";
// }
// int main(){
//     int m;
//     cout<<"enter size of array:";
//     cin>>m;
//     int arr[m];
//     int n=sizeof(arr)/sizeof(int);
//     for (int i = 0; i<n ; i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" | ";
//     }
//     cout<<"\n";
//     lear(arr,n);
//     cout<<lear2(arr,n,7);
//     rev(arr,n);
//     return 0;
// }


// int linear(int *arr,int n){
//     int key;
//     cout<< "enter any number from array:";
//     cin>>key;
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//            return i;
//            break;
//         }   
//     }
//     return -1;
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,9,8,7,44,56};
//     int n = sizeof(arr)/sizeof(int);
//     cout<< linear(arr,n);
//     return 0;
// }


// void printarr(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" | ";
//     }
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     int copyArr[n];
//     for(int i=0;i<n;i++){
//         int j=n-i-1;
//         copyArr[i]=arr[j];

//     }
//     for(int i=0;i<n;i++){
//         arr[i]=copyArr[i];
//     }
//     printarr(arr,n);
//     return 0;
// }


// int main(){
//     int arr[]={5,6,9,8,1,3};
//     int n= sizeof(arr)/sizeof(int);
//     int start=0;
//     int end= n-1;
//     while(start<end){
//       //  swap(arr[start],arr[end]);
//         int temp = arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
//     printarr(arr,n);
//     return 0;
// }

// int binSearch(int *arr, int arrlenth,int key){
//    int start=0; int end=arrlenth-1;
//     while(start<=end){
//         int mid = (start+end)/2;
//         if(arr[mid]==key){
//             return mid;
//         }else if(arr[mid]<key){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//      int n;
//     int i;
//     cout<<"enter length of array";
//     cin>>n;
//     int arr[n];
   
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }  

//     for(i=0;i<n;i++){
//         cout<<arr[i]<<"||";
        
//     }

//     // int arr[]={2,4,6,8,10,12,14,16,18,20};
//     int arrlenth = sizeof(arr)/sizeof(int);
//     int key;
//     cout<<"value to be found refer to key";
//     cin>>key;
//     cout<< binSearch(arr,n,key);
//     return 0;
// }


// void printarr(int *ptr,int n){
//     for(int i=0;i<n;i++){
//         cout << *ptr << "\n";
//         ptr=ptr+1;
//     }

// }

// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(int);
//     printarr(arr,  n); 
//     return 0;
// }

//  sub arrays

// void subarr(int *arr,int n){
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             //cout<< "(" << i <<","<<j <<") ";
//             for(int r = i;r<=j;r++){
//                 cout<<arr[r];
//             }
//             cout<<" ";
//         }
//         cout<<"\n";
//     }
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     subarr(arr,n);
//     return 0;
// }

// subarray sub


// BRUTE FORCE APPROACH IN THIS WE CALCULATE ALL SUBARRAY_SUM  AND FIND MAX OF ALL

// void sumofsubarr(int *arr,int n){
//     int maxsum = INT_MIN ;
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//              int sum=0;
//             for(int i=start;i<=end;i++){
//                 sum+=arr[i];
//                 maxsum = max(maxsum,sum);
//             }
//             cout<<sum<<" , ";
//         }
//         cout<<"\n";
//     }
//     cout<<"the maxsubarr sum is:"<<maxsum;
// }
// int main(){
//     int arr[]={2,-3,6,-5,4,2};
//     int n = sizeof(arr)/sizeof(int);
//     sumofsubarr(arr,n);
//     return 0;
// }



//  SECOND APPROACH MORE OPTIMAZE
// void maxsumsubarr(int *arr, int n){
//     int maxsum=INT_MIN;

//     for(int start=0;start<n;start++){
//         int currsum=0;
//         for(int end=start;end<n;end++){
//              currsum += arr[end];
//             maxsum =max(maxsum,currsum);
//         }
//     }
//     cout<<"max subarr sum is:"<<maxsum;
// }
// int main(){
//     int arr[]={2,-3,6,-5,4,2};
//     int n = sizeof(arr)/sizeof(int);
//     maxsumsubarr(arr,n);
//     return 0;
// }


// KADANE ALGORITHM
// void maxsubarrsum(int *arr,int n){
//     int maxsum = INT_MIN;
//     int currsum=0;
//     for(int i=0;i<n;i++){
//         currsum += arr[i];
//         maxsum=max(maxsum,currsum);
//         if (currsum<0)
//         {
//             currsum=0;
//         }
//     }
//     cout<<"max sub array sum is:"<<maxsum;
// }

// int main(){
//     int arr[]={2,-3,6,-5,4,2};
//     int n = sizeof(arr)/sizeof(int);
//     maxsubarrsum(arr,n);
//     return 0;
// }


// buy and sell stocks  O(n)

// void maxProfit(int *prices,int n){              
//     int bestbuy[100000];
//     bestbuy[0]=INT_MAX;
//     // cout<<bestbuy[0]<<",";
//     for(int i=1;i<n;i++){                                   //calculating bestbuy for each sell day
//         bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
//         // cout<<bestbuy[i]<<",";
//     }
//     int maxprofit=0;
//     for(int i=0;i<n;i++){                                   // calculating profit between sell and buy
//         int currentprofit=prices[i]-bestbuy[i];
//         maxprofit=max(currentprofit,maxprofit);
//     }
//     cout<<"max profit is:"<<maxprofit;
// }
// int main(){
//     int prices[]={7,1,5,3,6,4};
//     int n = sizeof(prices)/sizeof(int);
//     maxProfit(prices,n);
//     return 0;
// }



// tapping rain water  O[n]  

// int tprain(int *height, int n){
//     int leftMax[20000];
//     int rightMax[20000]; 
//     leftMax[0]=height[0];
//     rightMax[n-1]=height[n-1];
//     for(int i=1;i<n;i++){
//         leftMax[i]=max(leftMax[i-1],height[i-1]);
//         // cout<<leftMax[i]<<",";
//     }
//     // cout<<"\n"; 
//     for(int i=n-2;i>=0;i--){
//         rightMax[i]=max(rightMax[i+1],height[i+1]);
//         // cout<<rightMax[i]<<",";
//     }
//     int trapwater=0;
//     for(int i=0;i<n;i++){
//         int currwater = min(rightMax[i],leftMax[i])-height[i];
//         if(currwater >0){
//             trapwater += currwater;
//         }
//     }
//     // cout<<"total trap water is:"<<trapwater;
//     return trapwater;
// }

// int main(){
//     // int height[]={4,2,0,6,3,2,5};
//     int height[]={5,4,3,2,1};
//     int n = sizeof(height)/sizeof(int);
//     cout<<"the water trap is:"<<tprain(height,n);
//     return 0;
// }





//solve practise questions after vectors chapter q1 q2 q3 


















