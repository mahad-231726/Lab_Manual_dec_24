#include <iostream>
using namespace std;

class Array
{
	private:
		int arr[5];
	public:
	Array();
	void input();
	void show();
	int operator==(Array a);
};

Array::Array(){
	int i;
	for(i=0; i<=5; i++)
	{
		arr[i]=-1;
	}
}

void Array::input(){
	int i;
	for(i=0; i<=5; i++)
	{
		cout<<"Enter an integer: ";
		cin>>arr[i];
}
}

void Array::show(){
	int i;
	cout<<"\nArray values: ";
	for(i=0; i<=5; i++)
		cout<<arr[i]<<" ";
}

int Array::operator==(Array a){
	int i, eq=1;
	for(i=0; i<=5; i++)
	if(arr[i]!=a.arr[i])
	eq=0;
	return eq;
}



int main() {
	Array x, y;
	int n;
	x.input();
	y.input();
	if(x==y)
	cout<<"Both arrays are equal.";
	else
	cout<<"Both arrays are different.";
    return 0;
}
