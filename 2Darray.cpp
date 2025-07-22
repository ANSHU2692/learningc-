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

void spiralMatrix(int mat[][4],int n,int m){

    int srow = 0 , erow = n-1;
    int sclm = 0 , eclm = m-1;
    
    while (srow<=erow && sclm<=eclm){
          //top

            for(int i=sclm;i<=eclm;i++){
                cout<<mat[srow][i]<<" ";
            }
            //right
            for(int j=srow+1;j<=erow;j++){
                cout<<mat[j][eclm]<<" ";
            }

            //bottom

            for(int i=eclm-1;i>=sclm;i--){
                if(srow==erow){
                    break;
                }
                cout<<mat[erow][i]<<" ";
            }
            //left

            for(int j=erow-1;j>=srow+1;j--){
                  if(sclm==eclm){
                    break;
                }
                cout<<mat[j][sclm]<<" ";
            }


            srow++; sclm++;
            erow--; eclm--;
    }
    

}

  
int main(){

    int matrix[5][4]={  {1,2,3,4},
                        {5,6,7,8,},
                        {9,10,11,12},
                        {13,14,15,16},
                        {14,15,16,17}   };

    spiralMatrix(matrix,5,4);



    
    return 0;
}