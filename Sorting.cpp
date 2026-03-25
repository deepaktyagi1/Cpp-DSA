//       -----------Sortings-----------


  //    1.                  ------------Selection Sort-------------


#include <iostream>
using namespace std;

 void sort(int arr[],int n) {

    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

}

void select(int arr[],int n) {

    for (int i=0; i<n-1;i++) {
        int minIndex = i;
    
    for (int j= i+1; j<n;j++) {
        if (arr[j]<arr[minIndex]) {
            minIndex = j;
        }
    }
    swap(arr[minIndex],arr[i]);
}
}

int main() {

    int n= 7;
    int arr[n] = {7,6,5,4,3,2,1};

    select (arr,n);
    sort(arr,n);

    return 0;
}




     //  2.          -----------Bubble Sort--------------
     
     
// using namespace std;
// #include <iostream>

// void sort (int arr[], int  n) {
//     for (int i=0; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
// }

// void bubble (int arr[],int n) {
//     for (int i = 0; i<n-1;i++)  {

//         for (int j=0;j<n-1;j++) {
//             if(arr[j]>arr[j+1]) {
//                 swap(arr[j],arr[j+1]);
//             }

//         }
//     }

// }

//     int main() {

//     int n = 7;
//     int arr[n]= {7,6,5,4,3,2,1};

//     bubble(arr,n);
//     sort(arr,n);

//     return 0;
// }




    //   3.             -------------Insertion Sort------------


// #include <iostream>
// using namespace std;

// void sort(int arr[],int n) {
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
// }

// void inserted(int arr[],int n) {

//     for (int i=1;i<n;i++) {
//         int temp = i;
// int j= i-1;
//         for (;j>=0;j--) {
//             if(arr[j]>temp) {
//                 arr[j+1] = arr[j];
//             }

//             else {
//                 break;
//             }
//         }
//         arr[j+1]= temp;
//     }
// }


// int main() {

//     int n=7;
//     int arr[] = {7,6,5,4,3,2,1};

//     inserted(arr,n);

//     sort(arr,n);


//     return 0;
// }