#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

#include "SerialPortWrapper.h"
#include "Control.h"

using namespace std;

int main()
{
    /*
    vector<string> ports = SerialPortWrapper::listAvailablePorts();
    cout << "Number of found serial ports: " << ports.size() << endl;
    for (unsigned int i = 0; i < ports.size(); i++) {
        cout << "\tPort name: " << ports.at(i) << endl;
    }
    */
    // connection


    Control ctrl;

    ctrl.command_screen();

    while (!ctrl.exit()) {
        ctrl.proc();
    }


    //methods.filter_incoming_line("2222:12 23.22:22:2 123");
/*
    SerialPortWrapper *serial = new SerialPortWrapper("COM3", 115200);
    serial->openPort();

    string line;
    while(1){
        serial->readLineFromPort(&line);
        if (line.length() > 0){
            cout << line << endl;
        }
    }
    serial->closePort();


/*
    char *endptr;
    cout << strtol("23", &endptr, 10) << endl;
*/
    return 0;
}


