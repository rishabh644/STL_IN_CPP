#include <iostream>
#include<unordered_map>

using namespace std;

int main()
{
   /* cout << "Hello world!" << endl;
    unordered_map<string,int> umap;
    // inserting values by using[] operator
    umap["GeeksforGeeks"]=10;
    umap["Practice"]=20;
    umap["Contribute"]=30;
    for(auto x:umap)
        cout<<x.first<<" "<<x.second<<endl;*/
    unordered_map<string,double> umap;
    // inserting values by using[] operator
    umap["PI"]=3.14;
    umap["root2"]=1.414;
    umap["root3"]=1.732;
    umap["log10"]=2.302;
    umap["loge"]=1.0;
    // inserting value by insert function
    umap.insert(make_pair("e",2.718));
    string key="PI";

    // If key not found in map iterator to end is returned
    if(umap.find(key)==umap.end())
        cout<<" not found \n\n "<<endl;
    else
        cout<<" Found "<<key<<"\n \n"<<endl;
    key="lambda";
    if(umap.find(key)==umap.end())
        cout<<key<<" not found "<<endl;
    else
        cout<<" Found "<<key<<endl;
    // iterating over all value of umap

    unordered_map<string,double>::iterator itr;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\n ------------------------All Elements : ----------------------\n";

    for(itr=umap.begin();itr!=umap.end();itr++)
    {

        // itr works as a pointer to pair(string,double)
        // type itr-> first stores the key part
        // type itr->second stores the values part
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    umap["Rishabh"]=999;
    cout<<"\n ------------------------All Elements : ----------------------\n";
    for(itr=umap.begin();itr!=umap.end();itr++)
    {

        // itr works as a pointer to pair(string,double)
        // type itr-> first stores the key part
        // type itr->second stores the values part
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<umap["ishabh"]<<endl;
     cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
     cout<<"\n ------------------------All Elements : ----------------------\n";
    for(itr=umap.begin();itr!=umap.end();itr++)
    {

        // itr works as a pointer to pair(string,double)
        // type itr-> first stores the key part
        // type itr->second stores the values part
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<umap.size()<<endl;
    umap.erase("ishabh");
    cout<<endl;
    cout<<endl;
    cout<<endl;
     cout<<"\n ------------------------All Elements : ----------------------\n";
    for(itr=umap.begin();itr!=umap.end();itr++)
    {

        // itr works as a pointer to pair(string,double)
        // type itr-> first stores the key part
        // type itr->second stores the values part
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<umap.size()<<endl;
    return 0;
}
