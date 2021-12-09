#ifndef REPORT_H
#define REPORT_H

#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;

class report {
private :
         int admno;
	     string name;
	     string fname;
	     int st;
	     char section;
protected:
	      int phy;
	      int chem;
	      int math;
	      int comp;
	      int eng;
	      int total;
	      float per;
	      char grade[3];
public	:
	     void main_menu();    //function to display main menu
	     void search_menu();  // function to display search menu
	     void report_menu( );  // function to  display report menu
         void read_data( );	  // function to read all the data members from the
         void calculate();      // function to calculate total marks, per and grade
	     void disp_data();	  // function to display data members on the screen
	     void add_record ();  // function to add student record in a data file
	     void del_record ();  //function to delete a record from the data file
         void modify_record( );  //	Function to modify a record in a data file
	     void search_admno( ); // function to read student admno and search the
         void single_report_card();// function to show the report of student
         void report_single();  // function to show single student report card
         void report_class();     // function to show class report of a single class
};

#endif // REPORT_H
