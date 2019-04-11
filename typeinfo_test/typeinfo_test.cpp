#include <iostream>
#include <typeinfo>

using namespace std;

extern const char test_set_path[] = "abc";

int main(){

	int avc = 0;

	cout << typeid(avc).name() << endl;
	cout << typeid(test_set_path).name() << endl;
	cout << typeid(int).name() << endl;	   
    cout << typeid(char).name() << endl;
    cout << typeid(float).name() << endl;
    cout << typeid(double).name() << endl;
    cout << typeid(char[]).name() << endl;
    cout << typeid(char[][2]).name() << endl;
    cout << typeid(int[]).name() << endl;
    cout << typeid(int[][2]).name() << endl;
    cout << typeid(char*).name() << endl;
    cout << typeid(int*).name() << endl;
    cout << typeid(typeid(char).name()).name() << endl;
    cout << typeid(typeid(int).name()).name() << endl;
    cout << typeid(string).name() << endl;

    return 0;
}
