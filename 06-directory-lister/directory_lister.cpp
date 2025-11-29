#include <iostream>
#include <fstream>
#include <filesystem> 
using namespace std;
namespace fs = std::filesystem;


int main() {
    string path;
    cout << "Enter directory path: ";
    cin >> path;

    ofstream outFile("directory_listing.txt");
    if (!outFile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    if (!fs::exists(path) || !fs::is_directory(path)) {
        cerr << "Invalid directory!" << endl;
        return 1;
    }

    outFile << "Listing of directory: " << path << "\n\n";

    for (const auto& entry : fs::directory_iterator(path)) {
        outFile << (entry.is_directory() ? "[DIR] " : "[FILE] ");
        outFile << entry.path().filename().string() << "\n";
    }

    cout << "Directory listing saved to directory_listing.txt" << endl;
    return 0;
}
