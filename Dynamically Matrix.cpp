#include<iostream>
using namespace std;
 
class matrix
	{
			int **a;
		public:
            matrix()           // Dynamic Constructor
            {
		int i,j;
		int m,n;
		cout<<"Enter Number of Rows and Coulmns:"<<endl;
		cin>>m>>n;
        a=new int*[m];
            for(i=0; i<m; i++)
                a[i]=new int[n];
                cout<<"Enter elements for matrix:\n";
                        for(i=0; i<m; i++)
                        	for(j=0; j<n; j++)
                                    cin>>a[i][j];
            }
            ~matrix()                    // Destructor
            {
                        int i;
                        for(i=0;i<m;i++)         
						delete a[i];
                        delete a;
            }
            void putmatrix();
            void multiply(matrix,matrix);
            void display();
};
 
void matrix::putmatrix()
{
            int i,j;
            for(i=0; i<m; i++)
            {
            	for(j=0; j<n; j++)
                cout<<a[i][j]<<endl;
            }
}
void matrix :: display()
 {
 	for(int i=0;i<m;i++)
 	{
 	cout<<"\n";
 		for(int j=0;j<n;j++)
 		{
 		cout<<a[i][j]<<"\t";
 		}
 	}
 }
void matrix :: multiply(matrix m1, matrix m2)
 {
 if(m1.n!=m2.m)
    {
     cout<<"matrix multiplication is not possible";
    }
 else
    {
     for(int i=0;i<m1.m;i++)
    {
     	for(int j=0;j<m2.n;j++)
    	{
     a[i][j]=0;
     	for(int k=0;k<m1.n;k++)
     		{
     	a[i][j]=a[i][j] +( m1.a[i][k]*m2.a[k][j]);
     	m=m1.m;
     	n=m2.n;
    		}
 		}
 	}
 	}	
 }

int main()
{
	matrix m1,m2,m3;
 	m1.putmatrix();
 	m2.putmatrix();
 	m3.multiply(m1,m2);
 	m3.display();
 	return 0;   
}
