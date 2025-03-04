#include<stdio.h>

int main()
{
int Emp_id;
int Dep_no;
char Dsgn_code;

printf("Enter Employee Id:\n");
scanf("%d",&Emp_id);

printf("Enter Dep no\n");
scanf("%d",&Dep_no);

printf("Enter DsgnCode\n");
scanf("%*c%c",&Dsgn_code);

printf("Employee with employee id %d ",Emp_id);

switch(Dep_no)
{
	case 10:
		printf("is working in Marketing");
			break;	

	case 20:
		printf("is working in Management");
		break;	
	
	case 30:
		printf("is working in Sales");
		break;	
	
	case 40:
		printf("is working in Designing");
		break;	
	default:
		printf("Invalid input\n");
}

switch(Dsgn_code)
{

	case 'M':
		printf(" Department as Manager\n");
		break;	

	case 'S':
		printf(" Department as Supervisor\n");
		break;	

	case 's':
		printf(" Departement as Security Officer\n");
		break;

	case 'C':
		printf(" Department as Clerk\n");
		break;	

	default:
		printf("Invalid input\n");
}


	return 0;
}
