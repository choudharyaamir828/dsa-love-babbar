#include<iostream>
using namespace std;
class sample{
	private:
		static int cnt;
	public:
		void display();
};
int sample:: cnt = 50;
  void sample::display(){
	for(int i = 1;i<=10;++i){
		cnt +=i;
	}
	cout<<"sun of the value is :"<<cnt;
	cout<<endl;
}
int main(){
	 sample obj;
	for(int i =1 ;i<5;i++){
		obj.display();
		cout<<endl;
	}
	return 0;
}
