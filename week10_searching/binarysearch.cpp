#include<iostream>
#include <vector>
using namespace std;
//works only when array is sorted
// int main()
// {
//     vector<int> nums;
//     int target=3;
//     int low=0;
//     int n=nums.size();
//         int high =n-1;

//         while(low<=high)
//         {
//             int mid=(low+high)/2;
//             if(nums[mid]>target)
//             {
//                 high=mid-1;
//             }
//             if(nums[mid]==target)
//             {
//                 return mid;
//             }
//             if(nums[mid]<target)
//             {
//                 low=mid+1;
//             }
//         }
//     return -1;
// }


int main()
{
    int nums[13]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n=13;
    int low=0;
    int high =n-1;
    int target=3;
    int mid=(low+high)/2;

            while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>target)
            {
                high=mid-1;
            }
            if(nums[mid]==target)
            {
                if(nums[mid-1]==target)
                {
                    high=mid-1;
                }else{cout<<mid;
                break;}
            }
            if(nums[mid]<target)
            {
                low=mid+1;
            }
        }
    return -1;
}
