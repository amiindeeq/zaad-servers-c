#include<iostream>
using namespace std;
int main()
{
	int pass,mon,num,opt;
	cout<<"gali numberka sirta ah"<<endl;
	cin>>pass;
	if(pass == 8877)
	{
		cout<<"1. itus hadhaaga"<<endl;
		cout<<"2. Lacag Dirid"<<endl;
		cout<<"3. Lacag la bixid"<<endl;
		cout<<"4. Ku iibso"<<endl;
		cout<<"5. itus dhaqdhaqaaq"<<endl;
		cout<<"6. E-Voucher"<<endl;
		cout<<"7. Maarayn Guud"<<endl;
		cout<<"8. Ka bax"<<endl;
		cin>>opt;
		if(opt == 1)
		cout<<"Hagaagu Waa $20,000"<<endl;
		else if (opt == 2)
		{
			cout<<" gali numberka lacagta aad udirayso"<<endl;
			cin>>num;
			cout<<"gali lacagta aad udirayso"<<endl;
			cin>>mon;
			cout<<" Ma hubta inaad udirayso $"<<mon<< " lambarka "<<num<<endl;
			cout<<" 1. Haa"<<endl;
			cout<<" 2. Maya"<<endl;
			cin>>opt;
			if(opt == 1)
			cout<<"waxa udirtay $"<<mon <<" lambarka "<<num <<" hadhagaagu waa $1500"<<endl;
			else
			cout<<" Macasaalama "<<endl; 
		}
		else if (opt == 3)
		{
			cout<<" gali numberka laanta aad kala baxayso"<<endl;
			cin>>num;
			cout<<"gali lacagta aad labaxaysid"<<endl;
			cin>>mon;
			cout<<" Ma hubta inaad la baxaysid $"<<mon<< " lambarka "<<num<<endl;
			cout<<" 1. Haa"<<endl;
			cout<<" 2. Maya"<<endl;
			cin>>opt;
			if(opt == 1)
			cout<<"waxa kala baxday $"<<mon <<" lambarka "<<num <<" hadhagaagu waa $1500"<<endl;
			else
			cout<<" Macasaalama "<<endl;
		}
		else if (opt == 4)
		{
			cout<<" Gali lambarka ku iibsada"<<endl;
			cin>>num;
			cout<<" Gail lacagta aad wax ku iibsanayso"<<endl;
			cin>>mon;
			cout<<" Ma hubta inaad la baxaysid $"<<mon<< " lambarka "<<num<<endl;
			cout<<" 1. Haa"<<endl;
			cout<<" 2. Maya"<<endl;
			cin>>opt;
			 if (opt == 1)
			 {
			 	cout<<"waxd ku iibsaty $"<<mon<<" lambarka "<<num<<" hadhagaagu waa $1500"<<endl;
			 }
			 else
			 cout<<" macasalaama"<<endl;
		
		}
		else if (opt == 5)
		{
			cout<<" 1.Itus dhaqdhaaqi igu dambeeyay"<<endl;
			cout<<" 2.warbixin kooban"<<endl;
			cout<<"  00.Dib u noqo"<<endl;
			
		}
		else if (opt == 6)
		{
			cout<<" Gali lambarka aad ugu shabaysid"<<endl;
			cin>>num;
			cout<<" Gail lacagta aad ugu shubaysid"<<endl;
			cin>>mon;
			cout<<" Ma hubta inaad ugu shubaysid $"<<mon<< " lambarka "<<num<<endl;
			cout<<" 1. Haa"<<endl;
			cout<<" 2. Maya"<<endl;
			cin>>opt;
			 if (opt == 1)
			 {
			 	cout<<"waxd ku iibsaty $"<<mon<<" lambarka "<<num<<" hadhagaagu waa $1999"<<endl;
			 }
			 else
			 cout<<" macasalaama"<<endl;
		
		}
	}
	else 
	cout<<"lambarka sirta ah waa qalad"<<endl;
}