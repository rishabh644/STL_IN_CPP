#include<iostream>
#include<unordered_map>

using namespace std;



int main()
 {
	//code
	int t,n,maxx,i;
	string s;
	cin>>t;

	while(t--)
	{   unordered_map<string,int>ump;
	    unordered_map<string,int>::iterator itr;
	    cin>>n;
	    maxx=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>s;
	        ump[s]++;
	    }
	    for(itr=ump.begin();itr!=ump.end();itr++)
	    {
	        if( maxx < (itr->second) )
	         {
	             s=itr->first;
	             maxx=itr->second;
	         }
	        else if((maxx==itr->second) && (s>itr->first))
	        s=itr->first;

	    }

	    cout<<s<<" "<<maxx<<endl;

	}
	return 0;
}
