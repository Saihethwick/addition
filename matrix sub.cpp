#include<iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    cout<<"EnterElements for First Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>a[i][j];
    }
    cout<<"Enter  Elements for Second Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>b[i][j];
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            c[i][j] = a[i][j] - b[i][j];
    }
    cout<<"\nThe New Matrix (Subtraction Result) is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<c[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}