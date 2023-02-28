#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

int *selectionSort(int *A, int n) {
  for (int i = 0; i < n - 1; i++) {
    int iMin = i;
    for (int j = i + 1; j < n; j++) {


      if (A[i] < A[iMin])
        iMin = j;
    }


    swap(A[iMin], A[i]);
  }
}

void merge(int arr[], int start, int mid, int end){
    int n1 = mid - start + 1;
    int n2 = end - mid;


    int left[n1], right[n2];


    for(int i=0; i<n1; i++){
        left[i] = arr[start + i];
    }
    for(int j=0; j<n2; j++){
        right[j] = arr[mid + 1 + j];
    }


    int i=0;
    int j=0;
    int k=start;

    while (i<n1 && j<n2){
        if(left[i] <= right[j]){
            arr[k++] = left[i++];
        }
        else{
            arr[k++] = right[j++];
        }
    }


    while (i < n1){
        arr[k++] = left[i++];
    }


    while(j < n2){
        arr[k++] = right[j++];
    }
}


int *mergeSort(int *A, int start, int end){
    if(start < end){
        int mid = (start + end)/2;


        mergeSort(A, start, mid);
        mergeSort(A, mid + 1, end);


        merge(A, start, mid, end);
    }
}
int main()
{
    int k=100000;

    int *a = new int[k];

    freopen("in.txt","r",stdin);
    for(int i=0; i<k; i++)
    {
        cin>>a[i];
    }


    auto start1 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    /*  ..........Change your algorithm...............*/
    cout<<selectionSort(a,k)<<endl;
    /* .......................................  */


    /*.....................Time taken by 1st Algorithm........................*/
    auto end1 = chrono::high_resolution_clock::now();
    double time_taken1 =chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
        time_taken1 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken1 << setprecision(9);
    cout << " sec" << endl;

    /*.....................End of Time taken by 1st Algorithm........................*/

     sort(a,a+k);

    auto start2 = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);



    /*  ..........Change your algorithm...............*/
    cout<<mergeSort(a,0,k-1)<<endl;
    /* .......................................  */


    /*.....................Time taken by 2nd Algorithm........................*/
    auto end2 = chrono::high_resolution_clock::now();
    double time_taken2 =chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count();
        time_taken2 *= 1e-9;
    cout << "Time taken by program is : " << fixed
         << time_taken2 << setprecision(9);
    cout << " sec" << endl;

    /*.....................End of Time taken by 2nd Algorithm........................*/


    return 0;
}

