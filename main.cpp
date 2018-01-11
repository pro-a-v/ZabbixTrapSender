#include <iostream>
#include "zbxsender.hpp"

using namespace std;

int main()
{
    ZbxSender zbx;
    zbx.setServer(std::string("IP"), 10051);
    zbx.setHostKey(std::string("test"),std::string("testkey"));
    sleep(5);
    zbx.send(std::string("1 таівлоцувалоаилоцвлотиршгцйивольцуиволрфиіволтфіиволфиівфіолвифолів"));
    zbx.send(std::string("2 таівлоцувалоаилоцвлотиршгцйивольцуиволрфиіволтфіиволфиівфіолвифолів"));
    sleep(35);
    return 0;
}
