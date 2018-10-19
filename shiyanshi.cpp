#include<iostream.h>

int countt;

class employer
{
	protected:
		int code,age;
		char sex[10];
		char name[10];
	public:
		employer()
		{
			code=0;
			age=0;
		}
		void getdata()
		{
			cin>>code>>name>>sex>>age;
		}
		virtual void print()
		{
			cout<<code<<name<<sex<<age;
		}
		void sr(employer *t)
		{
			cout<<"职工号\t姓名\t性别\t年龄\t课时\n";
			for(int i=0;i<countt;i++)
			{
				t[i].getdata();
			}
		}
		void sc(employer *t)
		{
			int i;
			cout<<"职工号\t姓名\t性别\t年龄\t基本工资\t课时\t总工资\n";
			for(i=0;i<countt;i++)
			{
				t[i].print();
			}
		}
};



class teacher:public employer
{
	protected:
		int hour;
		int jb;
		int zg;
	public:
		teacher()
		{
			jb=1000;
			hour=30;
			zg=jb+(hour*30);
		}
		void getdate()
		{
			cin>>code>>name>>sex>>age;
			cin>>hour;
		}
		void print()
		{
			cout<<" ";
			cout<<code<<name<<sex<<age<<jb<<hour<<zg;
		}
		void sr(employer *t)
		{
			cout<<countt;
			cout<<"职工号\t姓名\t性别\t年龄\t课时\n";
			for(int i=0;i<countt;i++)
			{
				t[i].getdata();
			}
		}
		void sc(employer *t)
		{
			cout<<"职工号\t姓名\t性别\t年龄\t基本工资\t课时\t总工资\n";
			for(int i=0;i<countt;i++)
			{
				cout<<" ";
				t[i].print();
			}
		}
};


class labwoker:public employer
{
	protected:
		int hour;
	public:
		labwoker()
		{
		}
		void getdata()
		{
			cin>>hour;
		}
};

class admin:public employer
{
	protected:
		double addition;
	public:
		admin()
		{
		}
		void getdata()
		{
		}
};


void main()
{
	int i;
	cout<<"确定本次输入的人数:";
	cin>>countt;

	teacher *t=new teacher[countt];

	while(1)
	{
		cout<<"1.输入教师资料\n2.输入实验员资料\n3.输入行政人员资料\n0.退出\n选择您要进行的操作:";
		cin>>i;
		switch(i)
		{
		case 1:
			{
				teacher tr;
				tr.sr(t);
				tr.sc(t);
			}
		case 2:
			{
				labwoker lw;
				lw.sr(t);
				lw.sc(t);
			}
		case 3:
			{
				admin ad;
				ad.sr(t);
				ad.sc(t);
			}
		case 0:
			{
				return;
			}
		}
	}
}
