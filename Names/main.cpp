#include <iostream>
#include <StudentName.h>
#include<vector>

using namespace std;



int main()
{
  // 1st test case
  StudentName sn("leena Essam ");
  sn.getName();
  //sn.Replace(2,3);
  sn.print();

  // 2nd test case
  StudentName sn2("Ahmed hassan ali ");
  sn2.getName();
  cout<<sn2.Replace(3,3)<<endl;
  sn2.print();


  // 3rd test case
  StudentName sn3("samar Karim Gamal Hossam ");
  sn3.getName();
  cout<<sn3.Replace(3,7)<<endl;
  sn3.print();


  // 4th test case
  StudentName sn4("Esraa Salah Adel Mohamed ");
  sn4.getName();
  sn4.Replace(2,3);
  sn4.print();


  // 5th test case
  StudentName sn5("Wael Hisham khaled ");
  sn5.getName();
  sn5.Replace(2,3);
  sn5.print();

}

