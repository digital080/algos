#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>
#include <fstream>

using namespace std;

//To run copy and paste this: g++ -std=c++14 sort.cpp -o sort.out && ./sort.out

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/

int selectionSort(vector <string> data){ //selection sort
	string holder = "";
	int smallest = 0;
	
	
	
	for (int x = 0; x <= data.size(); x++){
			smallest = x;
		for (int i = x+1; i <= data.size(); i++){
				if (data[smallest] > data[i]){
				
					swap(data[smallest], data[i]);
					}
					
		}
		cout << data[x] << endl;
	}
	
	/*for(int w = 0; w <= data.size(); w++){
	cout << data[w] << endl;
}
 */
	}


//auto linearSearch...
int linearSearch(vector<string> A, string key) { 
	for(int i = 0; i < A.size(); i ++) { 
	
		if (A[i] == key){ 
			return i;

				}
		
	}
		return -1;
}

int main()
{
  vector<string> inputs;
  string search_key, input;
  int result;

ifstream infile {"top1Mweb"};

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl;
   cout<<"\nTo end input type Ctrl + D"<<endl<<endl;

    while(infile >> input)//read an unknown number of inputs
    {
       inputs.push_back(input);
    }

	
	
   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
   exit(1);//nothing to do but quit program

 cout<<"\nTo quit the program type Ctrl + D"<<endl<<endl;
  cout<<"Enter a value to search for: ";

     cin.clear();//not needed when switching to reading from file

 selectionSort(inputs); // Selection sort


    
    return 0;
}
