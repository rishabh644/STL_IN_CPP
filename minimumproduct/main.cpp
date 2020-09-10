#include<iostream>
#include<set>

using namespace std;

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    multiset<int>mt;
	    multiset<int>::iterator itr;
	    int n,vl;
	    cin>>n;
	    for(int i=0;i<n;i++)
	     {
	         cin>>vl;
	         mt.insert(vl);
	     }
	     itr=mt.begin();
	     cout<< ( (*itr) ) * (*(itr++))<<endl;

	}
	return 0;
}
