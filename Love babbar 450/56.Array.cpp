//cyclically reversing the array by 1 position
#include<iostream>
using namespace std;

void Rotate_array(int arr[], int n){

    int last_element = arr[n-1];
    
    for(int i=n-2 ; i>=0; i--){
        arr[i+1] = arr[i];
    }
    
    arr[0] = last_element;

}

int main(){

    int arr[] = {1,2,3,4,5};

    int n = sizeof(arr);

    Rotate_array(arr, n);

    for(int i = 0; i < n; i++){

        cout<<arr[i]<<endl;

    }
    return 0;
}