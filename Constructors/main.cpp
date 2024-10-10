#include <iostream>

using namespace std;

class games {
    public:
        string player;
        double score;
        bool results;

        games(string player, double score, bool results){
            this -> player = player;
            this -> score = score;
            this -> results = results;
        }

};

int main()
{
    games player1("Apex Villain X", 998, true);
    cout << "Player Name : " << player1.player << '\n';
    cout << "Player Score : " << player1.score << '\n';
    cout << "Player Status : " << player1.results << '\n';
}
