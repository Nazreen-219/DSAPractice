// Maximum subarray Sum 
// Brute Force Approach-> to find  maximum sum of subarray 
// it says that -> find all the subarray and then sabhi ka sum nikal kar compre karlo


#include<iostream>
using namespace std;

int main(){
    int arr[8] = {3,-4,5,4, -1, 7 , -8};
    int length = 8;
    
    int max_sum = INT16_MIN;

    for(int start = 0 ; start<length ; start++ ){
        int curr_sum = 0;
        for(int end = start ;  end<length ; end++){
            curr_sum += arr[end];

        }
        max_sum = max(curr_sum , max_sum);
    }

    cout<<"maximum is "<<max_sum;

    return 0 ;
}