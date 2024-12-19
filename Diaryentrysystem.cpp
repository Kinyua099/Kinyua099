#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

void writeDiaryEntry() {
    string entry;
    cout << "Write your diary entry: ";
    getline(cin, entry);

    ofstream diaryFile("diary.txt", ios::app);
    if (diaryFile.is_open()) {
        time_t now = time(0);
        char* dt = ctime(&now);
        diaryFile << "Date & Time: " << dt << endl;
        diaryFile << "Entry: " << entry << endl;
        diaryFile << "-------------------\n";
        diaryFile.close();
        cout << "Diary entry saved successfully!\n";
    } else {
        cout << "Unable to open diary file.\n";
    }
}

int main() {
    writeDiaryEntry();
    return 0;
}

