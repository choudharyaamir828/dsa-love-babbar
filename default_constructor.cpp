#include<iostream>
#include<string>

using namespace std;
class mobile{
	string name;
	string processer;
	int Ram;
	int battary;
public:
	 mobile(string name_a = "null", string processer_a = "null", int battary_a = 0 , int ram_a = 0){    // default & parametrized constructor
		name = name_a;
		processer = processer_a;
		Ram = ram_a;
		battary = battary_a;
		
	}
	mobile( mobile &mob){
		name = mob.name;
		processer = mob.processer;
		
		battary = mob.battary;
		
	}
	void getdata();
	

		
	
};
void mobile::getdata(){
	cout << "mobile name is ->"<< name<<endl;
	cout << "processer is -> "<< processer<<endl;
	cout << " Ram is -> " << Ram << endl;
	cout <<  " mattary power -> "<< battary<< endl;
	
}

int main()
{
	mobile samsung1;
	mobile samsung2("samsung_a23","drangern",5000,6);
	mobile samsung3(samsung2);
	samsung1.getdata();
	cout<<endl;
	samsung2.getdata();
	cout<<endl;
	samsung3.getdata();
	
	
	 
	return 0;
}
