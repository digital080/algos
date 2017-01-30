#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;




void readFile(vector <string> fil){

string str;
ifstream infile {"top1Mweb"};


    while(infile >> str)//read an unknown number of inputs
    {
       fil.push_back(str);
    }//endwhile

}

void sortData(auto& data)
{
sort(data.begin(), data.end() );

}


int main(){
	vector <string>  vect;
	//string data2;
	
	readFile(vect);
	
	sortData(vect);
	
	
	
	
	
	
	
	
	
	
	}
