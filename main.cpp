#include <iostream>
#include <string>
#include "ingredientGenerator.h"
#include "bunGenerator.h"

using namespace std;

int main ()
{


    //Prelim: Prompt user for their name
        string name="";
    cout << "\n      \"If you're going to make a sandwich I will be needing your name,\"\n";
    cout << "      says the tall, judgemental waiter in his thick French accent.\n";
    cout << "   >> Enter your name:\n";
        getline(cin, name);
    cout << "      \"Very well,\"\n      he retorts, while guiding you towards the hot, bustling kitchen.\n\n";

    //Intro with prompt for a password ("knock knock")
    string enterTheKitchen=""; //initiate enterTheKitchen
    cout << "   >> Knock twice on the kitchen door so the chef can let you in.\n";
    getline(cin, enterTheKitchen);

    //Create obstacle until correct knock is performed
    while (enterTheKitchen != "knock knock")
    {   cout << "   >> The chef can't hear you! Try again.\n";
        getline (cin, enterTheKitchen);
    }

    //Output message to let the user know the chef is on their way
    cout << "\n      The chef's ear's prick up! He let's you in to blindly make your sandwich.\n";
    cout << "      \"" << name << "! You are so much sexier than I ever could have imagined.\"\n";
    cout << "      The stubby sweating fold of skin waddles towards you and places his greasy hand in yours.\n";
    cout << "      \"I can already tell that you're going to make one hell of a sandwich.\"\n";

    //Ensure the user has manners
    string thankYou="";
    cout << "\n   >> Say \"thank you\". Let the man know you are worthy.\n";
    getline (cin, thankYou);

    //Kick the user out of the kitchen if they are ungrateful
    if(thankYou != "thank you"){
        cout << "      \"Get the fuck out of my kitchen.\"\n";
        return 0;
    }

    //Drug the user so they can't remember making their sandwich
    cout << "\n      \"Oh you're welcome kid. let's get started!\"\n";
    cout << "\n   >> Press enter to get started.\n";
    string enter;
    getline (cin, enter);

    cout << "      He hands you a strong drink and forcefully motions for you to take a sip.\n";
    cout << "\n   >> Press enter to take a sip.\n";
    getline (cin, enter);
    cout << "      Before you know it you're out cold.\n\n";

    //Wake up
    cout << "   >> Press enter to come to.\n";
    getline (cin, enter);

    //New dialogue and user input to slow down the program
    cout << "      \"" << name << "! Are you alright?!\"\n";
    cout << "      The chef asks, seemingly worried.\n";
    cout << "\n   >> Answer the man.\n";
    string areYouAlright;
    getline(cin, areYouAlright);
    if(areYouAlright == "fuck you"){
        cout << "      \"Get the fuck out of my kitchen.\"\n";
        return 0;
    }

    cout << "      \"Haha! " << areYouAlright << "! Classic " << name << ".\n";
    cout << "      \"Well buddy, you made a monstrosity of a sandwich while you were going crazy back there.\"\n\n";
    cout << "      \"How many filthy layers is that?\"\n";
    int layerNum;
    cin >> layerNum;
    cout << "\n   >> Press enter to look down at the bench.\n";
    getline (cin, enter);

    cout << "\n      You look down and there it is, stacked like a pile of bodies:\n\n";

    bunGenerator(1);
    ingredientGenerator(layerNum);
    bunGenerator(1);
    cout << "\n";


    return 0;
}