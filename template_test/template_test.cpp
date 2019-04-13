#include <iostream>

using namespace std;

template<typename T>
void Swap(T &a, T &b){

	T temp = a;
	a = b;
	b = temp;
}

template<typename T> class Operation{

public:

	Operation(T a, T b) :m_a(a), m_b(b){}
	T Sum();
	bool SetValue(T a, T b);

private:

	T m_a;
	T m_b;
};

template<typename T>
T Operation<T>::Sum(){

	T c = m_a + m_b;
	return c;
}

template<typename T>
bool Operation<T>::SetValue(T a, T b){

	m_a = a;
	m_b = b;
}


int main(){

	int int1 = 10, int2 = 20;
	cout << int1 << "," << int2 << endl;
	Swap(int1, int2);
	cout << int1 << "," << int2 << endl << endl;

	float float1 = 1.1, float2 = 2.5;
	cout << float1 << "," << float2 << endl;
	Swap(float1, float2);
	cout << float1 << "," << float2 << endl << endl;

	char char1 = '1', char2 = '2';
	cout << char1 << "," << char2 << endl;
	Swap(char1, char2);
	cout << char1 << "," << char2 << endl << endl;

	bool bool1 = true, bool2 = false;
	cout << bool1 << "," << bool2 << endl;
	Swap(bool1, bool2);
	cout << bool1 << "," << bool2 << endl<< endl;

	Operation<float> ope(2.3, 3.4);
	float sum = ope.Sum();
	cout << sum << endl;


	return 0;
}