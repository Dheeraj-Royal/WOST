#include<stdio.h>
int main(){
	
	int date,month,year,n_year,result,n_result;
	int jan=1,feb=4,march=4,april=0,may=2,june=5,july=0,aug=3,sept=6,oct=1,nov=4,dec=6;   //assigning month codes
	printf("Enter the date:");
	scanf("%d",&date);
	printf("Enter the month:");
	scanf("%d",&month);
	printf("Enter the year:");
	scanf("%d",&year);
	printf("The date you entered is : %d/%d/%d",date,month,year);
	year=year%100;
	n_year=year/4;
	switch(month){
		case 1:
			result = date+year+n_year+jan;
			break;
		case 2:
			result = date+year+n_year+feb;
			break;
		case 3:
			result = date+year+n_year+march;
			break;
		case 4:
			result = date+year+n_year+april;
			break;
		case 5:
			result = date+year+n_year+may;
			break;
		case 6:
			result = date+year+n_year+june;
			break;
		case 7:
			result = date+year+n_year+july;
			break;
		case 8:
			result = date+year+n_year+aug;
			break;
		case 9:
			result = date+year+n_year+sept;
			break;
		case 10:
			result = date+year+n_year+oct;
			break;
		case 11:
			result = date+year+n_year+nov;
			break;
		case 12:
			result = date+year+n_year+dec;
			break;											
	}
	n_result = result%7-1;
	switch(n_result){
		case 0:
			printf("The day on the particular date you entered is :\n 'SATURDAY'");
			break;
		case 1:
			printf("The day on the particular date you entered is :\n 'SUNDAY'");
			break;
		case 2:
			printf("The day on the particular date you entered is :\n 'MONDAY'");
			break;	
		case 3:
			printf("The day on the particular date you entered is :\n 'TUESDAY'");
			break;	
		case 4:
			printf("The day on the particular date you entered is :\n 'WEDNESDAY'");
			break;	
		case 5:
			printf("The day on the particular date you entered is :\n 'THURSDAY'");
			break;	
		case 6:
			printf("The day on the particular date you entered is :\n 'FRIDAY'");
			break;								
	}
	return 0;
	
}
