#include<iostream>
#include<set>
#include<bits/stdc++.h>



using namespace std;
typedef pair<int, int> pairs;
int main()
 {
	//code

	int t;
	cin>>t;
	while(t--)
	{
	    vector<int>vec;
	    vector<int>::iterator itr;
	    set<pairs>st;
	    int n,i,vl,diff,rqrd;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>vl;
	        vec.push_back(vl);
	    }
	    cin>>diff;
	    for(i=0;i<n;i++)
	    {
	        rqrd=vec[i]-diff;
	        itr=std::find(vec.begin(),vec.end(),rqrd);
	        if(i!=(itr-vec.begin()) && itr!=vec.end())
	        {
	           pairs x=make_pair(vec[i],*itr);
	           st.insert(x);
	        }
	    }
	    cout<<st.size()<<endl;


	}
	return 0;
}
