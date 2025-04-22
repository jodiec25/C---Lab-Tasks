#include <iostream> 
#include <string>

using namespace std;

int main () {

    string CodeLoop[] = {"B123","C234","A345","C15","B177", "G3003","C235","B179"};
    int sizes = sizeof(CodeLoop) / sizeof(CodeLoop[0]);

    for (int j = 0; j < sizes; j++) {
        if (CodeLoop[j][0] == 'B') {
            cout << CodeLoop[j] << endl;
        }
    }
    
    return 0;
}