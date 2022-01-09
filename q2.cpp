#include<iostream>
#include <vector>
using namespace std;
int solution(int arr[], int x, int size)
{
    int cl = INT_MAX;
    for (int i = 0; i < size ; i++) 
    {
        for(int j =i + 1; j < size; j++)
        {
            for(int k =j + 1; k < size; k++)
            {
                if(abs(x - cl) > abs(x - (arr[i] + arr[j] + arr[k])))
                    cl= (arr[i] + arr[j] + arr[k]);
            } 
        }
    }
    return cl;
}
int main()
{
    cout<<"Enter the length of array"<<endl;
    int n;
    cin>>n;
    int nums[n];
    cout<<"Enter the numbers"<<endl;
    for(int i=0;i<n;i++)
        cin>>nums[i];
    cout<<"Enter the target:"<<endl;
    int target;
    cin>>target;
    int closestSum=solution(nums,target,n);
    cout<<"The closest Sum is :"<<closestSum<<endl;
    return 0;
}