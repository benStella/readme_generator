#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string generateReadme();

int main()
{
    generateReadme();
    return 0;
}

string generateReadme()
{
    // variables
    string readmeTitle;
    string readmeDescription;
    string readmeTableOfContents;
    string installAndRun;
    string useProject;
    string credits;
    string license;

    // input readme title
    cout << "title of README: ";
    getline(cin, readmeTitle);

    // input readme description
    cout << "README Description: ";
    getline(cin, readmeDescription);

    // input how to run and install program
    cout << "how to install: ";
    getline(cin, installAndRun);

    // usage
    cout << "usage: ";
    getline(cin, useProject);

    // input the credits
    cout << "credits: ";
    getline(cin, credits);

    // generate and open readme
    fstream readme;
    readme.open("README.md", ios::out);

    // if readme is open write all inputted data to it
    if (readme.is_open())
    {
        readme << "# " << readmeTitle << endl
               << "## "
               << "Description" << endl
               << readmeDescription << endl
               << "## "
               << "Installation" << endl
               << installAndRun << endl
               << "## "
               << "Usage" << endl
               << useProject << endl
               << "## "
               << "Credits" << endl
               << credits;
        readme.close();
    }
    cout << "readme created" << endl;
}
