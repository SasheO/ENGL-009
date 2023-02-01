#include <iostream>
#include <string>
using namespace std;

int main(){
    string username;
    string story_inputs[10];
    string story_prompts[12] = {"One day, two siblings, ", " and ", " were taking a stroll down the ", ". Suddenly, a huge "," fell at their feet. Cautiously, they "," it. It began to ",", and alarmed, they ran away. After running for a few minutes, they decided to stop by a ", " to catch their breath and ", ". In ",", they said, 'What a "," day we had!'"};

    cout << "Welcome to Sashe's Fill In the Bl_nk!" << endl;

    cout << "What is your name? ";
    getline(cin, username);
    
    for (int i=1; i<12; i++){
        cout << story_prompts[i-1] << "__(" << i << ")__"; 
    }
    cout << story_prompts[11]; 

    cout << endl;
    cout << endl;
    cout << endl;


    cout << "Time for you, " << username << ", to Fill In the Bl_nk!" << endl;

    for (int i=1; i<11; i++){
        cout << "Word(s) for blank " << i << ": ";
        getline(cin, story_inputs[i-1]);
    }


    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Here is the complete story:" << endl;
    cout << endl;

    for (int i=1; i<12; i++){
        cout << story_prompts[i-1] << story_inputs[i-1]; 
    }
    cout << story_prompts[11]; 
    return 0;
}