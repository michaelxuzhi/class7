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
			cout<<"ְ����\t����\t�Ա�\t����\t��ʱ\n";
			for(int i=0;i<countt;i++)
			{
				t[i].getdata();
			}
		}
		void sc(employer *t)
		{
			int i;
			cout<<"ְ����\t����\t�Ա�\t����\t��������\t��ʱ\t�ܹ���\n";
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
			cout<<"ְ����\t����\t�Ա�\t����\t��ʱ\n";
			for(int i=0;i<countt;i++)
			{
				t[i].getdata();
			}
		}
		void sc(employer *t)
		{
			cout<<"ְ����\t����\t�Ա�\t����\t��������\t��ʱ\t�ܹ���\n";
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
	cout<<"ȷ���������������:";
	cin>>countt;

	teacher *t=new teacher[countt];

	while(1)
	{
		cout<<"1.�����ʦ����\n2.����ʵ��Ա����\n3.����������Ա����\n0.�˳�\nѡ����Ҫ���еĲ���:";
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
