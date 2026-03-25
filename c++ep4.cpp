   
   
   
   
   //   1.                 ------------Lenght of String-------------

// #include <iostream>
// using namespace std;

// int size(char arr[]) {

//     int count =0;
//     for(int i=0;arr[i] != '\0';i++){
//         count++;
//     }
//     return count;
// }

// int main() {

// char name[100];

// cout<<"Enter Your Name : ";

// cin>>name;

// cout<<"Your Name is "<<name<<endl;

// cout<<"Lenght : "<<size(name);

//     return 0;
// }




  //   2.                ------------Revese a string--------------


// #include <iostream>
// using namespace std;

// int size(char arr[]) {
//     int count = 0;
//     for(int i=0; arr[i]!= '\0';i++){
//         count ++;
//     }
//     return count;
// }

// void print (char arr[],int n) {
//     for( int i=0;i<n;i++) {
//         cout<<arr[i];
//     }
// }

// void reverse(char arr[],int n) {
//     int s=0;
//     int e=n-1;

//     while(s<=e) {
//         swap(arr[s++],arr[e--]);
//     }
//     print(arr,n);
// }

// int main() {

    
//     char arr[100]= {};
//     cout<<"Enter your elements : ";
//     cin>>arr;
//     int n = size(arr);
//     reverse(arr,n);

//     return 0;
// }




  //  3.              ---------------Check Palindrome------------


// # include <iostream>
// using namespace std;

// int size(char name[]) {
//   int count =0;
//   for(int i=0;name[i]!= '\0';i++) {
//     count ++;
//   }
//    return count;
// }

// bool palindrome(char name[],int n) {
//   int s= 0;
//   int e= n-1;

//   while(s<e) {
//     if(name[s++]!= name[e--]) {
//       return false;
//     }
//   }
//   return true;
// }

// int main() {

// char name[100];

//  cout<<"Enter Your Elements : ";
// cin>>name;

// int n = size(name);

// if(palindrome(name,n)) {
//   cout<<"It is Pallindrome ";
// }
// else{
//   cout<<"It is not pallindrome ";
// }

//   return 0;
// }




  //   4.          --------------Valid Palindrome----------
  
  
// #include<iostream>
// using namespace std;

// bool valid(char ch) { 
//   if (( ch>='a' && ch<='z') || (ch>= 'A' && ch<='Z') || (ch>='0' && ch<= '9') ) {
//     return true;
//   }
//   return false;
// }

// char lower(char ch){
//   if ( ch>= 'A' && ch<='Z'){
//     return ch - 'A' + 'a';
//     }
//     return ch;
// }

//  bool palindrome(char s[]) {
//   char temp[100];
//   int no = 0;

//   for (int i=0;s[i]!='\0';i++) {
//     if(valid(s[i])) {
//       temp[no++] = lower(s[i]); 
//     }
//   }
//   temp [no] = '\0';

//   int start=0;
//   int end= no -1;

//   while(start <end) {
//       if(temp[start++] != temp[end--]) {
//         return false;
//       }
//   }

//     return true;

//   }

// int main() {

//   char s[100];
//   cout<<"Enter String : ";
//   cin.getline(s,100);

//   if(palindrome(s)) {
//     cout<<"It is Pallindrome";
//   }
//   else{
//     cout<<"Not Palindrome";
//   } 

//   return 0;
// }




  //      5.                ---------------Reverse Words in a String--------------
   
   
#include<iostream>
using namespace std;

int main() {



  return 0;
}