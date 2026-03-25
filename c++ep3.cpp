  
  
  //     1.               -------------Reverse an Array----------


#include <iostream>
using namespace std;

void print(int arr[],int n) {
    for (int i=0;i<n;i++) {
          cout<<arr[i]<< " ";
    }
}

void reverse (int arr[],int n) {
    int s = 0;
    int e = n-1;

    while (s<=e) {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

}

int main() {

int n = 5;
int arr[n]= {9,2,5,9,1};

reverse(arr,n);
print(arr,n);

    return 0;
}




  //    2.              -------------Merge 2 sorted array-------------


#include <iostream>
using namespace std;

void print(int arr3[],int n) {
    for (int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
}

void merge(int arr1[],int n,int arr2[],int m,int arr3[]) {
    int i=0;
    int j=0;

    int k=0;

    while (i<n && j<m){
        if (arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }

        else{
            arr3[k]= arr2[j];
            k++;
            j++;
        }
    }

    while (i<n) {
            arr3[k]= arr1[i];
            k++;
            i++;
        }
        while (j<m){
            arr3[k]= arr2[j];
            k++;
            j++;
        }
    }

int main () {

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    int arr3[8];

    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);

    return 0;
}




   //   3.         ----------Moving Zeroes----------- 


#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
}


void moving(int arr[],int n) {
    int i=0;

   for( int j=0; j<n;j++) {
    if(arr[j]!=0) {
        swap(arr[i],arr[j]);
        i++;
    }
   }
}


 
int main(){

int arr[7] = {2,0,1,3,0,0,0};

moving(arr,7);
print(arr,7);

    return 0;
}


    // 4.       --------------Rotate Array--------------


#include <iostream>
using namespace std;

void rotate (int arr[],int n, int k) {

   int temp[n];

   for (int i=0;i<n;i++){
    temp[(i+k)%n]=arr[i]; }

    for (int i=0;i<n;i++) {
   
   arr[i] = temp [i];
}
}


void print (int arr[],int n){
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }

}


int main() {
  int n =4;
   int arr[n]= {13,14,11,12};
   int k=2;

   rotate(arr,n,k);
   print(arr,n);

  return 0;
}




   //  5.         ----------Check if sorted and rotated array-------------


#include<iostream>
using namespace std;

bool check(int arr[],int n) {

  int count =0;

  for(int i=1;i<n;i++) {
    if(arr[i-1]>arr[i]){
      count++;
  } 
}

  if(arr[n-1]>arr[0]) {
    count++;
  }
  return count <= 1;
  
}

int main() {

int n;
cout<<"Enter your No. of elements : ";
cin>>n;

int arr[n] = {};

cout<<"Enter Your Values : " ;

for (int i=0;i<n;i++) {
  cin>>arr[i];
}

              /*[   if(check(arr,n)){
                 cout<<"Yes, array is sorted or rotated";
                 }
                 else{
                cout<<"No , array in not ";
                 }    ] */

cout<<check(arr,n);

  return 0;
}




     //  6.                --------------Add two Array---------------


# include<iostream>
using namespace std;

void reverse(int ans[],int size) {
  int s= 0;
  int e = size-1;

  while (s<=e) {
    swap(ans[s],ans[e]);
    s++;
    e--;
  }
}

void print(int ans[],int size) {

 for(int i=0;i<size;i++) {
    cout<<ans[i];
  }
}


void adding(int arr1[],int n,int arr2[],int m) {
  
  int i=n-1;
  int j=m-1;

  int carry =0;
  int k=0;

  int size = max(n,m) +1;
  int ans[size]= {0};


  while (i>=0 && j>=0) {

    int sum = arr1[i] + arr2[j] + carry;
    carry = sum/10;
    sum = sum % 10;

    ans[k++] = sum;

    i--;
    j--;
  }

  // case 2

  while (i>=0) {
    int sum = arr1[i] + carry;
    carry = sum /10;
    sum = sum % 10 ;
    ans[k++] = sum;
    i--;
  }

  // case 3

  while (j>=0) {
    int sum = arr2[j] + carry;
    carry = sum/10;
    sum = sum % 10;
    ans[k++] = sum;
    j--;
  
  }

  // case 4

  while (carry != 0) {
    int sum = carry;
    carry = sum /10;
    sum = sum % 10;
    ans[k++] = sum;
  
  }
  reverse(ans,k);
  print(ans,k);

}


int main() {

  int n = 2;
  int arr1[n] = {1,0};

  int m = 4;
  int arr2[m] =  {9,9,9,0};
  
  adding(arr1,n,arr2,m);

  return 0;
}
