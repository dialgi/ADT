#include <iostream>
using namespace std;

enum rankk {
    iron,
    silver,
    gold,
    platinum,
    ascendant,
    diamond,
    imortal,
    radiant
};

int main() {
    rankk rankplayer = silver;
    cout<<"rank valorant : ";
    switch (rankplayer){
        case iron:
            cout<<"iron"<<endl;
            break;
        case silver:
            cout<<"silver"<<endl;
            break;
        case gold:
            cout<<"gold"<<endl;
            break;
        case platinum:
            cout<<"platinum"<<endl;
            break;
        case ascendant:
            cout<<"ascendant"<<endl;
            break;
        case imortal:
            cout<<"imortal"<<endl;
            break;
        case radiant:
            cout<<"radiant"<<endl;
            break;
        default:
            cout << "unranked" << endl;
    }

    return 0;
}
