            //    ** Binary Search **    // 1. find Pivot in array  2. Search in rotated array  3. Sqr root using BinarySearch 


            //     ----------**Binary Search**-----

// #include <iostream>
// using namespace std;

// int binary (int arr[],int n, int target) {
//     int s=0;
//     int e=n-1;

//     int mid = (s+e) /2;

//     while(s<=e) {
//         if (arr[mid] == target) {
//             return mid;
//         }
//         if (arr[mid] > target) {
//             e = mid - 1;
//         }
//         else {
//             s = mid +1;
//         }
//         mid = (s+e) / 2;
//     }
//     return -1;
// }


// int main() {
//     int n= 5;
//     int arr[n] = {2,4,6,8,10};
//     int target = 2;

//     cout<<"Target Index : "<<binary(arr,n,target);

//     return 0;
// }




//          1. ----------1st and last position of elemnt in sorted array ----------

// #include <iostream>
// using namespace std;

// int first(int arr[],int n,int key) {
//     int s=0;
//     int e =n-1;
//     int mid = (s+1) / 2;
//     int ans =-1;

//     while (s<=e) {
//         if (key == arr[mid]) {
//             ans = mid;
//             e = mid -1;
//         }
//         if (key > arr[mid]) {
//             s = mid +1;
//         }
//         else {
//             e = mid -1 ;
//         }
//         mid = (s+e) / 2;
//     }
//     return ans;
// }

// int last(int arr[],int n,int key) {
//     int s=0;
//     int e =n-1;
//     int mid = (s+e) / 2;
//     int ans =-1;

//     while (s<=e) {
//         if (key == arr[mid]) {
//             ans = mid;
//             s = mid +1;
//         }
//         else if (key > arr[mid]) {
//             s = mid +1;
//         }
//         else {
//             e = mid -1 ;
//         }
//         mid = (s+e) / 2;
//     }
//     return ans;
// }

// int main() {
//     int n = 8;
//     int arr[8] = {1,2,3,3,3,3,4,5};
//     int key = 3;

//     cout<<"First element index is  : "<<first(arr,n,key)<<endl;
//     cout<<"last element index is  : "<<last(arr,n,key);


//     return 0;
// }




            //        2. -------Total No. of Occurence------


// #include <iostream>
// using namespace std;

//  int first(int arr[],int n,int key) {

//     int s=0;
//     int e = n-1;
//     int mid = (s+e)/2;
//     int ans = -1;

//     while (s<=e){
//         if (key== arr[mid]) {
//             ans = mid;
//             e = mid -1;
//         }
//         if (key > arr[mid]) {
//             s = mid+1;
//         }
//         else {e = mid -1; }
//        mid = (s +e) /2;
//     }
//     return ans;
// }

//  int last(int arr[],int n,int key) {

//     int s=0;
//     int e = n-1;
//     int mid = (s+e)/2;
//     int ans = -1;

//     while (s<=e){
//         if (key== arr[mid]) {
//             ans = mid;
//             s = mid +1;
//         }
//         else if (key > arr[mid]) {
//             s = mid+1;
//         }
//         else {e = mid -1; }
//        mid = (s +e) /2;
//     }
//     return ans;
// }

// int main() {
//     int n = 8;
//     int arr[] = {1,2,3,3,3,3,4,5};
//     int key = 3;


//     cout<<"Total No. Occurence : "<<(last(arr,n,key) - first(arr,n,key) + 1 );

//     return 0;
// }




          // 3.      -------Find peak in mountain in array-------


// # include <iostream>
// using namespace std;

// int peak(int arr[], int n) {
  
// int s=0;
// int e =n-1;

// int mid = (s+e) /2;

// while ( s<e) {
//   if ( arr[mid] < arr[mid +1] ) {
//       s= mid +1;
//   }
// else {
//   e = mid ;
// }
// mid = (s +e) /2;
// } 
// return e;
//  }

//  int main () {
//   int n= 10;
//   int arr[n] = {24,69,100,99,79,78,67,36,26,19};

//   cout<<"Peak Array : "<<peak(arr,n);


//  return 0;
//  }
        
        
        

        // 4.     ----------Find Pivot in an Array ----------



// #include <iostream>
// using namespace std;

// int pivot(int arr[],int n) {

//       int s=0;
//       int e=n-1;

//       int mid = (s+e) / 2;

//       while (s<e) {
//             if (arr[mid]>= arr[0]) {
//                   s= mid +1;
//             }
//       else {
//             e= mid;
//       }
//       mid = (s+e) / 2;
//       }
//       return e;
// }

// int main() {

//       int arr[] = {7,8,9,1,2,3};

//       cout<<"Pivot Index is : "<<pivot(arr,5);

//       return 0;
// }





           //  5.     ----------Search in Rotated Sorted  Array ------------ 



// #include <iostream>
// using namespace std;

// int pivot(int arr[],int n) {
//     int s=0;
//     int e= n-1;

//     int mid = (s+e) / 2;

//     while (s<e) {
//         if(arr[mid]>= arr[0]){
//             s= mid +1;
//         }
//         else{
//             e=mid;
//         }
//      mid = (s+e)/2;
//     }

// return s;
// }

// int binary(int arr[], int s,int e, int target ) {

//     int start = s;
//     int end = e;

//     int mid = ( start+ end) / 2;
    
//     while (start<=end){
//         if (target == arr[mid]) {
//             return mid;
//         }
//         if (target<arr[mid]) {
//             end = mid -1;
//         }
//         else {
//             start= mid +1;
//         }
//         mid = ( start+end ) / 2;
//     }
//     return -1;
// }

// int search (int arr[],int n, int target ) {

//     int p = pivot(arr,n);
//     if (target >= arr[p] && target <= arr[n-1]) {
//        return binary(arr,p,n-1,target);
//     }
//     else{
//       return binary(arr,0,p-1,target);
//     }

// }
    
// int main () {

//     int arr[] = {7,8,1,3,5};
//     int target = 8;

//    cout<<"Target Index is : "<<search(arr,5,target);

//     return 0;
// }




    //                6.    ----------Sqr root using Binary Search ----------


// # include <iostream>
// using namespace std;

// float binary(int target) {
//     float s=0.0;
//     float e=target;

//     float mid = (s+e) /2.0;

//     float ans = -1;

//     while (s<=e) {
//         float square = mid*mid;

//         if(square == target) {
//             return mid;
//         }
//         if (target > square) {
//             ans = mid;
//             s= mid +1;
//         }
//         else{
//             e= mid -1;
//         }
//         mid = (s +e) /2.0;
//     }
//     return ans;
// }

// float sqrroot(int target) {
//     return binary(target);
// }

// int main(){
//     float n;
//     float arr[] = {};

//     float target;
//     cout<<"Enter Square root value : ";
//     cin>>target;


//     cout<<sqrroot(target);

//     return 0;
// }