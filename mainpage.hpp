/* @file mainpage.hpp
 * @author William Kluge
 * @date May, 2016
 * @brief Documentation for this program.
 */

/*
 * @name Program Usage
 * @brief How to use this program
 * @details The following details usage for various parts of this program.
 *
 * Within the main function there is handling for input. The input is stored within a vector that rotates every other
 *
 * For chemistry:
 * //temps are in celcius
//density at stp in g/L
//most common configuration first
//for the number of configurations just get the size of the array
 */

/** TODO
 *  Electron dot diagram
 *  Vectors (the math kind)
 *      Component
 *      Projection
 *      Forces/work
 *      Direction
 *
 *  Add verbose as an option
 */

/** Changelog
 *
 */

/* Storing this for reference
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

    atomElement(const bool &filled) {}

    //!< Is this atomElement filled?
    bool filled = true;
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




 bool plusOne = isdigit(*(letter+1));
            bool plusTwo = isdigit(*(letter+2));

            //TODO Make this more flexible for inputting different amounts
            if (plusOne && plusTwo) {
                amountOfElement += stoi(*(letter+2) + "");
                amountOfElement += stoi(*(letter+1) + "") * 10;
                amountOfElement += stoi(*(letter) + "") * 100;
            } else if (plusOne) {
                amountOfElement += stoi(*(letter+1) + "");
                amountOfElement += stoi(*(letter) + "") * 10;
            } else {
                amountOfElement += stoi(*(letter) + "");
            }
*/