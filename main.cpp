#include <cstring>
#include <iostream>

using namespace std;

const char * modes[] = {"ai", "gaming", "status"};
enum mode {MODE_AI, MODE_GAMING, MODE_STATUS, MODE_INVALID};

enum mode parse_mode(const char * s) {
    for (int i = 0; i < 2; i++) {
        if (strcmp(s,modes[i]) == 0) {
            return (enum mode)i;
        }
    }

    return MODE_INVALID;
}

int main(int argc, const char * argv[]) {
    if (argc != 3) {
        cout << "Usage: <mode>" << endl;
        exit(1);
    }
    cout << endl;
    switch (parse_mode(argv[1])) {
        case MODE_AI:
            cout << "TO-DO: AI";
            break;
        case MODE_GAMING:
            cout << "TO-DO: GAMING";
            break;
            case MODE_STATUS:
            cout << "this reminds me of that nav song status; lost my balance but im okayyy";
            break;
            case MODE_INVALID:
            cout << "Youre an idiot";
            break;
    }
}