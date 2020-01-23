using namespace std;
#include "Header.h"

int main()
{
	List lst;
	system("CLS");
	lst.Push(100);       
	lst.Push(200);       
	lst.Push(300);       
	lst.Show();      
	lst.Pop();      
	cout << endl; 
	cout << endl;
	List lst2 = lst;
	lst2.Show(); cout << endl; cout << endl;
	lst2.Push(111);
	lst2.Push(222);  
	lst2.Show(); 
	lst2.Push(999);  
	lst2.Pop();  
	lst2.Pop();    
	cout << endl;

	lst2.Show();  

	system("PAUSE");
	return 0;
}