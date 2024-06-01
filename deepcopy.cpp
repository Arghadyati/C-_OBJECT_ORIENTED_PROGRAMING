#include<bits/stdc++.h>
using namespace std;
class box{
    private:
    int length,*height,breadth;
    public:
     box(){
        height=new int;
     }
    void setdimension(int l,int h,int b){
        length=l;
        *height=h;
        breadth=b;
    }
    void printdimension(){
        cout<<length<<" "<<*height<<" "<<breadth<<endl;
    }
    //we need user defined constructor to implement deep copy

    box(box& sample){
        length=sample.length;
        height=new int;
        *height=*(sample.height);
        breadth=sample.breadth;
    }


};
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
box box1;
box1.setdimension(10,20,30);

box box2;
box2=box1;
box1.printdimension();
box2.printdimension(); 
}