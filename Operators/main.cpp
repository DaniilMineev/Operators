//Operators
#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS //1) �������������� ���������;
//#define ASSIGMENT_OPERATORS    //2) �������� ������������;
//#define INCREMENT_DECREMENT    //3) (++/--);
//#define COMPOUND_ASSIGNMENTS   //4) ��������� ������������;
//#define COMPARISON_OPERATORS   //5) ��������� ���������;
//#define LOGICAL_OPERATORS       //6) ���������� ���������;
void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef ARITHMETICAL_OPERATORS;

#endif 

#ifdef ASSIGMENT_OPERATORS;
	//l-value = r-value 
	//int a = 2;
	//int b = 3 + a * 4 - 2 / 8;

	int a, b, c;
	a = b = (c = 0) + 1;
	cout << a << "\t" << b << "\t" << c << endl;
#endif

#ifdef INCREMENT_DECREMENT;
	int i = 0;
	++i;  //Prefix increment
	i++;  //Postfix (Suffix) increment
	--i;  //Prefix decrement 
	i--;  //Postfix (Suffix) decrement


#endif

#ifdef COMPOUD_ASSIGNMENTS
#endif

#ifdef COMPARISON_OPERATORS
#endif
#ifdef LOGICAL_OPERATORS

#endif

}