#include<iostream>

using namespace std;

class divy;

class abhi{
	private :
		int hr;
		int min;
		int sec;
	friend void dhruv(abhi,divy);
};

class divy{
	
	private :
		int hr;
		int min;
		int sec;
	friend void dhruv(abhi,divy);
};

void dhruv(abhi a,divy d){
	cout<<"enter time 1 "<<endl<<endl;
	cout<<"enter hr : ";
	cin>>a.hr;
	cout<<"enter min : ";
	cin>>a.min;
	cout<<"enter sec : ";
	cin>>a.sec;
	
	cout<<endl<<"enter time 2 "<<endl<<endl;
	cout<<"enter hr : ";
	cin>>d.hr;
	cout<<"enter min : ";
	cin>>d.min;
	cout<<"enter sec : ";
	cin>>d.sec;
	cout<<endl;
	
	cout<<"time 1 ::  "<<a.hr<<":"<<a.min<<":"<<a.sec<<endl;
	cout<<"time 2 ::  "<<d.hr<<":"<<d.min<<":"<<d.sec<<endl;	

	int hour,min,sec;
	hour= a.hr+d.hr;
	min=a.min+d.min;
	sec=a.sec+d.sec;
	cout<<endl;
	
	while(min>=60 ){
		hour=hour+1;
		min=min-60;
	}
	while(sec>=60 ){
		min=min+1;
		sec=sec-60;}
	
		cout<<hour<<"hr:"<<min<<"min:"<<sec<<"sec";
		
	};


int main(){
	
	abhi a;
	divy d;
	dhruv(a,d);
	
	
	return 0;
}
