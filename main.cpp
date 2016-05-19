#include <iostream>
#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

struct atomElement {
    atomElement(const string &symbol, const string &name, int number, double mass, double electronegativity,
                double density, double meltingPoint, double boilingPoint, double ionizationEnergy, int group,
                int period, const vector<int> &mainConfigurations) : symbol(symbol), name(name), number(number),
                                                                     mass(mass), electronegativity(electronegativity),
                                                                     density(density), meltingPoint(meltingPoint),
                                                                     boilingPoint(boilingPoint),
                                                                     ionizationEnergy(ionizationEnergy), group(group),
                                                                     period(period),
                                                                     mainConfigurations(mainConfigurations) { }

    atomElement() {}

    //!< The element's symbol
    string symbol;
    //!< The element's full name
    string name;
    //!< The element's atomic number
    int number;
    //!< The element's atomic mass
    double mass;
    //!< The element's electronegativity
    double electronegativity;
    //!< The element's density
    double density;
    //!< The element's melting point
    double meltingPoint;
    //!< The element's boiling point
    double boilingPoint;
    //!< The element's ionization energy
    double ionizationEnergy;
    //!< The element's group
    int group;
    //!< The element's period
    int period;
    //!< The element's main configurations
    vector<int> mainConfigurations;
};

//temps are in celcius
//density at stp in g/L
//most common configuration first
//for the number of configurations just get the size of the array

vector<atomElement> currentEquation;

/** @brief See which elements the user needs and create them
 *  @param input The string of a particular character representing an atom
 *  @return Returns an atomElement type to be used in an equation
 */
atomElement checkElement(string input) {
    atomElement filledElement = atomElement();
    vector<int> commonConfigurations;

    if (input == "H") {
        commonConfigurations = {1, -1};
        return atomElement("H", "Hydrogen", 1, 1.008, 2.20, 0.08988, 259.16*-1, 252.879*-1,
        1312, 1, 1, commonConfigurations);
    }

    return filledElement;
}

string usage = "There is nothing here right now\n";

//TODO function to input parameter and its number

/** @brief Function to test anything I want to test.
 *
 */
void testFN(vector<string> parameterList) {
    cout << "Testing\n";

    for (vector<string>::iterator element = parameterList.begin(); *element != "end"; ++element) {
        cout << *element <<endl;
    }

}

/** @brief The main function, collects parameters and runs functions
 *
 */
int main() {
    string input;
    int inputLength;
    vector<string> parameters;

    cout << "Welcome, please enter parameters. For possible parameters, enter 'help'" << endl;
    getline(cin, input);
    inputLength = (int) input.size();

    if (input == "help" || input == "Help" || input == "h") {
        cout << usage;
        input.erase();
        cin >> input;
    }

    /* Add a space to the end so that the cycle will see where the arguments are done */
    input += " ";
    string parameterHolder = " ";

    for (int i = 0; i < inputLength; ++i) {
        if (input[i] == ' ' || input[i] == '\0') {
            parameters.push_back(parameterHolder);
            parameterHolder.erase();
        } else if (input[i] != '-') {
            /* Append the ith character of input to the end of the parameter holder */
            parameterHolder += input[i];
        }
    }
    parameters.push_back("end");

    /* Create an iterator so that which program to be run can be checked */
    vector<string>::iterator first = parameters.begin();

    cout << "Running program, ";

    if (*first == "testing") {
        testFN(parameters);
    }

    return 0;
}