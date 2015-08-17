//
//  main.cpp
//  Personal_HomeKit
//
//  Created by Wai Man Chan on 4/8/14.
//
//

#include <iostream>
#include <fstream>
#include "PHKNetworkIP.h"
#include "Accessory.h"
#include "kmadd_common.h"

extern "C" {
#include "PHKArduinoLightInterface.h"
}

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    KMADD_TRACE_AT;
    initAccessorySet();
    setupPort();
    KMADD_TRACE_AT;
    
    PHKNetworkIP networkIP;
    do {
        networkIP.handleConnection();
    } while (true);
    KMADD_TRACE_AT;
    return 0;
}
