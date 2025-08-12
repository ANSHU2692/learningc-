#include<iostream>
#include<string>
#include<cstring>
#include<climits>
#include<vector>

using namespace std;

// int main(){
//   int size;
//   cin>>size;

//   int *arr=new int[size];
//     int x=1;
//   for(int i=0;i<size;i++){
//     arr[i]=x;
//     cout<<arr[i]<<" ";
//     x++;

//     delete [] arr;

//   }
//     return 0;
// }


// int main(){
//     int rows,colms;
//     cout<<"enter no of rows";
//     cin>>rows;
//     cout<<"enter no of columns";
//     cin>>colms;
//     // to create 2D array dynamically
//     int* *matrix = new int *[rows];
//     for(int i=0;i<rows;i++){
//         matrix[i] = new int[colms];
//     }

//     int x=1;

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<colms;j++){
//             matrix[i][j]=x++;
//             cout<< matrix[i][j] <<" ";
//         }
//         cout <<endl;
//     }

//     cout<<matrix[2][2]<<endl;
//     cout<<*(*(matrix+2)+2)<<endl;
//     for(int i=0; i<rows; i++){
//     delete[] matrix[i];
//     }
//     delete[] matrix;

//     return 0;

// }

// int main(){
//     // vector<int> vec1(10,-1);
//     // cout<<vec1.size()<<endl;
  

//     // for(int i=0;i<vec1.size();i++){
//     //     cout<<vec1[i]<<" ";
//     // }

//     // vector<int> vec ={1,2,3,4};
//     // cout<<"size of vector "<<vec.size()<<endl;
//     // cout<<"capacity of vector "<<vec.capacity()<<endl;

//     // vec.push_back(5);
//     // cout<<"size of vector "<<vec.size()<<endl;
//     // cout<<"capacity of vector "<<vec.capacity()<<endl;

//     // vec.pop_back();
//     // cout<<"size of vector "<<vec.size()<<endl;
//     // cout<<"capacity of vector "<<vec.capacity()<<endl;


//     // vector<int> vec;
//     // vec.push_back(1);
//     // cout<<"size of vector "<<vec.size()<<endl;
//     // cout<<"capacity of vector "<<vec.capacity()<<endl;

//     // vec.pop_back();
//     // cout<<"size of vector "<<vec.size()<<endl;
//     // cout<<"capacity of vector "<<vec.capacity()<<endl;
//     return 0;
// }

// pair sum

// vector <int> currsum(vector<int> vec,int key){
//     int currSum= 0;
//     int start= 0;
//     int end= vec.size()-1;
//     vector<int> ans;

//     while(start<end){
//         currSum = vec[start] + vec[end];
//         if(currSum == key ){
//             ans.push_back(start);
//             ans.push_back(end);
//             return ans;  
//         }else if(currSum>key){
//             end--;
//         }else{
//             start++;
//         }
//     }

//     return ans ;
// }
// int main(){

    // vector<int> vec = {2,7,11,15};
    // int key =9;
    // vector<int> ans = currsum(vec,key);
    // cout<< ans[0]<<","<<ans[1];


    // 2d vectors
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    // for(int i=0;i<matrix.size();i++){
    //     for(int j=0;j<matrix[i].size();j++){
    //         cout<<matrix[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }

    // vector<vector<int>> matrix = {{1,2,3},{4,5},{6}};

    // for(int i=0;i<matrix.size();i++){
    //     for(int j=0;j<matrix[i].size();j++){
    //         cout<<matrix[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }
    // return 0;

    // vector<int> v;
    // for(int i=0;i<5;i++){
    //     v.push_back(i);
    //     cout<<v.size()<<endl;
    //     cout<<v.capacity()<<endl;
    // }

    // return 0;
//}

// assignment 
// vector<int> dupeNum(vector<int> arr){
    
//     vector<int> ans;

//     for(int i=0;i<arr.size()-1;i++){
//         if(arr[i]==arr[i+1]){
//             ans.push_back(i);
//             ans.push_back(i+1);
//             return ans;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>vec ={1,2,3,4,5,5,7,8,9,10};
//     vector<int>ans= dupeNum(vec);
//     cout<<ans[0]+1<<","<<ans[1]+1;
// }



