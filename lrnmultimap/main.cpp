#include <iostream>
#include<map>

#include<algorithm>
//#include<multimap>








using namespace std;

int main()
{
     cout << "Hello Rishabh I will give my hundred percent and put my all effort in multi_map" << endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<"------------------------Sarswati namastubham varde kamarupini vidyaarambham karisyami sidhirbhavti me sada--------------------------------"<<endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;
     cout<<endl;
     multimap<int,int> gquiz1;
     gquiz1.insert(pair<int,int>(7,40));
     gquiz1.insert(pair<int,int>(1,40));
     gquiz1.insert(pair<int,int>(3,90));
     gquiz1.insert(pair<int,int>(0,-89));
     gquiz1.insert(pair<int,int>(4,20));
     gquiz1.insert(pair<int,int>(6,50));
     gquiz1.insert(pair<int,int>(5,50));
     gquiz1.insert(pair<int,int>(5,-30));
     cout<<"--------------------Now printing map gquiz1--------------------------"<<endl;
     map<int,int>::iterator itr;
     cout<<'t'<<"KEY"<<'\t'<<"ELEMENT"<<endl;
     for(itr=gquiz1.begin();itr!=gquiz1.end();itr++)
     {

         cout<<'\t'<<itr->first<<'\t'<<itr->second<<endl;
     }

     // assigning the elements from gquiz1 to gquiz2

     multimap<int,int>gquiz2( gquiz1.begin() , gquiz1.end() );

     cout<<"\n The map gquiz2 after assign from gquiz1 is:\n";
     cout<<"\tKEY\tELEMENT\n";
     for(itr=gquiz2.begin();itr!=gquiz2.end();itr++)
     {
         cout<<'\t'<<itr->first<<'\t'<<itr->second<<endl;
     }
     // remove all elements up to
     // elements with key=3 in gquiz2

     cout<<"\n gquiz2 after removal of elements less than key=3\n";
     gquiz2.erase(gquiz2.begin(),gquiz2.find(3));

     cout<<'\t'<<"KEY"<<'\t'<<"ELEMENTS"<<endl;

     for(itr=gquiz2.begin();itr!=gquiz2.end();itr++)
     cout<<'\t'<<itr->first<<'\t'<<itr->second<<'\n';

     // remove all elements with key=4

     int num;
     num=gquiz2.erase(4);

     cout<<"\n gquiz2.erase(4): "<<num<<" removed \n";

     cout<<'\t'<<"KEY"<<'\t'<<"ELEMENTS"<<endl;

     for(itr=gquiz2.begin();itr!=gquiz2.end();itr++)
     cout<<'\t'<<itr->first<<'\t'<<itr->second<<'\n';

     // lower bound and upper bound for map gquiz1 key =5

     cout<<" gquiz1.lower_bound(5) : "<<endl;

     cout<<"\tKEY= "<<gquiz1.lower_bound(5)->first<<'\t';
     cout<<"\tELEMENT= "<<gquiz1.lower_bound(5)->second<<'\t'<<endl;

     cout<<" gquiz2.upper_bound(5) : "<<endl;
     cout<<"\tKEY= "<<gquiz1.upper_bound(5)->first<<'\t';
     cout<<"\tELEMENT= "<<gquiz1.upper_bound(5)->second<<'\t';
     //cout<<gquiz2[5]<<endl;
     cout<<gquiz2.find(5)->first<<" "<<gquiz2.find(5)->second<<endl;
    return 0;
}

