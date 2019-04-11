////初步实现类的功能
// #include <iostream>
// using namespace std;

// class Student{

// public:

//     // 成员变量
//     char *name;
//     string stu_num;   // 学号
//     int age;
//     float score;
    
//     // 成员函数
//     void Print_Info();  // 输出该生的信息

// }; // 要加分号

// void Student::Print_Info(){

// 	cout << "姓名" << ": " << name << endl;
// 	cout << "学号" << ": " << stu_num << endl;
// 	cout << "年龄" << ": " << age << endl;
// 	cout << "成绩" << ": " << score << endl << endl;
// }



// int main(){

// 	Student LiLei;
// 	class Student HanMeimei;
// 	Student students[100];

// 	Student *pStu = &HanMeimei;
// 	// Student *pStu1 = new Student;
// 	// delete pStu1;

// 	LiLei.name = (char*)"LiLei";
// 	LiLei.stu_num = "010013";
// 	LiLei.age = 23;
// 	LiLei.score = 90.5;

// 	pStu -> name = (char*)"HanMeimei";
// 	pStu -> stu_num = "010014";
// 	pStu -> age = 23;
// 	pStu -> score = 91.5;

// 	LiLei.Print_Info();
// 	pStu -> Print_Info();

// 	return 0;
// }






// // 将类进一步封装，成员变量的属性都改为 private
// #include <iostream>
// using namespace std;

// class Student{

// public:
// 	void Set_Name(char *name);
// 	void Set_StuNum(string m_stu_num);
// 	void Set_Age(int age);
// 	void Set_Score(float score);
//     void Print_Info();  // 输出该生的信息

// private:
// 	char *m_name;
//     string m_stu_num;   // 学号
//     int m_age;
//     float m_score;

// }; // 要加分号

// void Student::Set_Name(char *name){

// 	m_name = name;
// }

// void Student::Set_StuNum(string stu_num){

// 	m_stu_num = stu_num;
// }

// void Student::Set_Age(int age){

// 	m_age = age;
// }

// void Student::Set_Score(float score){

// 	m_score = score;
// }

// void Student::Print_Info(){

// 	cout << "姓名" << ": " << m_name << endl;
// 	cout << "学号" << ": " << m_stu_num << endl;
// 	cout << "年龄" << ": " << m_age << endl;
// 	cout << "成绩" << ": " << m_score << endl << endl;
// }


// int main(){

// 	Student LiLei;
// 	class Student HanMeimei;
// 	Student students[100];

// 	Student *pStu = &HanMeimei;
// 	// Student *pStu1 = new Student;
// 	// delete pStu1;

// 	LiLei.Set_Name((char*)"LiLei");
// 	LiLei.Set_StuNum("010013");
// 	LiLei.Set_Age(23);
// 	LiLei.Set_Score(90.5);

// 	pStu -> Set_Name((char*)"HanMeimei");
// 	pStu -> Set_StuNum("010014");
// 	pStu -> Set_Age(23);
// 	pStu -> Set_Score(91.5);

// 	LiLei.Print_Info();
// 	pStu -> Print_Info();

// 	return 0;
// }






#include <iostream>
using namespace std;

class Student{

public:
	Student(char* name, string stu_num, int age, float score);
	Student();
	void Set_Name(char *name);
	void Set_StuNum(string m_stu_num);
	void Set_Age(int age);
	void Set_Score(float score);
    void Print_Info();  // 输出该生的信息
    void Set_Teacher(string teacher);

private:
	char *m_name;
    string m_stu_num;   // 学号
    int m_age;
    float m_score;

// public:
    static string m_teacher;

}; // 要加分号

string Student::m_teacher = "Miss Wang";

Student::Student(char* name, string stu_num, int age, float score){

	m_name = name;
	m_stu_num = stu_num;
	m_age = age;
	m_score = score;
}
// Student::Student(char* name, string stu_num, int age, float score)
// : m_name(name), m_stu_num(stu_num), m_age(age), m_score(score){
// }



Student::Student(){

	m_name = NULL;
	m_stu_num = "NULL";
	m_age = 0;
	m_score = 0.0;
}

void Student::Set_Name(char *name){

	m_name = name;
}

void Student::Set_StuNum(string stu_num){

	m_stu_num = stu_num;
}

void Student::Set_Age(int age){

	m_age = age;
}

void Student::Set_Score(float score){

	m_score = score;
}

void Student::Set_Teacher(string teacher){

	m_teacher = teacher;
}

void Student::Print_Info(){

	cout << "姓名" << ": " << m_name << endl;
	cout << "学号" << ": " << m_stu_num << endl;
	cout << "年龄" << ": " << m_age << endl;
	cout << "成绩" << ": " << m_score << endl;
	cout << "老师" << ": " << m_teacher << endl << endl;
}


int main(){

	Student LiLei((char *)"LiLei", "010013", 23, 90.5);
	class Student HanMeimei((char *)"HanMeimei", "010014", 23, 91.5);
	//Student students[100]; //此处将报错，因为没有调用构造函数

	Student *pStu = &HanMeimei;
	// Student *pStu1 = new Student("LiHua", "010015", 23, 92.5);
	// delete pStu1;

	LiLei.Print_Info();
	pStu -> Print_Info();

	LiLei.Set_Teacher("Miss Liu"); // private 的 static 成员变量不能外部访问，只能通过成员函数访问
	LiLei.Print_Info();

	// cout << (Student::m_teacher = "Mr Li") << endl;
	// cout << (LiLei.m_teacher = "Miss Zhao") << endl;
	// cout << (pStu -> m_teacher = "Mr Gao") << endl; 

	return 0;
}