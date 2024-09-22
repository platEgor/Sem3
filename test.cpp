#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

void f(string name) {
    static int dante;
    static int vergil;
    static int nero;
    cout << "\n";
    if (name == "dante" || name == "Dante"){
        cout << "Jackpot!";
        dante ++;
    }
    else if(name == "vergil" || name == "Vergil"){
        cout << "Where is your MOTIVATON?";
        vergil ++;
    }
    else if(name == "deadweight" || name == "Deadweight"){
        cout << "Fuck You!";
        nero ++;
    }
    else{
        cout << "Character unidentified....";
    }
    sleep_for(nanoseconds(2000000000));
    cout << "\n\n" << *(&dante) << " Dante(s) in lobby\n" << *(&vergil) << " Vergil(s) in lobby\n" << *(&nero) << " Nero(s) in lobby\n\n";
    sleep_for(nanoseconds(1000000000));
}
int main() {
    string name;
    while(true){
        cout << "Choose your character: [Dante] [Vergil] [Nero]\n(type 'stop' to close lobby)\n";
        cin >> name;
        if(name == "stop"){
            cout << "Closing lobby";
            sleep_for(nanoseconds(1000000000));
            cout << ".";
            sleep_for(nanoseconds(1000000000));
            cout << ".";
            sleep_for(nanoseconds(1000000000));
            cout << ".";
            sleep_for(nanoseconds(1000000000));
            cout << ".";
            break;
        }
        else {
            f(name);
        }
    }
}