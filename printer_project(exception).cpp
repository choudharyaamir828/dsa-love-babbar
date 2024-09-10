#include<iostream>
using namespace std;
class printer {
	string _name;
	int avaliablepaper;
	public:
		 printer(string name, int paper){
			_name = name;
			avaliablepaper = paper;
		}
		void print(string textdoc){
			int requiredpaper = textdoc.length() / 10;
			if(requiredpaper > avaliablepaper){
			
				throw " no paper avaliable";
			}
			cout << "printing....  " << textdoc << endl;
			avaliablepaper -= requiredpaper;
		}
};
int main(){
	printer myprinter("HP intel 123",1);
	try{
	
	myprinter.print("helloameisaamiriamastudentwe");
}
catch(const char* ch){
	cout<< "enough paper avaliable" << ch << endl;
}
catch(...){
	cout <<" ERROR" <<endl;
}
	
	
	return 0 ;
}
