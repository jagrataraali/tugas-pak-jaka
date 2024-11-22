#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1 ="STMIK";
	string str2 ="PENUSA";
	
	string result = str1 + "  " + str2;
	cout<<"Concatenated: "<<result << std:: endl;
	
	size_t length = result.length();
	cout<< "Length: " << length << std::endl;
	
	string sub = result.substr(6, 6);
	cout<< "Substring: "<< sub << std::endl;
	
	size _t pos = result.find("PENUSA");
	cout<<"Position of 'PENUSA': " << pos<<std:: endl;
	
	result.replace(0, 5, "HI");
	cout << "Replaced: " << result << std::endl;
	
	return 0;
}
