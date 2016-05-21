#include <iostream>
#include <cmath>
#include <ctype.h>
#include "stdio.h"
#include <vector>
#include <iostream>
#include <map>
#include "mainpage.hpp"



using namespace std;

/** @brief This class holds all the information for an element
 *
 */
class periodicElement {
    private:
        //!< The element's symbol
        string symbol;
        //!< The element's full name
        string name;
        //!< The element's atomic number
        int number;
        //!< The element's atomic mass
        double mass = 0.0;
        //!< The element's density
        double density;
        //!< The element's group
        int group;
        //!< The element's period
        int period;
        //!< The element's melting point
        double meltingPoint;
        //!< The element's boiling point
        double boilingPoint;
        //!< The element's ionization energy
        double ionizationEnergy;
        //!< The element's electronegativity
        double electronegativity;
        //!< The element's main configurations
        vector<int> mainConfigurations;
    public:
    virtual ~periodicElement() { }

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

    periodicElement() { }

    const string &getSymbol() const {
        return symbol;
    }
    void setSymbol(const string &symbol) {
        periodicElement::symbol = symbol;
    }

    const string &getName() const {
        return name;
    }
    void setName(const string &name) {
        periodicElement::name = name;
    }

    int getNumber() const {
        return number;
    }
    void setNumber(int number) {
        periodicElement::number = number;
    }

    double getMass() const {
        return mass;
    }
    void setMass(double mass) {
        periodicElement::mass = mass;
    }

    double getDensity() const {
        return density;
    }
    void setDensity(double density) {
        periodicElement::density = density;
    }

    int getGroup() const {
        return group;
    }
    void setGroup(int group) {
        periodicElement::group = group;
    }

    int getPeriod() const {
        return period;
    }
    void setPeriod(int period) {
        periodicElement::period = period;
    }

    double getMeltingPoint() const {
        return meltingPoint;
    }
    void setMeltingPoint(double meltingPoint) {
        periodicElement::meltingPoint = meltingPoint;
    }

    double getBoilingPoint() const {
        return boilingPoint;
    }
    void setBoilingPoint(double boilingPoint) {
        periodicElement::boilingPoint = boilingPoint;
    }

    double getIonizationEnergy() const {
        return ionizationEnergy;
    }
    void setIonizationEnergy(double ionizationEnergy) {
        periodicElement::ionizationEnergy = ionizationEnergy;
    }

    double getElectronegativity() const {
        return electronegativity;
    }
    void setElectronegativity(double electronegativity) {
        periodicElement::electronegativity = electronegativity;
    }

    const vector<int> &getMainConfigurations() const {
        return mainConfigurations;
    }
    void setMainConfigurations(const vector<int> &mainConfigurations) {
        periodicElement::mainConfigurations = mainConfigurations;
    }
};

//TODO vector that holds all the elements (and than the info needed of an element if it doesn't exist)
//TODO function to cycle through that vector
/** Use a map to contain all of the periodicElement(s)
 *
 */


/** @brief See which elements the user needs and create them
 *  @param input The string of a particular character representing an element
 *  @return Returns whether the element was found or not
 */
bool checkElement(string input, periodicElement *placeIn) {
    cout << "Check Element with " << input << endl;
    vector<int> commonConfigurations;

    map<string, periodicElement> table;
    map<string, periodicElement>::iterator tableIterator;

    /*Symbol Name Number Mass Density @stp in g/L Group Period Meltng Point (c)*//*Boiling Point (c)*/
    /*Ionization Energy (kJ/mol) Electronegativity Main configurations*/
    table["H"] = periodicElement("H", "Hydrogen", 1, 1.008, 0.08988, 1, 1, 259.16*-1, 252.879*-1, 1312.0, 2.20 , commonConfigurations);
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();
    table[""] = periodicElement();


    tableIterator = table.find(input);
    if (tableIterator != table.end()) {
        *placeIn = tableIterator->second;
        return true;
    } else {
        cerr << "Could not find element" << endl;
        return false;
    }
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
*   @param elementName The name of the element to check
*   @param amount The amount of the element (to
*/
double whatIsWeight(string elementName, int amount) {
    if (elementName == "start") {
        return 0;
    }

    cout << "What is Weight with " << amount << " of " << elementName << endl;

    if (!isalpha(elementName[0])) {
        cerr << "whatIsWeight: cannot use elementName, it is not alphabetic" <<endl;
    }

    double value = 0.0;

    periodicElement elementFull;

    if (checkElement(elementName, &elementFull)) {
        value = elementFull.getMass();
    } else {
        cout << "whatIsWeight: Unknown elementName " << elementName << "please enter its mass per mole: ";
        cin >> value;
    }

    if (value == 0.0) {
        cout << "whatIsWeight: element weight not filled" << endl;
    }

    return value * amount;
}

/** @brief Give the weight of a compound in grams per mole
*   @return The weight of the given compound
*/
double gramsOfCompound(string compound) {
    cout << "Grams of compound with " << compound << endl;

    double weight = 0;
    string elementHolder = "start";
    string elementAmount = "start";
    int amountOfElement  = 1;

    //TODO Impliment a more elegant way to handle the first letter
    bool firstDone = false;
    for (string::iterator letter = compound.begin(); letter != compound.end(); ++letter) {
        if (isupper(*letter)) {
            if (elementAmount != "start") {
                /* Erases the 'start' in elementAmount */
                elementAmount.erase(0, 5);

                amountOfElement = (stoi(elementAmount));
                elementAmount = "start";
            }

            weight += whatIsWeight(elementHolder, amountOfElement);
            elementHolder.erase();
            amountOfElement = 1;

            elementHolder += *letter;
        } else if (isalpha(*letter)) {
            elementHolder += *letter;
        } else if (isdigit(*letter)) {
            elementAmount += (*letter);
        } else {
            cerr << "gramsOfCompound: error entering compounds" << endl;
        }

        if ((letter+1) == compound.end()) {
            if (elementAmount != "start") {
                elementAmount.erase(0, 5);
                amountOfElement = (stoi(elementAmount));
                elementAmount = "start";
            }

            weight += whatIsWeight(elementHolder, amountOfElement);
        }
    }


    return weight;
}

/** @brief Calculate morality
 *
 */
void molarity(vector<string> parameterList) {
    cout << "Molarity";

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