#include<iostream>
#include<unordered_set>

using namespace std;

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,prev,i;
	    unordered_set<int>st;
	    cin>>n;
	    prev=0;
	    cout<<prev<<" ";
	    st.insert(prev);
	    for(i=1;i<n;i++)
	    {
	        if((prev-i)>0)
	        {
	            if(st.find(prev-i)==st.end())
	            {
	                cout<<prev-i<<" ";
	                prev=prev-i;
	                st.insert(prev);
	            }
	             else
	        {
	            prev=prev+i;
	            cout<<prev<<" ";
	            st.insert(prev);
	        }
	         }

	        else
	        {
	            prev=prev+i;
	            cout<<prev<<" ";
	            st.insert(prev);
	        }
	    }

	    cout<<endl;
	}



















	return 0;
}
