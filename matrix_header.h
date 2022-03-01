//Myesha Mahazabeen 
#include<iostream>
#include<vector>
#define N 3 //Two runs will be conducted. N=3 for part a-f and N=4 for part g-i. When N=3, part g-i for N=4 will be commeneted to conduct the first run. Vice versa.
using namespace std;

void print(double matrix[N][N]);//print()
bool areEqual (double m1[N][N], double m2[N][N]);//areEqual()
bool isIdentity(double arr[N][N]);//isIdentity ()
bool isOdd (int a);//isOdd()
void evenAndOdd(int arr[N][N], int &ec, int &oc);//evenAndOdd()
vector<double> sumOfColumns(double arr[N][N]);//sumOfColumns
double* sumOfRows(double arr[N][N]);//sumOfRows
void sortByRowAndColumn (double (&arr) [N][N]);//sortByRowAndColumn
