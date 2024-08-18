#include<iostream>
using namespace std;

int lowerBound(vector<int>arr, target){

    int n = arr.size();

    int low = 0;
    int high = n -1
    int ans = n;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid]>= target ){
            ans = mid;
            high = mid-1;;
        }
        else
            low = mid+1;
    }
    


}

int main(){
    int arr = [1,2,4,5,6,7,8,9,10];
    int target = 8;
    lowerBound();
}