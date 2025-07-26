#include <iostream>
#include <climits>
#include<math.h>
using namespace std;

// int main(){

//    // int arr[2][3]={{100,100,100},
//    //                 {78,36,98}};

//    // cout<<arr[1][1];

//     int arr[3][2];

//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             cin>>arr[i][j];
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             cout<<arr[i][j]<<"|";
           
//         } cout<<"\n";
//     }
//     return 0;

// }



//spiral matrix problem

// void spiralMatrix(int mat[][4],int n,int m){

//     int srow = 0 , erow = n-1;
//     int sclm = 0 , eclm = m-1;
    
//     while (srow<=erow && sclm<=eclm){
//             //top
//             for(int i=sclm;i<=eclm;i++){
//                 cout<<mat[srow][i]<<" ";
//             }
//             //right
//             for(int j=srow+1;j<=erow;j++){
//                 cout<<mat[j][eclm]<<" ";
//             }
//             //bottom
//             for(int i=eclm-1;i>=sclm;i--){
//                 if(srow==erow){
//                     break;
//                 }
//                 cout<<mat[erow][i]<<" ";
//             }
//             //left
//             for(int j=erow-1;j>=srow+1;j--){
//                   if(sclm==eclm){
//                     break;
//                 }
//                 cout<<mat[j][sclm]<<" ";
//             }
//             srow++; sclm++;
//             erow--; eclm--;
//     }
// }

  
// int main(){
//     int matrix[5][4]={  {1,2,3,4},
//                         {5,6,7,8,},
//                         {9,10,11,12},
//                         {13,14,15,16},
//                         {14,15,16,17}   };

//     spiralMatrix(matrix,5,4);
//     return 0;
// }


// diagonal sum  o[n^2]

// void digSum(int mat[][3],int n){
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if (i==j)
//             {
//                 sum += mat[i][j];
//             }else if(j==n-i-1){
//                 sum += mat[i][j];
//             }
//         }
//     }
//     cout<<sum;
// }


// bit optimized  o[n]

// void digsum(int mat[][3],int n){
//     int sum =0;
//     for(int i=0;i<n;i++){
//         sum += mat[i][i];
//         if(i != n-i-1){
//             sum += mat[i][n-i-1];
//         }
//     }
//     cout<< sum;

// }

// int main(){
//     int matrix[3][3]={  {1,2,3},
//                         {4,5,6},
//                         {7,8,9}   };

//     digSum(matrix,3);

//     digsum(matrix,3);


//     return 0;
// }



//  searching in sorted matrix

// int brutSearch(int matrx[][4],int n ,int m , int key){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrx[i][j]==key){
//                 cout<<i<<","<<j;
//             }
//         }
//     }

// }

// int main(){
//     int matrix[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,38},{32,33,39,50}};

//     brutSearch(matrix,4,4,33);
//     return 0;
// }

// // Function to perform binary search on a single row
// bool binarySearchRow(int row[], int cols, int target) {
//     int low = 0, high = cols - 1;

//     // Binary Search Logic
//     while (low <= high) {
//         int mid = (low + high) / 2;

//         // If element found
//         if (row[mid] == target)
//             return true;
//         // If target is greater, ignore left half
//         else if (row[mid] < target)
//             low = mid + 1;
//         // If target is smaller, ignore right half
//         else
//             high = mid - 1;
//     }
//     // Element not found in this row
//     return false;
// }






// binarySearch in matrix
// int binarySearchRow(int row[], int cols, int target) {
//     int left = 0, right = cols - 1;

//     while (left <= right) {
//         int mid = (left + right) / 2;

//         if (row[mid] == target)
//             return mid; 
//         else if (row[mid] < target)
//             left = mid + 1; 
//         else
//             right = mid - 1;
//     }

//     return -1; 
// }


// bool rowWiseBinarySearch(int matrix[][4], int rows, int cols, int target) {
//     for (int i = 0; i < rows; i++) {
//         int colIndex = binarySearchRow(matrix[i], cols, target);
//         if (colIndex != -1) {
//             cout << "Target " << target << " found at index: (" << i << ", " << colIndex << ")" << endl;
//             return true;
//         }
//     }

//     cout << "Target " << target << " not found in the matrix." << endl;
//     return false;
// }

// int main() {

//     int matrix[4][4] = {
//         {10, 20, 30, 40},
//         {15, 25, 35, 45},
//         {27, 29, 37, 38},
//         {32, 33, 39, 50}
//     };

//     int target = 33; 

//     rowWiseBinarySearch(matrix, 4, 4, target);

//     return 0;
// }


// stare case problem
// for starting cell top-right

// bool staircaseSearch(int mat[][4],int n ,int m ,int key){
//     int row=0,colm=m-1;
   
//     while(row<n && colm>=0){
//         int cell = mat[row][colm];
//         if (cell==key){
//             cout<<"cell value"<<row<<","<<colm<<"\n";
//             return true;
//         }else if(cell>key){
//             colm--;
//         }else if (cell<key){
//             row++;
//         }
//     }
//     return false;
// }

// int main(){
//     int matrix [4][4] ={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};

//     cout<< staircaseSearch(matrix,4,4,50);

//     return 0;
// }

// for bottom left 

// bool staircaseSearch(int mat[][4],int n ,int m ,int key){
//     int row=n-1,colm=0;
   
//     while(row>=0 && colm<m){
//         int cell = mat[row][colm];
//         if (cell==key){
//             cout<<"cell value"<<row<<","<<colm<<"\n";
//             return true;
//         }else if(cell>key){
//              row--;
//         }else if (cell<key){
//             colm++;   
//         }
//     }
//     return false;
// }

// int main(){
//     int matrix [4][4] ={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};

//     cout<< staircaseSearch(matrix,4,4,33);

//     return 0;
// }


// assignment
// int count1(int mat[][3],int n,int m ,int key){
//     int count =0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(mat[i][j]==key){
//                 count ++;
//             }
//         }
//     }
//     return count;
// }

// int sumRow(int mat[][3],int n , int m){
//     int sum = 0;n=1;

//     for(int i=0;i<m;i++){
//         sum += mat[n][i];
//     }
//     return sum;
// }

// transpose of matrix

// int transpose(int mat[][3],int n, int m){
//     int transpose[m][n];

//     for(int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             transpose[j][i]=mat[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for (int j=0;j<n;j++){
//            cout<< transpose[i][j]<<" ";
//         }
//         cout<<"\n";
//     }

// }

// int main(){
//     // int arr[2][3] ={{4,7,8},{8,8,7}};
//     // cout<<count1(arr,4,4,7);

//     // int nums[3][3]={{1,4,9},{11,4,3},{2,2,3}};
//     // cout<<sumRow(nums,3,3);

//     int arr[2][3]={{2,3,7},{5,6,7}};
//     transpose(arr,2,3);


// }







