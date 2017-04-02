#include <conio.h>
#include <iostream>
#include <ctime>
#include "2.h"

DataTime::DataTime(int day2, int month2, int year2)
	{
		day = day2;
		month = month2;
		year = year2;
	}

DataTime::DataTime()
	{	
		rawtime = time(0);
		timeinfo = gmtime(&rawtime);
		day = timeinfo->tm_mday;
		month = timeinfo->tm_mon + 1;
		year = timeinfo->tm_year + 1900;
	}

void DataTime::printToday()
	{
		days[0]="Sunday";
		days[1]="Monday";
		days[3]="Tuesday";
		days[4]="Wednesday";
		days[5]="Thursday";
		days[6]="Saturday";

		months[0]="January";
		months[1]="February";
		months[2]="March";
		months[3]="April";
		months[4]="May";
		months[5]="June";
		months[6]="Jule";
		months[7]="August";
		months[8]="September";
		months[9]="October";
		months[10]="November";
		months[11]="December";
		DataTime();
		cout << "Today " << day << "." << months[month-1] << "." << year << "\n"  << endl;
	}

void DataTime::printTomorrow()
	{
		char buffer[80];
		tm t = {};
		t.tm_mday = day;
		t.tm_mon = month - 1;
		t.tm_year= year - 1900;
		t.tm_mday += 1;
		mktime(&t);
		strftime(buffer, 80, "%d %B %Y %A\n", &t); 
		cout << "Tomorrow " << buffer << endl;
	}

void DataTime::printFuture(int N)
	{
		count = N;
		char buffer[80];
		tm t = {};
		t.tm_mday = day;
		t.tm_mon = month - 1;
		t.tm_year= year - 1900;
		t.tm_mday += N;
		mktime(&t);
		strftime(buffer, 80, "%d %B %Y %A\n", &t); 
		cout << "After " << N << " days " << buffer << endl;
	}

void DataTime::printYesterday()
	{
		char buffer[80];
		tm t = {};
		t.tm_mday = day;
		t.tm_mon = month - 1;
		t.tm_year= year - 1900;
		t.tm_mday -= 1;
		mktime(&t);
		strftime(buffer, 80, "%d %B %Y %A\n", &t); 
		cout << "Yesterday was " << buffer << endl;
	}

void DataTime::printPast(int N)
	{
		count = N;
		char buffer[80];
		tm t = {};
		t.tm_mday = day;
		t.tm_mon = month - 1;
		t.tm_year= year - 1900;
		t.tm_mday -= N;
		mktime(&t);
		strftime(buffer, 80, "%d %B %Y %A\n", &t); 
		cout << N << " days ago was " << buffer << endl;
	}

void DataTime::printMonth()
	{
		DataTime();
		cout << "Now is the month of " << months[month-1] << "\n"  << endl;
	}

void DataTime::printWeekDay()
	{
		char buffer[80];
		tm t = {};
		t.tm_mday = day;
		t.tm_mon = month - 1;
		t.tm_year= year - 1900;
		mktime(&t);
		strftime(buffer, 80, " %A\n", &t); 
		cout << "Today " << buffer << endl;
	}

void DataTime::calcDifference(DataTime d1, DataTime d2)
	{
		int day1, month1, year1;
		int day2, month2, year2;
		const int oneday = 0x15180;
		day1 = d1.day;
		month1 = d1.month;
		year1 = d1.year;

		day2 = d2.day;
		month2 = d2.month;
		year2 = d2.year;

		tm FirstDate = {0, 0, 0, day1, month1 - 1, year1 - 0x76C, 0, 0, 0};
		tm SecondDate = {0, 0, 0, day2, month2 - 1, year2 - 0x76C, 0, 0, 0};
		time_t t1 = mktime(&FirstDate);
		time_t t2 = mktime(&SecondDate);
		time_t diff = ((t1 > t2) ? t1 - t2 : t2 - t1) / oneday;
		cout << "Difference in days " << diff << endl;
	}

int main() 
{
	DataTime d1;
	d1.printToday();
	d1.printTomorrow();
	d1.printFuture(3);
	d1.printPast(3);
	d1.printMonth();
	d1.printWeekDay();
	d1.printYesterday();

	DataTime d2(10, 04, 2017);
	d2.printToday();
	d2.printTomorrow();
	d2.printFuture(3);
	d2.printPast(3);
	d2.printMonth();
	d2.printWeekDay();
	d2.printYesterday();
	d2.calcDifference(d1, d2);
	_getch();
	return 0;
}