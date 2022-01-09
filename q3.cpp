#include<iostream>
using namespace std;
int maxmoney(int *a, int n)
{
    if (n == 0)
        return 0;
    int value1 = a[0];
    if (n == 1)
        return value1;
    int value2 = max(a[0], a[1]);
    if (n == 2)
        return value2;
    int max_val;
    for (int i=2; i<n; i++)
    {
        max_val = max(a[i]+value1, value2);
        value1 = value2;
        value2 = max_val;
    }
    return max_val;
}
int main()
{
    cout<<"Enter the Number of Houses"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the Money stored in each house"<<endl;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int maxloot=maxmoney(nums,n);
    cout<<"The Maximum loot is :"<<maxloot<<endl;
    return 0;
}