#include<bits/stdc++.h>
using namespace std;
class student{
private:
string name;
int rollno;
int std;

public:
void setvalues(string n,int r,int s){
    name=n;
    rollno=r;
    std=s;
}
void getvalues(){
    cout<<name<<" "<<rollno<<" "<<std<<endl;
}
};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
student gmit;
gmit.setvalues("argha",44,4);
gmit.getvalues();
}

//Encapsualtion is the process of wrapping up data members and functions inside a class that means the data members and the functions
//will be only accessible inside the class
//Data security , code reusability ,read only class
//sensitive data is hidden from users
//we can use the data members using setter and getter