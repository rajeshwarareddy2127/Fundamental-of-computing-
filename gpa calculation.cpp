#include<stdio.h>
int main()
{
	int DBMS_units=5;
	int softwareengineering_units=5;
	int bioevs_units=5;
	int POM_units=5;
	int ethicalhacking_units=5;
	int chemistry_units=5;
	int ethics_units=5;
	 
	 char DBMS_grade='A';
	 char softwareengineering_grade='A';
	 char bioevs_grade='A';
	 char POM_grade='B';
	 char ethicalhacking_grade='A';
	 char chemistry_grade='A';
	 char ethics_grade='A';
	 char pe_grade='F';
	 
float total_points=0.0;
int total_units=0;
if(DBMS_grade !='F')
{
	float DBMS_points=0.0;
	switch(DBMS_grade)
	{
		case 's':
			DBMS_points=10.0;
			break;
			case 'A':
				DBMS_points=9.0;
				break;
				case 'B':
					DBMS_points=8.0;
					break;
					case 'C':
					DBMS_points=7.0;
					break;
					case 'F':
					DBMS_points=0.0;
					break;
					
	}
	total_points+=DBMS_points*DBMS_units;
	total_units+=DBMS_units;
	 }	 
if(softwareengineering_grade !='F')
{
	float softwareengineering_points=0.0;
	switch(softwareengineering_grade)
	{case 'S':
		softwareengineering_points=10.0;
		break;
		case 'A':
			softwareengineering_points=9.0;
			break;
			case 'B':
				softwareengineering_points=8.0;
				break;
				case 'c':
					softwareengineering_points=7.0;
					break;
					case 'F':
						softwareengineering_points=0.0;
						break;
	}
	total_points+=softwareengineering_points*softwareengineering_units;
	total_units+=softwareengineering_units;
}
if(bioevs_grade!='F'){
}
if(POM_grade!='F'){
}
if(ethicalhacking_grade!='F'){
}
if(chemistry_grade!='F'){
}
if(ethics_grade!='F'){
}
if(pe_grade!='F'){
}
float gpa=total_points/total_units;
printf("your gpa for this semester is:%.2f\n",gpa);
return 0;
}