//It's the program when you don't know the number of input elements
//and have to store in a array like structure
//also you don't know the data type of the input elements
//                          FIRST WAY
#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    for(auto ptr = v.begin(); ptr != v.end(); ptr++){
        cout<<*ptr<<" "<<endl;
    }

    cout<<endl;

}