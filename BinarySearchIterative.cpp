//Binary Search using iterative methods
#include <iostream>
using namespace std;

int binary_search(int arr[], int x, int low, int high){
    while(low<=high){
        int mid = low + (high-low)/2;
        
        if(x==arr[mid]){
            return mid;
        }
        
        else if(x<arr[mid]){
            high = mid-1;
        }
        
        else{
            low = mid +1;
        }
    }
    
    return -1;
}

int main() {
    // Write C++ code here
    int i, arr[100], n, x;
    std::cout<<"Enter the no. of elements to be entered to the array:";
    cin>>n;
    
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Array you entered is:";
    for(i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    
    cout<<"\nEnter element to be searched:";
    cin>>x;
    
    int result = binary_search(arr, x, 0, n-1);
    
    if(result == -1){
        cout<<"Element you searched is not present in the array";
    }
    else{
        cout<<"Element is present at location:"<<result+1;
    }
    

    return 0;
}