#include <iostream>
#include<set>

using namespace std;

int main()
{
    cout << "Hello Rishabh I will give my hundred percent " << endl;

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(10);

    set<int>::iterator itr;

    cout<<" The set elements are : "<<endl;

    for(itr=s.begin();itr!=s.end();itr++)
        cout<<*itr<<endl;

    // when 2 is present
    // points to next element after 2
    itr=s.upper_bound(2);
    cout<<"upper_bound of 2 is "<<*itr<<endl;
    // when 2 is present
    // point to 2 in case of lower bound
    itr=s.lower_bound(2);
    cout<<"lower_bound of 2 is "<<*itr<<endl;
  // when 3 is not present
  // upper bound of 3
    itr=s.upper_bound(3);
    cout<<"upper_bound of 3 is "<<*itr<<endl;
    // when 3 is not present
    // lower bound of 3
    itr=s.lower_bound(3);
    cout<<"lower_bound of 3 is "<<*itr<<endl;

   // when key is greater than all element in set
   cout<<endl;
   cout<<endl;
   cout<<endl;
   cout<<"-------------------Looking for lower_bound of 10 in s----------------------"<<endl;

   itr=s.lower_bound(10);
   if(itr!=s.end())
   cout<<" lower_bound of 10 is "<<*itr<<endl;
   else
    cout<<" element is greater than maximum element in set "<<endl;
       cout<<endl;
   cout<<endl;
   cout<<endl;
   cout<<"-------------------Looking for upper_bound of 10 in s----------------------"<<endl;
   itr=s.upper_bound(10);
   if(itr!=s.end())
    cout<<" upper_bound of 10 is "<<*itr<<endl;
   else
    cout<<" element is greater or equal to maximum element in set ";









    return 0;
}
