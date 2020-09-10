#include<iostream>
#include<set>
#include<string>




using namespace std;

int main()
 {
	//code
	multiset<char> st;
	multiset<char>::iterator itr;
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    int sum=0;
	    cin>>str;
	    for(int i=0;i<str.size();i++)
	    {
	        if(str[i]>=65)
	        st.insert(str[i]);
	        else
	        sum=sum+(str[i]-'0');
	    }
	    for(itr=st.begin();itr!=st.end();itr++)
	    {
	        cout<<*itr;
	    }
	    cout<<sum<<endl;
	    st.erase(st.begin(),st.end());
	}
	return 0;
}
