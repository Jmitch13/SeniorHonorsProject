#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;
#define NUM_TEAMS 30

class team{
protected:
    string teamName;    
    short int playoffWins;
    short int wins;
    double teamPayroll;
    double pricePerWin;
public:
    //default constructor
    team(){
        teamName = "Enter Name";
        playoffWins = 0;
        wins = 0;
        teamPayroll = 0;
    }
    //constructor
    team(const string& tn, const double& tp, const int& w, const int& pw){
        teamName = tn;
        playoffWins = pw;
        wins = w;
        teamPayroll = tp;
    }
    //Calculate the win cost
    double winCost(){
        pricePerWin = teamPayroll/wins;
        
    }
    string getTeamName(){
        return teamName;
    }

    double getTeamPayroll(){
        return teamPayroll;
    }

    int getTeamWins(){
        return wins;
    }

    int getTeamPlayoffWins(){
        return playoffWins;
    }
    int getTeamPPW(){
        return winCost();
    }
    void calculatePayroll(){
        if(teamPayroll < 1000)
            cout << "Team Payroll(in millions): " << fixed << setprecision(2) << teamPayroll << endl;
        else
            cout << "Team Payroll(billions): " << teamPayroll/1000 << endl;

    }

    void getTeamData(){
        cout << "Team Name: " << teamName << endl;
        calculatePayroll();
        cout << "Wins: " << wins << endl; 
        cout << "Playoff Wins: " << playoffWins << endl;
        cout << "Price Per Win(in millions): " << fixed << setprecision(2) << winCost() << endl << endl ;
    }

};