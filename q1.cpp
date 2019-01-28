#include<iostream>
#include<string>
#include"githubUser.h"
using namespace std;
bool compare(user one,user two);
void userinput(user *arr,int size);
int main()
{
	int size=4;
	user *arr=new user[size];
	user one;
	user two;
	cout<<"data for 1st user";
	cout<<"Enter the first name";
	getline(cin,one.firstname);
	cout<<"Enter the last name";
	getline(cin,one.secondname);
	cout<<"Enter the password";
	getline(cin,one.password);
	cout<<"Enter the email";
	getline(cin,one.email);
	cout<<"enter the no. of folders";
	cin>>one.foldercounter;
	cout<<"data for 2nd user";
	cout<<"Enter the first name";
	getline(cin,two.firstname);
	cout<<"Enter the last name";
	getline(cin,two.secondname);
	cout<<"Enter the password";
	getline(cin,two.password);
	cout<<"Enter the email";
	getline(cin,two.email);
	cout<<"enter the no. of folders";
	cin>>two.foldercounter;
	if(compare(one,two))
		cout<<"the user is matched";
	else
		cout<<"user did not match";
	userinput(arr,size);
	system ("pause");
	return 0;
}
bool compare(user one,user two)
{
	bool flag=0;
	if(one.firstname==two.firstname && one.secondname==two.secondname && one.email==two.email && one.foldercounter==two.foldercounter && one.password==two.password)
	{
		flag=1;
	}
	return flag;
}
void userinput(user *arr,int size)
{
	bool flag=0;
	for(int i=0;i<size;i++)
	{
	again:
		cout<<"enter the firstname";
		cin>>arr[i].firstname;
		cout<<"enter the username";
		cin>>arr[i].secondname;
		cout<<"enter the password";
		cin>>arr[i].password;
		cout<<"enter the email";
		cin>>arr[i].email;
		cout<<"enter the folder";
		cin>>arr[i].foldercounter;
		for(int j=0;j<i;j++)
		{
			if(arr[i].secondname==arr[j].secondname)
			{
				cout<<"already exists";
				goto again;
			}
		}
	}
	cout<<"enter the user name";
	cin>>arr[size].secondname;
	for(int i=0;i<size;i++)
	{
		if(arr[size].secondname==arr[i].secondname)
		{
			cout<<"match found\n";
			cout<<" the firstname";
		    cout<<arr[i].firstname;
			cout<<" the username";
			cout<<arr[i].secondname;
			cout<<" the password";
			cout<<arr[i].password;
			cout<<" the email";
			cout<<arr[i].email;
			cout<<" foldercounter";
			cout<<arr[i].foldercounter;
			flag=1;
		}
		if(flag)
			break;
	}
	delete []arr;
}
























