//Myesha Mahazabeen,

#include "matrix_header.h"//header file
#include <cassert>// for assert
using namespace std;

int main()
//declaring 2D double array to get user input
 {
  double A[N][N],B[N][N];
  cout<<"input a"<<N<<"*"<<N<<"matrix A:";
  for(int i=0;i<N;i++)
  for(int j=0;j<N;j++)
  cin>>A[i][j];
  cout<<"input a"<<N<<"*"<<N<<"matrix B:";
  for(int i=0;i<N;i++)
  for(int j=0;j<N;j++)
  cin>>B[i][j];
     
  // unit Test for part a-f when N=3.This code will conduct two runs. In this run, part g-i where N=4 will be commented to conduct the unit test for part a-f.
     
  //print()test
  cout<<"Testing print():\n";
  double A[3][3]={{9.1,1.2,2.3},{5.2,3.1,1.5},{4.3,8.2,0.7}};
  cout<<"Expected output:\n";
  cout<<"9.1\t1.2\t2.3\n5.2\t3.1\t1.5\n4.3\t8.2\t0.7\n";
  cout<<"print()outputs:\n";
  print(A);
  cout<<endl;

 //areEqual test
cout<<"Testing areEqual():\n";
double C[3][3]={{9.4,1.6,2.7},{5.2,3.9,1.5},{4.2,8.3,0.9}};
double B[3][3]={{1.1,2.2,3.3},{4.4,5.5,6.6},{7.7,8.8,9.9}};
cout<<"Input: "<<endl;
print (C);//using print fuction
cout<<"And\n";
print(B);
cout<<"Expected Output: Are Not Equal"<<endl;
assert (areEqual(C,B)==false);
cout<<"Output: Are Not Equal\n";
cout<<endl;
double X[3][3]={{9.4,1.6,2.7},{5.2,3.9,1.5},{4.2,8.3,0.9}};
cout<<"Input: "<<endl;
print (X);
cout<<"And\n";
double Y[3][3]={{9.4,1.6,2.7},{5.2,3.9,1.5},{4.2,8.3,0.9}};
print (Y);
cout<<"Expected Output: Are Equal"<<endl;
assert(areEqual(X,Y)==true);
cout<<"Output: Are Equal\n";
cout<<endl;

 //isIdentity Test
cout<<"Testing Identity Matrix\n";
double I[3][3]={{1,0,0},{0,1,0},{0,0,1}};
cout<<"Input: "<<endl;
print (I);
cout<<"Expected Output: Is Identity"<<endl;
assert(isIdentity(I)==true);
cout<<"Output: Is Identity\n";
cout<<endl;
double P[3][3]={{9.4,1.6,2.7},{5.2,3.9,1.5},{4.2,8.3,0.9}};
cout<<"Input: "<<endl;
print (P);
cout<<"Expected Output: Is Not Identity"<<endl;
assert (isIdentity(P)==false);
cout<<"Output: Is Not Identity\n";
cout<<endl;

  //evenAndOdd test
cout<<"Testing evenAnd Odd\n";
int ec, oc;
int E[3][3]={{9,1,2},{5,3,1},{4,8,0}};
cout<<"Input: "<<endl;
cout<<"9\t1\t2\n5\t3\t1\n4\t8\t0\n";
evenAndOdd(E, ec, oc);//calling evenAndOdd function
cout<<"Expected Output: "<<endl;
cout<<"Even Count: 4"<<endl;
cout<<"Odd Count: 5"<<endl;
assert(ec==4);
cout<<"Number of Even: "<<ec<<"\n";
assert(oc==5);
cout<<"Number of Odd: "<<oc<<"\n";
cout<<endl;

  //isOdd test
cout<<"Testing isOdd: "<<endl;
cout<<"Input: 3"<<endl;
cout<<"Expected Output: 3 is Odd"<<endl;
assert(isOdd(3)==true);
cout<<"3 Is Odd\n";
cout<<"Expected Output: 8 is Even"<<endl;
assert (isOdd(8)==false);
cout<<"8 Is Even\n";
cout<<endl;
     
// unit test for part g-i where N=4. In this run, part a-f where N=3 will be commented to conduct the unit test for part g-i.

  //sumOfColumns() test 4*4
 cout<<"Testing SumOfColumns():\n";
 double S [4][4]={{1.1,2.2,3.3,4.4},{5.5,6.6,7.7,8.8},{9.9,0.1,1.2,2.2},{3.3,4.4,5.5,6.6}};
 cout<<"Input: "<<endl;
 print (S);
 vector<double>sc=sumOfColumns(S);//function calling
 cout<<"Expected Output: "<<endl<<"19.8\t13.3\t17.7\t22.0\n";
 assert(sc[0]==19.8 && sc[1]== 13.3 && sc[2]==17.7 && sc[3]==22.0);
 for(int i=0;i<N;i++)
 cout<<"Sum of Column: "<<i<<":"<<" "<<sc[i]<<endl;
 cout<<endl;

 //sumOfRows() test
 cout<<"Testing SumOfRows():\n";
 cout<<"Input: "<<endl;
 print(S);
 double *sr=sumOfRows(S);
 cout<<"Expected Output: "<<endl<<"11.0\t28.6\t13.4\t19.8\n";
 sr=sumOfRows(S);
 assert((float)sr[0]==(float)11);//typecasting
 assert((float)sr[1]==(float)28.6);
 assert((float)sr[2]==(float)13.4);
 assert((float)sr[3]==(float)19.8);
 for(int i=0;i<N;i++)
 cout<<"Sum of Row: "<<i<<":"<<" "<<sr[i]<<endl;
 cout<<endl;

//sortByRowAndColumn()
  cout<<"Testing sortByRowAndColumn;\n";
  double M [4][4]={{2.3,5.4,3.5,6.6},{8.1,1.2,6.7,4.5},{0.1,4.2,9.3,5.1},{4.5,2.5,3.6,7.1}};
  cout<<"Unsorted Matrix:\n";
  cout<< "2.3\t5.4\t3.5\t6.6\n8.1\t1.2\t6.7\t4.5\n0.1\t4.2\t9.3\t5.1\n4.5\t2.5\t3.6\t7.1\n";
  cout<<"Expected Sorted Matrix:\n";
  cout<<"0.1\t3.5\t4.5\t6.6\n1.2\t3.6\t5.1\t7.1\n2.3\t4.2\t5.4\t8.1\n2.5\t4.5\t6.7\t9.3\n";
  cout<<"Output:\n";
  sortByRowAndColumn(M);//function calling
  print (M);
  cout<<endl;
  }




