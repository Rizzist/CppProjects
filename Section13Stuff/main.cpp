#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
public:
    //attributes
    string name;
    int health;
    int xp;
    
    //Constructors
    Player();
    Player(string name);
    
    //methods
    void talk(string s);
    bool is_dead();
    
    
    //Destructors
    ~Player(){
        cout << "Player Destroyed" << endl;
    }
};


int main() {
    Player frank;
    //Player hero;
    {
        Player jon("Jon");
        jon.talk("sup bro");
    }
    
    //Player players[] {frank, hero};
    
    //vector<Player>player_vec {frank};
    //player_vec.push_back(hero);
    
    Player *enemy;
    enemy = new Player;
    delete enemy;
    
    cout << "Hello World" << endl;
    cout << frank.health << endl;
    frank.talk("heya");
    
    return 0;
}

void Player::talk(string s) {
    cout << s;
}

Player::Player(string s)
    :name {s}, health{0}, xp{0} {
    cout << "Coolio";
}

Player::Player(): Player("none") {
    cout << "this";
}
