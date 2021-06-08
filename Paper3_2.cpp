#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[], int start, int end)
{
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void rotate(int arr[], int d, int n)
{
	if (d == 0)
		return;
	d = d % n;
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
}

int main()
{
    int n,d,i;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the value of the rotations"<<endl;
    cin>>d;
    int arr[n];
    
    cout<<"Enter the array"<<endl;
    for(i = 0; i < n; i++)
        cin>>arr[i];
        
	rotate(arr, d, n);
	for(i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

	return 0;
}
