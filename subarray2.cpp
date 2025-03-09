//c++ Program to print
// max subarray sum

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n =5;
    int a[5] = {1,2,3,4,5};

    int maxSum = 0;

    for(int st=0; st<n; st++){
        int currSum = 0;
        for(int end=st; end<n; end++){
            currSum += a[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout<<"Max Subarray Sum is : "<<maxSum<<endl;
    return 0;
}