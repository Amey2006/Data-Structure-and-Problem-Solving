#include<iostream>
#include<vector>   
using namespace std;

void print_matrix(int m,int n)
{
    
    vector<vector<char>>matrix(m,vector<char>(n,'#'));
    
    int upborder=0;
    int lowborder=m-1;
    int leftcol=0;
    int rightcol=n-1;
    char ch='X';
    while(upborder<=lowborder && leftcol<=rightcol)
    {
        int i=0;
        int j=0;
      while(j<=rightcol)
      {
        
            if (matrix[upborder][j]=='#') matrix[upborder][j]=ch;
            if (matrix[lowborder][j]=='#')matrix[lowborder][j]=ch; 
            j++;        
      }
      while(i<=lowborder)
      {
            if(matrix[i][leftcol]=='#')matrix[i][leftcol]=ch;
            if( matrix[i][rightcol]=='#')matrix[i][rightcol]=ch;
            i++;
      }
      
      upborder++;
      lowborder--;
      leftcol++;
      rightcol--;
      ch=(ch=='X')?'O':'X';
    }
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
        {
           cout<<" "<<matrix[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int row,col;
    cout<<"enter rows : ";
    cin>>row;
    cout<<"enter cols : ";

    cin>>col;
    print_matrix(row,col);
    return 0;
}