#include<iostream>

using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};
	

class dates {	
	private:
		int day, month, year;
		string dj,name;
	public:
	
		void getDate(){
            char temp;
            cout<<"Enter Your Name"<<endl;
	        cin>>name;
	        cout << "Enter employee date of joining in (DD/MM/YYYY) format: "<<endl;
	        cin >> day >> temp >> month >> temp >>year;
	        cout<<"Enter the Day Of Joining"<<endl;
			cin>>dj;
			if(dj=="sunday"||dj=="saturday")
				cout<<"\nEnter the correct day"<<dj<<endl;
				
			
        }	
        void showDate(){
            cout << "\nEmployee date of joining: " << day << "/" << month << "/" <<year;
            cout<<"The day of Joining"<<dj;
            cout<<"your name is"<<name;
        }
};
class address{
	private:
		string city;
		string country;
		public:
			void getaddress(){
				cout<<"Enter your city"<<endl;
				cin>>city;
				cout<<"entry your country"<<endl;
				cin>>country;
				if(city=="lahore"){
					cout<<"your Allowance is 0"<<endl;
				}
					else
					{
						cout<<"congrates you have get 500$ alloawnce"<<endl;
					}
					
					
				}
			
			void showaddress(){
				cout<<"your City is"<<city;
				cout<<"your Country is"<<country;
			}
};
class employee {
	private:
		int emp_num;
        float emp_comp;
        dates date1;
        etype emp;
	public:
		void setData();
        void dispData();
};

void employee::setData(){
    char type;
    cout << "\nEnter employee Number: ";
	cin >> emp_num;
	cout << "Enter employee Compensation: ";
	cin >> emp_comp;
    date1.getDate();
    cout << "Enter employee type (first letter only laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> type;
    switch (type){
        case 'l': emp = laborer; break;
        case 's': emp = secretary; break;
        case 'm': emp = manager; break;
        case 'a': emp = accountant; break;
        case 'e': emp = executive; break;
        case 'r': emp = researcher; break;
        default:
            break;
    }
}

void employee::dispData(){
    cout << "Employee Number: " << emp_num << endl;
	cout << "Employee Compensation: $" << emp_comp <<endl;
    date1.showDate();
    cout << endl;
    switch(emp){
        case laborer:
            cout << "Employee type is laborer";
            break;
        case secretary:
            cout << "Employee type is secretary";
            break;
        case manager:
            cout << "Employee type is manager";
            break;
        case accountant:
            cout << "Employee type is accountant";
            break;
        case executive:
            cout << "Employee type is executive";
            break;
        case researcher:
            cout << "Employee type is researcher";
            break;
        default:
            cout << "Invalid input";
            break;
    }
    cout << endl;
}

int main(){
    employee emp1, emp2, emp3;
	cout <<"\nEnter first employee details: \n";
	emp1.setData();	
	cout <<"\nEnter second employee details: \n";
	emp2.setData();	
	cout <<"\nEnter third employee details: \n";
	emp3.setData();	

	cout <<"\nFirst employee deatils: ";
	emp1.dispData();
	cout <<"\nSecond employee deatils: ";
	emp2.dispData();
	cout <<"\nThird employee deatils: ";
	emp3.dispData();
    
	return 0;
}
