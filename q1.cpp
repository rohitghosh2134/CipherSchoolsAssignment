#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number of disticnt numbers you want to enter"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the numbers"<<endl;
    int nums[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
        if(nums[i]!=0)
            sum+=nums[i];
    }
    int total=(n+1)*n/2;
    cout<<"The missing number is :"<<(total-sum)<<endl;
    return 0;
}