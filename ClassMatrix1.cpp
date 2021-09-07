#include<iostream>
using namespace std;
	class Matrix
	{
		int **p,r,c;
	public:
			Matrix()//constructor
			{
				cout<<"Enter Rows:"<<endl;
				cin>>r;
				cout<<"Enter Cols:"<<endl;
				cin>>c;
				cout<<"Enter Matrix Value:"<<endl;
				p=new int*[r];
				for(int i=0;i<r;i++)
					for(int j=0;j<c;j++)
					p[i]=new int[c];
			}
			~Matrix()//destructor
			{
				for(int i=0;i<r;i++)
					delete p[i];
				delete p;
			}
			void read();
			void display();
			void multiply(Matrix,Matrix);
	};
	void Matrix::read()
	{
		int i,j;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cin>>p[i][j];
			}
		}
	}
	void Matrix::display()
	{
		int i,j;
		cout<<"\n";
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<p[i][j]<<"\t"<<endl;
			}
		}
	}
	void Matrix::multiply(Matrix m1,Matrix m2)
	{
		if(m1.c!=m2.r)
    	{
    	cout<<"matrix multiplication is not possible";
    	}	
 		else
 		{
 			for(int i=0;i<m1.r;i++)
    		{
     			for(int j=0;j<m2.c;j++)
    			{
     			p[i][j]=0;
     				for(int k=0;k<m1.c;k++)
     				{
     				p[i][j]=p[i][j] +( m1.p[i][k]*m2.p[k][j]);
     				r=m1.r;
     				c=m2.c;
    				}
 				}
 			}	
		}
	}
	int main()
	{
	Matrix m1,m2,m3;
	m1.read();
	m2.read();
	m3.multiply(m1,m2);
	m3.display();
	return 0;
	}
