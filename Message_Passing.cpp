#include <iostream>
#include <string>
using namespace std;

// Receiver Object
class TV {
private:
    bool isOn = false;      // Hidden state
    bool isMuted = false;   // Hidden state

public:
    // Message receiver method
    void processCommand(string command) {
        if (command == "power") {
            isOn = !isOn; // Toggle power on/off
            if (isOn) {
                cout << "TV: Power ON" << endl;
            } else {
                cout << "TV: Power OFF" << endl;
            }
        } 
        else if (command == "mute") {
            if (isOn) {
                isMuted = !isMuted; // Toggle mute status
                if (isMuted) {
                    cout << "TV: Sound Muted" << endl;
                } else {
                    cout << "TV: Sound Unmuted" << endl;
                }
            } else {
                cout << "TV: Cannot mute while TV is OFF." << endl;
            }
        } 
        else {
            cout << "TV: Unknown command." << endl;
        }
    }
};

// Sender Object
class Remote {
public:
    // Passes a string command to the TV object
    void pressButton(TV &tv, string buttonName) {
        cout << "Remote: Button '" << buttonName << "' pressed." << endl;
        tv.processCommand(buttonName); // Message passing in action
    }
};

int main() {
    TV myTV;
    Remote myRemote;

    // Turn on the TV
    myRemote.pressButton(myTV, "power");

    cout << "-----------------------" << endl;

    // Mute the TV
    myRemote.pressButton(myTV, "mute");

    cout << "-----------------------" << endl;

    // Turn off the TV
    myRemote.pressButton(myTV, "power");

    return 0;
}