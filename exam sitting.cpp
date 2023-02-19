#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	cout<<"*#*#*#*#*#*#*#";
	cout<<"\nExam sitting";
	cout<<"\n*#*#*#*#*#*#*#";
	
	int total_classes, attended_classes, medical_leave;
	float attended_classes_per;
	bool medical_leave_cause;
	
	cout<<"\nEnter total number of classes held = ";
	cin>>total_classes;
	
	cout<<"\nEnter attended number of classes = ";
	cin>>attended_classes;
	
	cout<<"\nDo you have any leave for medical reason? Type Y(1) for yes and N(0) for No = ";
	cin>>medical_leave_cause;
	if(medical_leave_cause==1)
		{
		cout<<"\nHow many leaves for medical cause? = ";
		cin>>medical_leave;
		
		attended_classes=attended_classes+medical_leave;
		attended_classes_per=attended_classes*100/total_classes;
		cout<<"\nThe percentage of attended classes = "<<attended_classes_per;
		}
		else		
			attended_classes_per=attended_classes*100/total_classes;
			cout<<"\nThe percentage of attended classes = "<<attended_classes_per;
	
	
	if(attended_classes_per>=75)
		cout<<"\nThe student is allowed to sit in the exam";
	else
		cout<<"\nIt is not allowded to sit the student in the exam";
}
