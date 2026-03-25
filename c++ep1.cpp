          // 1. Linear Search ,2. Reverse Array , 3. Binary Search ,4. sum of array, 5. Swap Alternate
    



    //1.    ------------Linear Search--------



// #include <iostream>
// using namespace std;

// bool linearsearch(int arr[],int size,int key) {
//   for (int i=0;i<size;i++ ) {
//     if (arr[i] == key) {
//       return 1; } }
//       return 0;
//     }

//     int main() {

//       int arr[6] = {1,2,3,4,5,6};
//       bool result = linearsearch(arr,6,3);

//       if (result) {
//         cout<<"Item is found"<<endl;
//       }

//       else{cout<<"ItemS not Found"<<endl;}

      

//       return 0;
//   }




          // 2.   ------------Reverse Array ----------



// #include <iostream>
// using namespace std;

// void printarray(int arr[],int size) {
//     for (int i=0;i<size;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// } 

// void revarray(int arr[],int size) {
//     int start =0;
//     int end =size-1;
    
//     while(start<=end) {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }


// int main() {

//     int arr[6]={1,2,3,4,5,6};

//     revarray(arr,6);

//     printarray(arr,6);


//     return 0;
// }




         // 3.   -------------Binary Search---------



// #include <iostream>
// using namespace std;

// int binsearch(int arr[],int n,int target){
//     int start =0;
//     int end= n-1;
    
//     int mid= (start +end) /2;
//     while (start<=end) {
//         if(arr[mid]==target) {
//             return mid;
//         }
//         if(target>arr[mid]) {
//             start=mid+1;
//         }
//         else{ end =mid-1; }
//         mid =(start+end) / 2;
//     }
//     return -1;
// }
// int main() {
//     int n=6;
//     int arr[n] ={11,21,31,41,51,61};

//     int target = 61;

//     cout<<"Searched Index value : "<<binsearch(arr,n,target);


//     return 0;
// }




     //4.  ---------sum of array ------------



// #include <iostream>
// using namespace std;

// int sum(int arr[],int n) {
//     int sum =0;
//     for (int i=0;i<n;i++) 
//         sum += arr[i];
    
//     return sum;
// }

// int main () {
//     int arr[] = {50,50};

//     int n=sizeof(arr)/sizeof(arr[0]);

//    cout<<"Sum of Array : "<<sum(arr,n);

//     return 0;
// }




       // 5. --------Swaap Alternates ----------



// #include <iostream>
// using namespace std;

// void swap(int arr[],int n) {
//       for(int i=0;i<n;i+=2){
//             if(i+1<n) {
//                   int temp=arr[i];               //otherwise 
//                   arr[i]=arr[i+1];                 // we use a swap(arr[i],,arr[i+1]) function
//                   arr[i+1]=temp;
//             }
//       }
// }

// void print(int arr[],int n){
//       for(int i=0;i<n;i++) {
//             cout<<arr[i]<<" ";
//       }
// }

// int main() {
      
//       int even[6] = {7,9,21,11,61,7};
//       int odd[7] = {2,1,7,5,9,8,1};

//       swap(odd,7);
//       print(odd,7);


      
//       return 0;
//       }




      //6.  ----------------Find and Print Unique Eliment -------- 



// #include <iostream>
// using namespace std;

// int result = 0;

//  int unique(int arr[],int size) {
//       for (int i=0;i<size;i++) {
//          result = result^arr[i];
      
//       }
//    return result;
//  }

// int main() {
//       int arr[] = {1,1,2,2,4,3,4};

//       cout<<unique(arr,7);

// return 0;
// }




          // 7. -----------------Find and print Duplicate Element -------------


// #include <iostream>
// using namespace std;


// int duplicate(int arr[],int size) {

// int result = 0;
//       for (int i=0;i<size;i++) {
//             result = result^arr[i];                    
//       }
       
//       for (int i=1; i<size; i++) {
//             result = result^i;                          
//       }
// return result;
      
// }

// int main () {

//       int arr[] ={6,3,1,5,4,3,2};

//       cout<<duplicate(arr,7);
      
//     return 0;
// } 




          // 8.   ------------Intersection of Array----------


// # include <iostream>
// #include <climits>
// using namespace std;



//       int inter(int arr1[],int arr2[],int n,int m) {
//             int element = 0;
//             for (int i=0;i<n;i++) {
//       for (int j=0;j<m;j++) {
//             if (arr1[i] == arr2[j]){
//                   cout<<arr1[i];
//                   element ++;
//                   arr2[j]= INT_MIN;
//                   break; }
            
//             }
//       }
//       cout<<endl;
//       return element;
//       }

//       int main() {
//             int arr1[] = {2,2,3};
//             int arr2[] = {3};

//             cout<<"No. of intersected elements: "<<inter(arr1,arr2,3,1);


//    return 0;
// }




           // 9.  ------------------Sort 01  in array------------- 


// #include <iostream>
// #include <algorithm>
// using namespace std;

//   void print(int arr[],int n) {
//       for (int i=0; i<n;i++) {
//             cout<<arr[i]<<" ";
//       }
//       cout<<endl;
//   }

//   void sort(int arr[],int n) {

//       int i=0;
//       int j=n-1;

//       while(i<j) {
//             while(arr[i] == 0 && i<j) {
//                   i++;
//             }
//             while(arr[j]== 1 && i<j) {
//                   j--;
//             }

//       swap(arr[i],arr[j]);
//       i++;
//       j--;

//       }
// }


// int main() {

//       int arr[8] = {1,1,0,0,0,0,1,0};

//       sort(arr,8);
//       print(arr,8);

//       return 0;
// }