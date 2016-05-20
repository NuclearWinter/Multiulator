#include <iostream>
#include <cmath>
#include <vector>
#include <iostream>
#include "mainpage.hpp"

using namespace std;

class periodicElement {
    private:
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
    public:
        periodicElement(string symbol, string name, int number, double mass,  double density, int group, int period,
                        double meltingPoint, double boilingPoint, double ionizationEnergy, double electronegativity,
                        vector<int> mainconfigurations) {
            this->symbol  = symbol;
            this->name    = name;
            this->number  = number;
            this->mass    = mass;
            this->density = density;
            this->group   = group;
            this->period  = period;
            this->meltingPoint       = meltingPoint;
            this->boilingPoint       = boilingPoint;
            this->ionizationEnergy   = ionizationEnergy;
            this->electronegativity  = electronegativity;
            this->mainConfigurations = mainconfigurations;
        };

        periodicElement(string symbol, double mass) {
            this->symbol = symbol;
            this->mass   = mass;
        }
};

/** @brief See which elements the user needs and create them
 *  @param input The string of a particular character representing an element
 *  @return Returns whether the element was found or not
 */
bool checkElement(string input, atomElement *placeIn) {
    printf("Check Element with %s", input.c_str());

    atomElement filledElement = atomElement(false);
    vector<int> commonConfigurations;

    if (input == "H") {
        commonConfigurations = {1, -1};
        *placeIn = atomElement("H", "Hydrogen", 1, 1.008, 2.20, 0.08988, 259.16*-1, 252.879*-1,
        1312, 1, 1, commonConfigurations);
        return true;
    }

    return false;
}

/** @brief Record the input for various places in the program
*   @return This vector was filled with strings of individual words from this function
*/
vector<string> input() {
    //!< The vector to place the input into
    vector<string> editVector;
    //!< The string to place the raw input into
    string input;
    //!< The amount of characters in input
    int inputLength;

    getline(cin, input);
    inputLength = (int) input.size();

    /* Display the usage for the program if requested by the user*/
    if (input == "help" || input == "Help" || input == "h") {
        cout << "This is the main help screen\n";
        input.erase();
        getline(cin, input);
    }

    /* Add a space to the end so that the cycle will see where the arguments are done */
    //@bug This isn't adding a space to the end
    input += " ";
    //!< This temporarily holds the value for each word in the input, MUST START EMPTY
    string parameterHolder = "";

    for (string::iterator i = input.begin(); i != input.end(); ++i) {
        if (*i == ' ' || (i+1) == input.end()) {
            editVector.push_back(parameterHolder);
            parameterHolder.erase();
        } else if (*i != '-') {
            /* Append the ith character of input to the end of the parameter holder */
            parameterHolder += *i;
        }
    }

    return editVector;
}

/** @brief Display help screens for the various functions in this program
*
*/
string helpScreen(string helpWith) {
    if (helpWith == "molarity") {
        return  "This is the help screen for the molarity function";
    } else if (helpWith == "gramsOfCompound" || helpWith == "gramsofcompound") {
        return "This is the help screen for the grams of compound function";
    } else if (helpWith == "molality") {
        return "This is the help screen for the molality calculator";
    }

    return "Error displaying the help screen for this program, does the program have a help screen? "
            "Is it spelled correctly?\n";
}

/** @brief Gives various values for the inputted element based on the question and amount of the element
*
*/
double whatIsNumber(string question, string element, int amount) {
    printf("What is Number with %i of %s\n", amount, element.c_str());

    double value;

    bool *falseBool = false;
    atomElement *elementFull = *atomElement(&falseBool);
    checkElement(element, &elementFull);

    if (elementFull->filled) {
        value = elementFull->mass;
    } else {
        printf("Unknown element %s, please enter its mass per mole: ", element.c_str());
        cin >> value;
    }

    return value * amount;
}

/** @brief Give the weight of a compound in grams per mole
*
*/
double gramsOfCompound(string compound) {
    printf("Grams of Compound with %s\n", compound.c_str());

    double weight = 0;
    string elementHolder = "";
    int amountOfElement  = 1;

    for (string::iterator letter = compound.begin(); letter != compound.end(); ++letter) {
        if (*letter == ' ' || (letter+1) == compound.end()) {
            weight += whatIsNumber("weight", elementHolder, amountOfElement);
            elementHolder.erase();
            amountOfElement = 1;
        } else if (isalpha(*letter)) {
            elementHolder += *letter;
        } else if (isdigit(*letter)) {
            bool plusOne = isdigit(*(letter+1));
            bool plusTwo = isdigit(*(letter+2));

            //TODO Make this more flexible for inputting different amounts
            if (plusOne && plusTwo) {
                amountOfElement += stoi(*(letter+2) + "");
                amountOfElement += stod(*(letter+1) + "") * 10;
                amountOfElement += stod(*(letter) + "") * 100;
            } else if (plusOne) {
                amountOfElement += stod(*(letter+1) + "");
                amountOfElement += stod(*(letter) + "") * 10;
            } else {
                amountOfElement += stod(*(letter) + "");
            }
        } else {
            cerr << "Error entering elements and amounts into grams of compound." << endl;
        }
    }

    return weight;
}

/** @brief Calculate morality
 *
 */
void molarity(vector<string> parameterList) {
    if (parameterList[0] != "molarity") {
        cerr << "Something wrong occurred when entering the molarity function";
    } else {
        cout << "Molarity";
    }

    //!< Records the compound that we are dealing with
    string compound = " ";
    //!< How much the compound weighs
    double compoundWeightPerMole = 0.0;
    //!< Records the grams that we have in the mixture, starts negative so that we can check if it has been filled
    double grams = -10;
    //!< The Grams Per Mole in the given substance, starts negative so that we can check if it has been filled
    double gramsPerMole = -10;
    /** The Amount of Liquid, starts at 1 to represent the molarity at 1L
     *  if there is no unit at the end of the sequence than it is assumed to be liters
     */
    double la = 1;

    //If the second element, the one after the command for this function, is help, show the help for this function
    if (parameterList[1] == "help" || parameterList[1] == "h" || parameterList[1] == "man") {
        cout << helpScreen("molarity");
    }

    for (vector<string>::iterator element = parameterList.begin(); *element != "end"; ++element) {
        if (*element == "cmp") {
            compound = *(element+1);
            //compoundWeightPerMole = !!Return of new function
            ++element;
        } else if (*element == "g") {
            grams = stod(*(element+1));
            ++element;
        } else if (*element == "gpm") {
            gramsPerMole = stod(*(element+1));
            ++element;
        } else if (*element == "la") {
            //TODO liquid amount
            //check for mL/L before filling the number
        }
    }
}

/** @brief Calculate molality
 *
 */
void molality(vector<string> parameterList) {

}

/** @brief Calculate ksp
 *
 */
void ksp(vector<string> parameterList) {

}

/** @brief Function to test anything I want to test.
 *
 */
void testFN(vector<string> parameterList) {
    cout << "Testing\n";

    for (vector<string>::iterator element = parameterList.begin(); element != parameterList.end(); ++element) {
        cout << *element <<endl;
    }

}

/** @brief The main function, collects parameters and runs functions
 *
 */
int main() {
    cout << "Welcome, please enter parameters. For possible parameters, enter 'help'" << endl;
    vector<string> parameters = input();

    /* Create an iterator so that what program to be run can be checked */
    vector<string>::iterator first = parameters.begin();

    cout << "Running program, ";

    if (*first == "testing") {
        testFN(parameters);
    } else if (*first == "molarity") {
        molarity(parameters);
    } else if (*first == "ksp") {

    } else if (*first == "molality") {

    } else if (*first == "gramsOfCompound" || *first == "gramsofcompound") {
        cout << gramsOfCompound(*(first+1));
    } else {
        cerr << "No functions ran\n";
    }

    return 0;
}