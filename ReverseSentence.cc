#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void ReverseSentence(const char* src, char *dest)
{
	stringstream ss(src);
	vector<string> v;
	string s, s2;
	while(ss>>s)
	{
		v.push_back(s);
	}
	for(int i=v.size()-1; i>=0; i--)
	{
		s2+=v[i]+' ';
	}
	s2=s2.substr(0,s2.length()-1);
	strcpy(dest, s2.c_str());
}

int main()
{
	string input="Welcome to Oracle";
	char * p=new char[input.size()+1];
	ReverseSentence(input.c_str(),p);
	while(*p!='\0')
	cout<<*p++;
	cout<<endl;
}
