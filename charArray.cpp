#include<iostream>
#include <cstring>
#include <string>

using namespace std;

// int main(){
//     //  index of alphabets
//     // char ch='c';
//     // int position1=ch-'a';
//     // cout<< position1<<"\n"; 
//     // char ch1='G';
//     // int position2=ch1-'A';
//     // cout<< position2; 
//     // char str[5]={'a','b','c','d','e'};
//     // cout<<str<<endl; // in int arr we get address but in char arr we get whole value 
//     // char work[]="code";
//     // cout<<work<<endl;
//     // cout<< strlen(work)<<endl;
//     // char str1[5]="code";
//     // cout<<str<<endl;
//     // char str2[]={'c','o','d','e','\0'};
//     // cout<<str2<<endl;
//     // char str3[50]={'c','o','d','e','\0'};
//     // cout<<str3<<endl;
//     // char work[30];
//     // cin>>work;      //ignore whitespaces
//     // cout<<"the word enter is :"<<work<<endl;
//     // cout<<strlen(work);
//     // char work[30];
//     // cin.getline(work,30,'.');     
//     // cout<<"the word enter is :"<<work<<endl;
//     // cout<<strlen(work);
//     return 0;
// }
// to upper case
// void Toupprecse(char str[],int n){
//     for(int i=0;i<n;i++){
//         char ch =str[i];
//         if(ch>='A' && ch<='Z'){
//             continue;
//         }else{
//             str[i]=ch-'a'+'A';
//         }
//     }

// }
// int main(){
//     char word[]="ApPle";
//     Toupprecse(word,strlen(word));
//     cout<<word;

// }
//to lower case
// void Tolowercase(char str[],int n){
//     for(int i=0;i<n;i++){
//         char ch =str[i];
//         if(ch>='a' && ch<='z'){
//             continue;
//         }else{
//             str[i]=ch-'A'+'a';
//         }
//     }

// }
// int main(){
//     char word[]="ApPle";
//     Tolowercase(word,strlen(word));
//     cout<<word;

// }

// void revcharr(char str[],int n){
//     int start=0;
//     int end=n-1;

//     // while (start<end)
//     // {
//     //     char temp=str[start];
//     //     str[start]=str[end];
//     //     str[end]=temp;
//     //     start++;
//     //     end--;
//     // }
//     while (start<end)
//     {
//         swap(str[start],str[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     char word[5]="code";
//     revcharr(word,strlen(word));
//     cout<<word;
// }


// bool ispalendrome(char str[],int n){
//     int start=0;
//     int end=n-1;

//     while(start<end){
//         if(str[start] != str[end]){
//              cout<<"it is a not palandrome";
//              return false;
//         }start++;
//         end--;   
//     }

//     cout<<"it is palandrome";
//     return true;
// }
// int main(){
//     char word[]="abbabbba";

//     ispalendrome(word,strlen(word));

// }


//int main(){
    //     char str[50];
    //     strcpy(str,"apple");
    //     char str1[]="anshu;
    //     char str2[]="gour";
    //     strcat(str1,str2);
    //    cout<< strcmp(str1,str2)<<endl;
    // cout<< str1;
// string str = "my name is anshu gour!";
// getline(cin,str);
// cout<<str;
// cout<<str.length();
// for(int i=0;i<str.length();i++){
//     cout<<str[i]<<"-";
// }
// for(char ch: str){
//      cout<< ch << "-";   
//     }
// cout<< str.at(5)<<"\n";
// cout<< str.substr(2,5)<<"\n";
// cout<<str.find("anshu");
//}

// valid anagarm.
// bool isvalid(string str1,string str2){
//     if(str1.length() != str2.length()){
//         cout<<"not a valid anagarm!";
//         return false;
//     }
//     int count[26]={0};

//     for(int i=0;i<str1.length();i++){ 
//        count[str1[i]-'a']++;
//     }

//     for(int i=0;i<str2.length();i++){
//         if(count[str2[i]-'a']==0){
//             cout<<"not a valid anagram!";
//             return false;
//         }
//         count[str2[i]-'a']--;
//     }
//     cout<<"valid anagram";
//     return true;
// }
// int main(){
//     string str1="car";
//     string str2="rac";

//     isvalid(str1,str2);

//     return 0;
// }


// void checkvovel(string str){
//     int count=0;
//     for(int i=0;i<str.length();i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//             count++;
//         }
//     }
//     cout<< count;
// }

// int main(){
//     string str = "my name is anshu gour";

//     checkvovel(str);

//     return 0;
// }





// bool areAlmostEqual(string s1, string s2) {
//     if (s1.length() != s2.length()) {
//         return false; // Strings of different lengths can't be made equal by a swap
//     }

//     char diffChar1, diffChar2;
//     int diff = 0;

//     for (int i = 0; i < s1.length(); i++) {
//         if (s1[i] != s2[i]) {
//             if (diff == 0) {
//                 // First mismatch — store the mismatched characters
//                 diffChar1 = s1[i];
//                 diffChar2 = s2[i];
//             } else {
//                 // Second mismatch — check if swapping would fix the mismatch
//                 if (s1[i] != diffChar2 || s2[i] != diffChar1) {
//                     return false;
//                 }
//             }
//             diff++;

//             // More than 2 mismatches means we can't fix with one swap
//             if (diff > 2) {
//                 return false;
//             }
//         }
//     }

//     // Only two mismatches can be fixed with one swap; one mismatch is not enough
//     if (diff == 1) {
//         return false;
//     }

//     return true;
// }

// int main(){
//     string s1="bank";
//     string s2="kanb";

//      if (areAlmostEqual(s1, s2)) {
//         cout << "True\n"; // Expected output: True
//     } else {
//         cout << "False\n";
//     }

//     return 0;
// }




 

