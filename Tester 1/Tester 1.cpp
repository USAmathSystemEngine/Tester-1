
#include <iostream>
#include<chrono>
#include<ctime>
#include <thread>
#include<dos.h>
#include<Windows.h>
#include <string>
#include<vector>
#include<sstream>
#include <iomanip>
using namespace std;



	






int main()
{
	cout << "               USA math Minstry and Organization            \n";
	string answer;
	int counter = 0;

	string Sent;




	while (answer != "No")
	{

		if (counter == 0)
		{
			cout << "result of  the executtion of your code  !! \n";
			cout << endl;
			cout << "Please Enter you calculation in a + b form  \n";
			getline(cin, Sent);
		}

		//Your code here**************************************************

		else
		{
			cout << "Please Enter you calculation in a + b form again \n";
			cin.ignore();
			getline(cin, Sent);


		}


		stringstream ssForVsent(Sent);
		vector<string>Vsent;
		string indiv;
		char space = ' ';

		double GameAnswer1=0;

		while (getline(ssForVsent, indiv, space))
		{
			Vsent.push_back(indiv);
		}

		if (Vsent[1] == "+")
		{
			GameAnswer1 = stod(Vsent[0]) + stod(Vsent[2]);
			cout << setprecision(3) << stod(Vsent[0]) << "+" << stod(Vsent[2]) << " = " <<" ? " << endl;
		}
		else  if (Vsent[1] == "-")
		{
			GameAnswer1 = stod(Vsent[0]) - stod(Vsent[2]);
			cout << setprecision(3) << stod(Vsent[0]) << "-" << stod(Vsent[2]) << " = " << " ? " << endl;
		}
		else  if (Vsent[1] == "*")

		{
			GameAnswer1 = stod(Vsent[0]) * stod(Vsent[2]);
			cout << setprecision(3) << stod(Vsent[0]) << "*" << stod(Vsent[2]) << " = " << " ? " << endl;
		}
		else  if (Vsent[1] == "/")
		{
			GameAnswer1 = stod(Vsent[0]) / stod(Vsent[2]);
			cout << setprecision(3) << stod(Vsent[0]) << "/" << stod(Vsent[2]) << " = " << " ? " << endl;
		}
		else
		{
			cout << "Please enter you calculation right form a + b ,thank you\n";
		}

		double GameAnswer2 = 0;
		cout << "What you think :" << endl;
		cin >> GameAnswer2;
		if (GameAnswer2 == GameAnswer1)
			cout << "Great" << endl;
		else
			cout << "you were off : " << GameAnswer2 - GameAnswer1 << endl;


		//Your end of the code********************************************
		counter++;
		cout << "Do you want to Analyze your code  for " << counter << " time ?\n";

		cin >> answer;
	}

	
}






