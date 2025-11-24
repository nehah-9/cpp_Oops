#include <iostream>
using namespace std;
template<typename T>T myMax(T x,T y){
	return (x>y)?x:y; }
template <typename T>
void myswap(T &x,T &y){
	T temp=x;
	x=y;
	y=temp; }
int main(){
	int a=10,b=20;
	cout<<"Max of"<<a<<"and"<<b<<"is:"<<myMax(a,b)<<endl;
cout<<"Before swap:a="<<a<<",b="<<b<<endl;
	myswap(a,b);
	cout<<"After swap:a="<<a<<",b="<<b<<endl;;
	cout<<"---------------"<<endl;
	double x=5.5,y=2.3;
	cout<<"Max of"<<x<<"and"<<y<<"is:"<<myMax(x,y)<<endl;
	cout<<"Before swap:x="<<x<<",y="<<y<<endl;;
	myswap(x,y);
	cout<<"After swap:x="<<x<<",y="<<y<<endl;;
	cout<<"---------------"<<endl;
	char c1='A',c2='Z';
	cout<<"Max of"<<c1<<"and"<<c2<<"is:"<<myMax(c1,c2)<<endl;
	cout<<"Before swap:c1="<<c1<<",c2="<<c2<<endl;;
	myswap(c1,c2);
	cout<<"After swap:c1="<<c1<<",cc2="<<b<<endl;;
	cout<<"---------------"<<endl;
	return 0;
}
