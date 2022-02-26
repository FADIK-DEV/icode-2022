#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main() {
    cout << endl;
    
    cout << "Hi! My name is Sam and I am here to teach you about the Burj Khalifa!" << endl;
    cout << "Would you like to learn about Burj Khalifa? ";
    string learn_about_burj_khalifa;
    cin >> learn_about_burj_khalifa;
    if (learn_about_burj_khalifa == "yes" or learn_about_burj_khalifa == "Yes" or learn_about_burj_khalifa == "YES") {
        cout << "Perfect! let's begin our journey" << endl;
    }
    else if (learn_about_burj_khalifa == "no" or learn_about_burj_khalifa == "No" or learn_about_burj_khalifa == "NO") {
        cout << "Come on it will be fun!!!! Just give it a try" << endl;
    }
    else {
        cout << "Hmmm. I didn't understand, but i'll teach you anyway" << endl;
    }

    cout << endl;
    cout << "Here are some facts about Burj Khalifa that you probably didn't know:" << endl;
    usleep(90000);
    cout << "- The Burj Khalifa height is a staggering 828 meters (2716.5 feet) tall!" << endl;
    usleep(2000);
    cout << "- It's three times as tall as the Eiffel Tower and nearly twice as tall as the Empire State Building!" << endl;
    usleep(2000);
    cout << "- The Burj Khalifa elevator speed is 10 meters per second, making the elevators among the fastest in the world!" << endl;
    usleep(2000);
    cout << "- Excavation began in January 2004. Six years later, the Burj Khalifa finally opened in January 2010!" << endl;
    usleep(2000);
    cout << "- It has the highest outdoor observation deck in the world!" << endl;
    usleep(2000);
    cout << endl;
    cout << endl;
    cout << "Okay, now you can take a quiz about Burj Khalifa, let's see how many you get correct!" << endl;
    int questions_correct = 0;
    string q1;
    string q2;
    string q3;
    cout << "The first question is: How many meters is the Burj Khalifa? ";
    cin >> q1;

    if (q1 == "828 meters" or q1 == "828" or q1 == "828 Meters") {
        cout << "You got it correct!" << endl;
        questions_correct++;
    }
    else {
        cout << "Wrong!" << endl;
    }

    cout << "The second question is: How many meters is the Burj Khalifa elevator speed per second? ";
    cin >> q2;

    if (q2 == "10 meters" or q2 == "10" or q2 == "10 meters per second") {
        cout << "You got it correct!" << endl;
        questions_correct++;
    }
    else {
        cout << "Wrong!" << endl;
    }

    cout << "The third question is: Is the Burj Khalifa the tallest building in the world? ";
    cin >> q3;

    if (q3 == "yes" or q3 == "Yes" or q3 == "YES") {
        cout << "You got it correct!" << endl;
        questions_correct++;
    }
    else {
        cout << "Wrong!" << endl;
    }

    usleep(2000);
    cout << "Great job on the quiz! Your score was:" << endl;
    usleep(2000);

    if (questions_correct == 0) {
        cout << "0/3" << endl;
    }
    else if (questions_correct == 1) {
        cout << "1/3" << endl;
    }
    else if (questions_correct == 2) {
        cout << "2/3" << endl;
    }
    else if (questions_correct == 3) {
        cout << "3/3" << endl;
    }
    usleep(2000);
    cout << "Thank you for using this program!" << endl;
    usleep(2000);
    cout << "It was fun knowing you!" << endl;
    usleep(2000);
    cout << "Godbye!" << endl;

    cout << endl;
    return 0;
}