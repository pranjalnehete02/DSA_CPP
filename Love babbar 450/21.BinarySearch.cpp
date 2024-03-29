#include<iostream>
using namespace std;

int peakofmountaininarray(int arr[], int size){
    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;

    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else {
            end  = mid;
        }
        mid = (start + end)/2;
    }
    return start;
}

int main(){
    int array[7] = {1,2,3,4,3,2,1};

    int index = peakofmountaininarray(array,7);
    cout<<index<<endl;
    return 0;
}