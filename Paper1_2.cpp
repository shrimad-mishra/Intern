#include<bits/stdc++.h>

using namespace std;

void find_medians(vector<double> arr)
{
	int n = arr.size();
	priority_queue<double> s;
	priority_queue<double,vector<double>,greater<double> > gr;
	
	double mid = arr[0];
	s.push(arr[0]);
	
	cout << mid << endl;
	for (int i=1; i < n; i++)
	{
		double x = arr[i];
		if (s.size() > gr.size())
		{
			if (x < mid)
			{
				gr.push(s.top());
				s.pop();
				s.push(x);
			}
			else
				gr.push(x);

			mid = (s.top() + gr.top())/2.0;
		}
		else if (s.size()==gr.size())
		{
			if (x < mid)
			{
				s.push(x);
				mid = (double)s.top();
			}
			else
			{
				gr.push(x);
				mid = (double)gr.top();
			}
		}
		else
		{
			if (x > mid)
			{
				s.push(gr.top());
				gr.pop();
				gr.push(x);
			}
			else
				s.push(x);

			mid = (s.top() + gr.top())/2.0;
		}

			cout<<"After reading "<<i<<" element median is "<< mid << endl;
	}
}

int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	
	vector<double> v;
	for(int i = 0; i < n; i++)
	{
		int d;
		cin>>d;
		v.push_back(d);
	}
	
	find_medians(v);
	
	return 0;
}
