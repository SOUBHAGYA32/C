#include<iostream>
using namespace std;
	class item{
		private:
			int code;
			float price;
		public:
			void getData(int a,float b)
			{
				code=a;
				price=b;
			}
			void show()
			{
				cout<<"Code:"<<code<<"\n"<<"Price:"<<price<<endl;
			}
	};
	int main()
	{
		item obj;
		item *ptr=&obj;
		(*ptr).getData(11,15.43);
		(*ptr).show();
		return 0;
	}
