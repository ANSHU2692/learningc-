#include <iostream>
#include <climits>
#include<math.h>
#include <algorithm>

using namespace std;


// void bubblesort(int *arr,int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//                if (arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//             }
//         }   
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"||";
//     }
// }

// int main(){
//     int arr[]={5,4,1,3,2};
//     int n = sizeof(arr)/sizeof(int);
//     bubblesort(arr,n);
//     return 0;
// }


// with some optimization in bubble sort

// void arrprint(int arr[],int n){
//        for(int i=0;i<n;i++){
//         cout<<arr[i]<<"||";
//     }
// }


// void bubblesort(int *arr,int n){
   
//     for(int i=0;i<n-1;i++){
//          bool isSwap=false;
//          cout<<"1  ";
//         for(int j=0;j<n-i-1;j++){
//                if (arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//             isSwap=true;
//             }
//             cout<<"2";
//         }  
//         if(!isSwap){
//             // array is already sorted
//             return;
//         } 
//     }

//     arrprint(arr,n);
 
// }

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int n = sizeof(arr)/sizeof(int);
//     bubblesort(arr,n);
//     return 0;
// }



//selection sort

// int printArr(int *arr,int n){
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<",";
//     }
// }
// void selectionsort(int *arr,int n){
//     for(int i=0;i<n-1;i++){
//         int minindx =i;
//         for(int j=i;j<n;j++){
//             if(arr[j]<arr[minindx]){
//                 minindx=j;
//             }
//             swap(arr[i],arr[minindx]);
//         }
//     }
//     printArr(arr,n);
// }
// int main(){
//     int arr[]={5,4,1,3,2};
//     int n = sizeof(arr)/sizeof(int);
//     selectionsort(arr,n);
//     return 0;
// }

// int printArr(int *arr,int n){
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<",";
//     }
// }
// void insetionsort(int *arr,int n){
//     for(int i=1;i<n;i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev>=0 && arr[prev]>curr){
//             swap(arr[prev],arr[prev+1]);
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }
//     printArr(arr,n);
// }
// int main(){
//     int arr[]={5,4,1,3,2};
//     int n = sizeof(arr)/sizeof(int);

//     insetionsort(arr,n);

//     return 0;
// }




// question in which we have to sort char values in desending order using insertionSort
// void printArr(char *arr,int n){
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<",";
//     }
// }
// void insetionsort(char *arr,int n){
//     for(int i=1;i<n;i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev>=0 && arr[prev]<curr){
//             swap(arr[prev],arr[prev+1]);
//             prev--;
//         }
//         arr[prev+1]=curr;
//     }
//     printArr(arr,n);
// }
// int main(){
//     char arr[]={'f','b','a','e','c','d'};
//     int n = sizeof(arr)/sizeof(char);

//     insetionsort(arr,n);

//     return 0;
// }



//counting sort

// int printarr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
// }
// void countSort(int arr[],int n){
//     int freq[100000]={0};
//     int minVal = INT_MAX ; int maxVal = INT_MIN;
//    // 1st step
//     for(int i=0;i<n;i++){
//         minVal = min(minVal,arr[i]);
//         maxVal = max(maxVal,arr[i]);
//         freq[arr[i]]++;
//     }
//     // 2nd step
//     for(int i=minVal,j=0;i<=maxVal;i++){
//         while(freq[i]>0){
//             arr[j++]=i;
//             freq[i]--;
//         }
//     }
//     printarr(arr,n);
// }
// int main(){
//     int  arr[]={1,4,1,3,2,4,3,7};
//     int n = sizeof(arr)/sizeof(int);
//     countSort(arr,n);
//     return 0;
// }

// inbuild sort finction in c++  for accending use sort(start,end)  for descending order use sort(start,end,greater<int>()    )
// int printarr(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
// }

// int main(){
//     int  arr[]={1,4,1,3,2,4,3,7};
//     int n = sizeof(arr)/sizeof(int);

//     sort(arr,arr+n);   // acending order
//     sort(arr,arr+n,greater<int>()); // descending order

//     printarr(arr,n);

//    return 0;
// }