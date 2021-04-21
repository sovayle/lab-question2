/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Lecturer: Dr.Norlia Yusof
*/ 
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#define EMP_COUNT 8
#define DAYS 7
using namespace std;

void read_data(string name[], double ar[][DAYS])
{
	int i=0;
	for (int i=0;i<EMP_COUNT;i++)
	{
		cin >> name[i]; //0
		for (int j=0;j<DAYS;j++)
    	{
    		cin >> ar[i][j];
		}
	}
	
	//output 1
	cout << endl;
	cout << "Name\t\t" << "Sun\t" << "Mon\t" << "Tue\t" << "Wed\t" << "Th\t" << "Fri\t" << "Sat" << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	for (int i=0;i<EMP_COUNT;i++)
	{
		cout << name[i] << "\t\t"; //0
		for (int j=0;j<DAYS;j++)
    	{

    		cout << ar[i][j] << "\t";
		}
		cout << endl;
	}

}

void calculate_data(string name[], double ar[][DAYS])
{
	int totalHours=0, highestHour=0;
	//output 2
	cout << endl << endl;
	cout << "Name\t\t" << "Total hours\t\t" << "Highest Working hours\t\t" << endl;
	cout << "----------------------------------------------------------------------------------------" << endl;
	for (int i=0;i<EMP_COUNT;i++)
	{
		cout << name[i] << "\t\t\t"; //0
		for (int j=0;j<DAYS;j++)
    	{
    		if(ar[i][j] > highestHour)
    		{
    			highestHour = ar[i][j];
			}
    		totalHours += ar[i][j];
		}
		cout << totalHours << "\t\t\t";
		cout << highestHour;
		totalHours = 0,highestHour = 0;
		cout << endl;
	}

	
}

int main() 
{
    string names[EMP_COUNT];
    double arr[EMP_COUNT][DAYS]; //store seven day work hours
	
	read_data(names,arr);
	calculate_data(names,arr);

    return 0;
}
/*Ismail 2 4 3 4 5 8 8
Atikah 7 3 4 3 3 4 4
Ravu 3 3 4 3 3 2 2
Sumaia 9 3 4 7 3 4 1
Jonathan 3 5 4 3 6 3 8
Halimah 3 4 4 6 3 4 4
Salleh 3 7 4 8 3 8 4
Khadijah 6 3 5 9 2 7 9*/
