#include <iostream>
#include<unordered_set>
#include<algorithm>


using namespace std;


void print_duplicates(int arr[], int n)
{

    unordered_set<int> st;
    unordered_set<int> duplicates;
    unordered_set<int>::iterator itr;
    for(int i=0;i<n;i++)
    {
        if(st.find(arr[i])==st.end())
            st.insert(arr[i]);
        else
            duplicates.insert(arr[i]);

    }
   // sort(duplicates.begin(),duplicates.end());
    for(itr=duplicates.begin();itr!=duplicates.end();itr++)
        cout<<*itr<<" ";
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

}











int main()
{
    cout << "Hello Rishabh I Will give my 100 percent " << endl;
    int arr[]={1,5,2,1,4,3,1,7,2,8,9,5};
    cout<<"---------------------Elements in array are----------------------"<<endl;
    for(int i:arr)
    {
        cout<<i<<" ";

    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int n=sizeof(arr)/sizeof(int);
    cout<<"---------------------Duplicates Elements in array are----------------------"<<endl;
    print_duplicates(arr,n);












    return 0;
}
