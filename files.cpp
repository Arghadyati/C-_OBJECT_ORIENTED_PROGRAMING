//to work with files we need a header file called <fstream> 
/*

fstream includes two header files ofstream and ifstream

ofstream used to write into the files and ifstream used to read from the files


*/

#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ofstream myfile("op.txt");
myfile<<"Files can be tricky but it's fun";
myfile.close();

}