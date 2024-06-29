// CPP program to create a timer 
#include <iomanip> 
#include <iostream> 
#include <stdlib.h> 
#include <unistd.h> 
using namespace std; 

// hours, minutes, seconds of timer 
int hours = 0; 
int minutes = 0; 
int seconds = 0; 

// function to display the timer 
void Stopwatch() 
{ 
	// system call to clear the screen 
	system("cls"); 

	cout << setfill(' ') << setw(40) <<"		 Stopwatch		 \n"; 
	cout << setfill(' ') << setw(65) << " ------------------------------------\n"; 
	cout << setfill(' ') << setw(29); 
	cout << "| " << setfill('0') << setw(2) << hours << " hours | "; 
	cout << setfill('0') << setw(2) << minutes << " minutes | "; 
	cout << setfill('0') << setw(2) << seconds << " seconds |" << endl; 
	cout << setfill(' ') << setw(65) << " ------------------------------------\n";    
} 

void mechanism() 
{ 
	// infinte loop because timer will keep counting. 
	while (true) { 
	
		// displaying stopwatch
		Stopwatch(); 
		// sleep system call to sleep 
		// for 1 second 
		sleep(1); 

		// increment seconds 
		seconds++; 

		// if seconds reaches 60 
		if (seconds == 60)
         { 
		
			// increment minutes 
			minutes++; 

			// if minutes reaches 60 
			if (minutes == 60) { 
		
				// increment hours 
				hours++; 
				minutes = 0; 
			} 
			seconds = 0; 
		} 
	} 
} 


int main() 
{
    cout<<"To start stopwatch :\n";
    system("pause");
	mechanism();
	return 0; 
} 
