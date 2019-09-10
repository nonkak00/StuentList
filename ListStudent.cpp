#include<iostream>
#include<string>
using namespace std;
char grade;
int num_std, score[100];
void ListStudent(string name[100], int score[100], int);
char Calgrade(int);
char main()
{	
	string name[100];
	int a = 1 ;
	cout << "Input Number of Student : ";
		cin >> num_std;
	for (int i = 0 ; i < num_std ; i++)
	{
	cout << "Input Name : " ;
		cin >> name[i];
	cout << "Input score " << a << " : " ;
		cin >> score[i];
	cout << endl;
	a++ ;
	}

	ListStudent(name, score, num_std);
	
}
void ListStudent(string name[100], int score[100], int num_std)
{
	int b = 1 ;
	for (int i = 0 ; i < num_std ; i++)
	{
	cout <<"Student Name : " << name[i] << "\tScore " << b << " : "<< score[i] <<"\tYour grade is "<< Calgrade(score[i]) <<endl;
	b++ ;
	}
	
}
char Calgrade(int score)
{	
	if (score>=80 && score<=100)
		grade = 'A';
	else if (score >= 70)
		grade = 'B';
	else if (score >= 60)
		grade = 'C';
	else if (score >= 50)
		grade = 'D';
	else 
		grade = 'F';

	return(grade);
}
	
