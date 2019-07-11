#include<bits/stdc++.h>
using namespace std;
void func(string given , string choosen ,set<string>&already)
{
	set<string>set;
    if(given=="")
    {
    	if(already.find(choosen)!=already.end())
    	{
    		
		}
		else
		{
		cout<<choosen<<endl;
    	already.insert(choosen);
		}


	}
	else
	{
		for(int i=0;i<given.length();i++)
		{
			char c = given[i];
			choosen+=c;
			given.erase(i,1);
			func(given,choosen,already);
			given.insert(i,1,c);
			choosen.erase(choosen.length()-1,1);
		}
	}
}
void fun(string given)
{
	string choosen;
	set<string>s;
	func(given,choosen,s);
}
int main()
{
	string s;
	cin>>s;
    fun(s);
}
