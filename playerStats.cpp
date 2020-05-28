#include <iostream>
#include <string>
using namespace std;

class PlayerData{
    private:
        string primaryPosition, secondaryPosition, teamName, classLevel;
        short int age, yearsLeft, year;
        double contractValue;
    public:
        //Constructor
        PlayerData(string pp, string sp, string t, short int a, string cl, short int yl){
            primaryPosition = pp;
            secondaryPosition = sp;
            teamName = t;
            age = a;
            classLevel = cl;
            yearsLeft = yl;
        }
        void CalculateContract(){
            if(yearsLeft == 0)
                cout << "Free Agent" << endl;
            else
                cout << "This player is owed " << contractValue << " million over the next " << yearsLeft << " years\n";
        }
};






int main(){
    PlayerData pd("Center Field", "Left Field", "Los Angeles Angels", 27, 124, 3);
    cout << "Hello World";
    cin.get();
    return 0;
}

