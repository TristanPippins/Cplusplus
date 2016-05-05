#include <iostream>

using namespace std;

int main(){
    int mark;
    cout << "on a scalle of 1 to 100, how are you doing?" << endl;
    cin >> mark;

    if(mark >= 90)
    {
            cout << "yay! thats great!" << endl;
            cout << "Keep it up!!!!" << endl;
    }
    else if(mark >= 80)
    {
            cout << "For the most part, i like it!" << endl;
            cout << "Keep it up!" << endl;
    }
    else if(mark >= 70)
    {
            cout << "Better than satisfied." << endl;
            cout << "Better than a bad day." << endl;
    }
    else if(mark >= 60)
    {
            cout << "Satisfied." << endl;
            cout << "Cheer up, it gets better." << endl;
    }
    else if(mark >= 50)
    {
            cout << "I'm sorry." << endl;
            cout << "We all have our bad days..." << endl;
    }
    else if(mark >= 40)
    {
            cout << "Just go home." << endl;
            cout << "Tommarow is a new day." << endl;
    }
    else
    {
            cout << "You need to go see a counciler." << endl;
            cout << "My friend." << endl;
    }

    return 0;
}
