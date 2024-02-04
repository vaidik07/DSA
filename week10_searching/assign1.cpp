#include <iostream>
using namespace std;

//Q1)
// int main()
// {
//     int arr[8]={1,2,3,3,4,4,4,5};
//     int x=4;
//     int n=8;
//     int low=0;
//     int high=n-1;
//     while(low<=high)
//     {
//         int mid=(low+high)/2;
//         if(mid==x)
//         {
//             if(arr[mid+1]==x)
//             {
//                 low=mid+1;
//             }
//             else{
//                 cout<<mid;
//             }
//         }
//         if(arr[mid]<x)
//         {
//             low=mid;
//         }
//         if(arr[mid]>x)
//         {
//             high=mid+1;
//         }

//     }
// }
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> v(2,-1);
//        int n=nums.size();
//         int low=0;
//     int high =n-1;
//     int first=-1;
    

//             while(low<=high)
//         {
//             int mid=(low+high)/2;
//             if(nums[mid]>target)
//             {
//                 high=mid-1;
//             }
//             if(nums[mid]==target)
//             {
               
//                 if(nums[mid-1]==target)
//                 {
//                     high=mid-1;
//                 }else{first=mid;}
//             }
//             if(nums[mid]<target)
//             {
//                 low=mid+1;
//             }
//         }


//         low=0;
//         high=n-1;
//         int last=-1;
//         while(low<=high)
//         {
//             int mid=(low+high)/2;
//             if(nums[mid]>target)
//             {
//                 high=mid-1;
//             }
//             if(nums[mid]==target)
//             {
               
//                 if(nums[mid+1]==target)
//                 {
//                     low=mid+1;
//                 }else{last=mid;}
//             }
//             if(nums[mid]<target)
//             {
//                 low=mid+1;
//             }
//         }
//        v[0]=first;
//        v[1]=last;
//        return v;
        
        

        
//     }
// };

//Q2)
// int main()
// {
//   int arr[6]={0,0,0,0,1,1};
//   int n=6;
//   int low =0;
//   int high = n-1;
//   int first=-1;
//   while(low<=high)
//   {
//     int mid=(low+high)/2;
//     if(arr[mid]==0)
//     {
//         low=mid+1;
//     }
//     if(arr[mid]==1)
//     {
//         if(arr[mid-1]==1)
//         {
//             high=mid-1;
//         }else{first=mid;
//         break;}
//     }
//   }
//   cout<<n-first<<endl;

// }

//Q3
// int main()
// {
//   int arr[4][4]={{0,1,1,1} , {0,0,1,1} , {1,1,1,1} , {0,0,0,0}};

// }

//Q4)
// int main()
// {
//   int arr[5]={1,2,3,3,4};
//   int n=5;
//   int low=0;
//   int high=n-1;
//    while(low<=high)
//         {
//             int mid=(low+high)/2;
//             if(arr[mid]==arr[mid+1])
//             {
//               cout<<arr[mid];
//             }
//             if(arr[mid]==mid+1)
//             {
//                     low=mid+1;
//             }
//             if(arr[mid]<=mid+1)
//             {
//                 high=mid-1;
//             }
            
//         }



// }
//Q5
//leetcode 69

//Q6
int main()
{
  
}

//LC 852

//LC 33

//LC 633

//LC 1011

//LC 875

//LC 2187