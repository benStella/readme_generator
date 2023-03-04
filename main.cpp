#include <iostream>
#include <fstream>
using namespace std;

string generateReadme();

int main()
{
    generateReadme();
}

string generateReadme()
{
    string readmeTitle;
    string readmeDescription;
    string readmeTableOfContents;
    string installAndRun;


    cout << "title of README:";
    cin >> readmeTitle;

    cout << "README Description:";
    cin >> readmeDescription;
    
    cout << "readmeTableOfContents";
    cin >> readmeTableOfContents;

    cout << "how to install and run;";
    cin >> installAndRun;
    
    
    
    fstream readme;
    readme.open("README.md", ios::out);

    if(readme.is_open()) {
        readme << "# " << readmeTitle;
        readme.close();
    }
}