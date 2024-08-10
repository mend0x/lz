#include <iostream>
#include <string>
#include <filesystem>

//Creates aliases for the namespace and replaces it with fs
namespace fs = std::filesystem;

int main() {
//Gets the address of the directory
fs::path dir = fs::current_path();

//Print the separation line at the beginning 
std::cout << "--------------" << std::endl;

//Insert the ├ in front of each file
for (const auto& entry : fs::directory_iterator(dir)){
    std::cout << "  ├" << entry.path().filename().string() << std::endl;

}

//Print final separation line 
std::cout << "--------------" << std::endl;

//Return to 0 to indicate successful completion 
return 0;

}
