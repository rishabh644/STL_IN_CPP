#include<iostream>
#include<unordered_map>


using namespace std;



int main()
 {
	//code
	unordered_map<int,int>mp;
	unordered_map<int,int>::iterator itr;
	int t;
	cin>>t;
	while(t--)
	{
	    int n,vl,count=0;
	    cin>>n;

	    for(int i=0;i<n;i++)
	    {
	        cin>>vl;
	        mp[vl]++;
	    }
	    for(itr=mp.begin();itr!=mp.end();itr++)
	    {
	        if( (itr->second) % 2==0)
	        count+=itr->second;
	        else
	        count+=((itr->second)-1);
	    }

	    cout<<count<<endl;
	    mp.erase(mp.begin(),mp.end());

	}
	return 0;
}
