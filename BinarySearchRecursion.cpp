//Binary Search using recursion
#include <iostream>
using namespace std;

int binary_search(int arr[], int x, int low, int high){ //Function to do binary search
    while(low<=high){
        int mid = low + (high-low)/2;
        
        if(x==arr[mid]){
            return mid;
        }
        
        else if(x<arr[mid]){
            return binary_search(arr, x, low, mid-1);
        }
        
        else{
            return binary_search(arr, x, mid+1, high);
        }
    }
    
    return -1; //Returns -1 as the element searched is not found
}

int main() {
    int i, arr[100], n, x;
    std::cout<<"Enter the no. of elements to be entered to the array:";
    cin>>n; //Entering length of array
    
    for(i=0; i<n; i++){
        cin>>arr[i]; //Entering elements in the array
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