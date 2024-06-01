#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
string mytext;
ifstream myreadfile("op.txt");
while(getline(myreadfile,mytext)){
    cout<<mytext;
}
myreadfile.close();
}