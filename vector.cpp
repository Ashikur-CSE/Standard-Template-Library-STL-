#include<bits/stdc++.h>
using namespace std;
int main(){
    //vecyor declaration
    vector <int>vc;
    //add value in vector
    vc.push_back(2); //vc[0]
    vc.push_back(4);//vc[1]
    vc.push_back(6);//vc[2]
    vc.push_back(8);
    vc.push_back(12);
    vc.push_back(14);
    vc.push_back(16);
    vc.push_back(18);

    //print vector value
    cout<<vc[0]<<" "; 
    cout<<vc[1]<<" ";
    cout<<vc[10]<<endl;//out of range hole 0 or random value dibe

   cout<<vc.at(2)<<endl;
   //cout<<vc.at(10)<<endl;//out of range hole error dibe 

    //size
    cout<<"Size is:"<<vc.size()<<endl;
    
    //1st value of a vector
    cout<<"First element of this vector: " << vc.front()<<endl;

    //last value of a vector
    cout<<"Last element of this vector: "<<vc.back()<<endl;

    //We can clear vector 
    //vc.clear()


    //Check empty or not
    if (vc.empty()){
        cout<<"Empty Vector"<<endl;
    }else{
        cout<<"Not Empty Vector"<<endl;
    }

    //Remove Last value of vector
    vc.pop_back();
    for(int i = 0; i<vc.size();i++){
        cout<<vc[i]<<" ";
    }
    cout<<endl;

    //erase value
    vc.erase(vc.begin()+4,vc.end());
    cout<<"After Erase"<<endl;
    for(int i = 0; i<vc.size();i++){
        cout<<vc[i]<<" ";
    }
    cout<<endl;

    //insert() value
    vc.insert(vc.begin()+2,2,3); //koto index a, koto bar, value ki....
    cout<<"After Insert:"<<endl;
    for(int i = 0; i<vc.size();i++){
        cout<<vc[i]<<" ";
    }

    //swap two vector
    vector<int>v2;
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(4);
    cout<<endl;
    cout<<"Before swap:"<<endl;
    for(int i = 0; i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<vc.size();i++){
        cout<<vc[i]<<" ";
    }

    cout<<endl;
    cout<<"After Swap:"<<endl;
    swap(vc,v2);
    for(int i = 0; i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<vc.size();i++){
        cout<<vc[i]<<" ";
    }
      cout<<endl;

    //SOrt()
    sort(v2.begin(),v2.end());
    cout<<"After sort:"<<endl;
    for (int i = 0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

    cout<<endl;

    //Reverse::
    cout<<"Reverse:"<<endl;
    reverse(v2.begin(),v2.end());
      for (int i = 0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

    cout<<endl;

    //Iteration
    cout<<"Iteration:"<<endl;
    vector<int>::iterator it;
    it=v2.begin();
    for(it =v2.begin(); it!=v2.end(); it++){
        cout<<*it<<endl;
    }


    


    return 0;
    }