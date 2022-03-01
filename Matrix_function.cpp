//Myesha Mahazabeen 
#include "matrix_header.h"//header file
using namespace std;

void print (double matrix [N][N])
{
    for (int i=0; i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

}
bool areEqual (double m1[N][N],double m2[N][N])
{
    bool x= true;
    for (int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(m1[i][j]!=m2[i][j])
            {
                x=false;
                return x;
            }
        }
    }
    return x;

}
bool isIdentity(double arr[N][N])
{
    for(int i=0; i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i==j)
            {
                if(arr[i][j]!=1)
                return false;
            }
            else 
            {
                if (arr[i][j]!=0)
                return false;

            }
            
        }
    }
    return true;
}
bool isOdd(int a)
{
    return a%2;
}
void evenAndOdd(int arr[N][N], int &ec, int &oc)
{
    ec= 0;//ec=even count
    oc=0; //oc=odd count
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(isOdd(arr[i][j]))
            oc++;
            else
            ec++;
        }
    }
}
vector<double> sumOfColumns(double arr[N][N])
{
    vector<double> columnSum(N,0);
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            columnSum[i]+=arr[j][i];
    }
    return columnSum;
}
double* sumOfRows(double arr[N][N])
{
    static double rowSum[N];
     for(int i=0;i<N;i++)
     rowSum [i]=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            rowSum[i]+=arr[i][j];
    }
    return rowSum;
}
void sortByRowAndColumn(double (&arr)[N][N])
{
    //sorting row in ascending order
    for(int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            for (int k=j+1;k<N;k++)
            {
                if(arr[i][j]>arr[i][k])
                swap(arr[i][j],arr[i][k]);//swaping
            }
        }
    }
    //sorting column in ascending order
    for(int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            for (int k=j+1;k<N;k++)
            {
                if(arr[j][i]>arr[k][i])
                swap(arr[j][i],arr[k][i]);
            }
        }
    }
}


