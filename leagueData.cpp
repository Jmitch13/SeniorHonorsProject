#include <vector>
#include <iostream>
#include<fstream>
#include"teamData.cpp"
using namespace std;
#define NUM_TEAMS 30


class leagueData{
private:
    vector<team>thirtyTeams;
public:
    void addTeam(string teamName, double teamSalary, int wins, int playoffWins){
        thirtyTeams.push_back(team(teamName, teamSalary, wins, playoffWins));
    }
    
    void createVectorFromFile(){
        ifstream file("teamData.txt");
        if (file.is_open()){
            string teamName;
            double teamSalary;
            short int wins;
            short int playoffWins;
            //Reads all 4 parts of a product from the file into the program
            while (file >> teamName >> teamSalary >> wins >> playoffWins) {
                addTeam(teamName, teamSalary, wins, playoffWins);
            }
            file.close();
        } 
        else {
            throw invalid_argument("Could not open file");
        }
    }


    void printLeagueData(){
        for(int i = 0; i < NUM_TEAMS; i++)
          thirtyTeams[i].getTeamData(); 
    }
};

int main(){    
    leagueData league;
    league.createVectorFromFile();
    league.printLeagueData();
    return 0;
}