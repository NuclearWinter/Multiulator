#include <iostream>
#include <cmath>
#include <ctype.h>
#include "stdio.h"
#include <vector>
#include <iostream>
#include <map>
#include "mainpage.hpp"

//TODO look into support for more complex characters

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

#define MT_MASS 0
#define MT_DENSITY 0
#define MT_GROUP 0
#define MT_PERIOD 0
#define MT_MLTPNT 0
#define MT_BOILPNT 0
#define MT_IONENG 0
#define MT_ELECTRONEG 0
#define MT_CONFIG {0}


/** @brief See which elements the user needs and create them
 *  @param input The string of a particular character representing an element
 *  @return Returns whether the element was found or not
 */
bool checkElement(string input, periodicElement *placeIn) {
    cout << "Check Element with " << input << endl;
    vector<int> commonConfigurations;

    map<string, periodicElement> table;
    map<string, periodicElement>::iterator tableIterator;

    /*Symbol Name Number Mass Density @stp in g/L Group Period Meltng Point (c) Boiling Point (c)*/
    /*Ionization Energy (kJ/mol) Electronegativity Main configurations*/
    table["H"]   = periodicElement("H",   "Hydrogen",      1,  1.00794, 0.08988, 1, 1, 259.16*-1, 252.879*-1, 1312.0, 2.20,
                                   {1, -1});

    table["He"]  = periodicElement("He",  "Helium",        2,  4.00260, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Li"]  = periodicElement("Li",  "Lithium",       3,  6.941, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Be"]  = periodicElement("Be",  "Beryllium",     4,  9.012182, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["B"]   = periodicElement("B",   "Boron",         5,  10.811, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["C"]   = periodicElement("C",   "Carbon",        6,  12.0107, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["N"]   = periodicElement("N",   "Nitrogen",      7,  14.0067, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["O"]   = periodicElement("O",   "Oxygen",        8,  15.9994, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["F"]   = periodicElement("F",   "Fluorine",      9,  18.99840, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ne"]  = periodicElement("Ne",  "Neon",          10, 20.1797,   MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Na"]  = periodicElement("Na",  "Sodium",        11, 22.989770, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Mg"]  = periodicElement("Mg",  "Magnesium",     12, 24.3050,   MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Al"]  = periodicElement("Al",  "Aluminum",      13, 26.981538, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Si"]  = periodicElement("Si",  "Silicon",       14, 28.0855, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["P"]   = periodicElement("P",   "Phosphorus",    15, 30.97376, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["S"]   = periodicElement("S",   "Sulfur",        16, 32.065, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Cl"]  = periodicElement("Cl",  "Chlorine",      17, 35.453, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ar"]  = periodicElement("Ar",  "Argon",         18, 39.948, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["K"]   = periodicElement("K",   "Potassium",     19, 39.0983, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ca"]  = periodicElement("Ca",  "Calcium",       20, 40.078, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Sc"]  = periodicElement("Sc",  "Scandium",      21, 44.95591, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ti"]  = periodicElement("Ti",  "Titanium",      22, 47.867, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["V"]   = periodicElement("V",   "Vanadium",      23, 50.9415, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Cr"]  = periodicElement("Cr",  "Chromium",      24, 51.996, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Mn"]  = periodicElement("Mn",  "Manganese",     25, 54.9380, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Fe"]  = periodicElement("Fe",  "Iron",          26, 55.845, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Co"]  = periodicElement("Co",  "Cobalt",        27, 58.9332, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ni"]  = periodicElement("Ni",  "Nickel",        28, 58.6934, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Cu"]  = periodicElement("Cu",  "Copper",        29, 63.546, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Zn"]  = periodicElement("Zn",  "Zinc",          30, 65.409, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ga"]  = periodicElement("Ga",  "Gallium",       31, 69.723, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ge"]  = periodicElement("Ge",  "Germanium",     32, 72.64, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["As"]  = periodicElement("As",  "Arsenic",       33, 74.9216, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Se"]  = periodicElement("Se",  "Selenium",      34, 78.96, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Br"]  = periodicElement("Br",  "Bromine",       35, 79.904, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Kr"]  = periodicElement("Kr",  "Krypton",       36, 83.80, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Rb"]  = periodicElement("Rb",  "Rubidium",      37, 85.4678, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Sr"]  = periodicElement("Sr",  "Strontium",     38, 87.62, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Y"]   = periodicElement("Y",   "Yttrium",       39, 88.9059, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Zr"]  = periodicElement("Zr",  "Zirconium",     40, 91.224, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Nb"]  = periodicElement("Nb",  "Niobium",       41, 92.90638, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Mo"]  = periodicElement("Mo",  "Molybdenum",    42, 95.94, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Tc"]  = periodicElement("Tc",  "Technetium",    43, 98, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ru"]  = periodicElement("Ru",  "Ruthenium",     44, 101.07, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Rh"]  = periodicElement("Rh",  "Rhodium",       45, 102.90550, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Pd"]  = periodicElement("Pd",  "Palladium",     46, 106.42, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ag"]  = periodicElement("Ag",  "Silver",        47, 107.8682, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Cd"]  = periodicElement("Cd",  "Cadmium",       48, 112.41, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["In"]  = periodicElement("In",  "Indium",        49, 114.82, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Sn"]  = periodicElement("Sn",  "Tin",           50, 118.710, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Sb"]  = periodicElement("Sb",  "Antimony",      51, 121.760, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Te"]  = periodicElement("Te",  "Tellurium",     52, 127.60, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["I"]   = periodicElement("I",   "Iodine",        53, 126.90447, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Xe"]  = periodicElement("Xe",  "Xenon",         54, 131.29, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Cs"]  = periodicElement("Cs",  "Cesium",        55, 132.90545, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ba"]  = periodicElement("Ba",  "Barium",        56, 137.327, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["La"]  = periodicElement("La",  "Lanthanum",     57, 138.9055, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ce"]  = periodicElement("Ce",  "Cerium",        58, 140.116, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Pr"]  = periodicElement("Pr",  "Praseodymium",  59, 140.90765, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Nd"]  = periodicElement("Nd",  "Neodymium",     60, 144.24, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Pm"]  = periodicElement("Pm",  "Promethium",    61, 145, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Sm"]  = periodicElement("Sm",  "Samarium",      62, 150.36, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Eu"]  = periodicElement("Eu",  "Europium",      63, 151.964, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Gd"]  = periodicElement("Gd",  "Gadolinium",    64, 157.25, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Tb"]  = periodicElement("Tb",  "Terbium",       65, 158.92534, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Dy"]  = periodicElement("Dy",  "Dysprosium",    66, 162.50, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ho"]  = periodicElement("Ho",  "Holmium",       67, 164.9303, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Er"]  = periodicElement("Er",  "Erbium",        68, 167.26, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Tm"]  = periodicElement("Tm",  "Thulium",       69, 168.9342, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Yb"]  = periodicElement("Yb",  "Ytterbium",     70, 173.04, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Lu"]  = periodicElement("Lu",  "Lutetium",      71, 174.967, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Hf"]  = periodicElement("Hf",  "Hafnium",       72, 178.49, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ta"]  = periodicElement("Ta",  "Tantalum",      73, 180.9479, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["W"]   = periodicElement("W",   "Tungsten",      74, 183.84, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Re"]  = periodicElement("Re",  "Rhenium",       75, 186.207, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Os"]  = periodicElement("Os",  "Osmium",        76, 190.23, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ir"]  = periodicElement("Ir",  "Iridium",       77, 192.217, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Pt"]  = periodicElement("Pt",  "Platinum",      78, 195.08, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Au"]  = periodicElement("Au",  "Gold",          79, 196.96655, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Hg"]  = periodicElement("Hg",  "Mercury",       80, 200.59, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Tl"]  = periodicElement("Tl",  "Thallium",      81, 204.3833, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Pb"]  = periodicElement("Pb",  "Lead",          82, 207.2, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Bi"]  = periodicElement("Bi",  "Bismuth",       83, 208.9804, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Po"]  = periodicElement("Po",  "Polonium",      84, 209, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["At"]  = periodicElement("At",  "Astatine",      85, 210, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Rn"]  = periodicElement("Rn",  "Radon",         86, 222, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Fr"]  = periodicElement("Fr",  "Francium",      87, 223, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ra"]  = periodicElement("Ra",  "Radium",        88, 226, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ac"]  = periodicElement("Ac",  "Actinium",      89, 227, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Th"]  = periodicElement("Th",  "Thorium",       90, 232.0381, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Pa"]  = periodicElement("Pa",  "Protactinium",  91, 231.0359, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["U"]   = periodicElement("U",   "Uranium",       92, 238.0289, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Np"]  = periodicElement("Np",  "Neptunium",     93, 237, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Pu"]  = periodicElement("Pu",  "Plutonium",     94, 244, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Am"]  = periodicElement("Am",  "Americium",     95, 243, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Cm"]  = periodicElement("Cm",  "Curium",        96, 247, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Bk"]  = periodicElement("Bk",  "Berkelium",     97, 247, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Cf"]  = periodicElement("Cf",  "Californium",   98, 251, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Es"]  = periodicElement("Es",  "Einsteinium",   99, 252, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Fm"]  = periodicElement("Fm",  "Fermium",       100, 257, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Md"]  = periodicElement("Md",  "Mendelevium",   101, 258, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["No"]  = periodicElement("No",  "Nobelium",      102, 259, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Lr"]  = periodicElement("Lr",  "Lawrencium",    103, 262, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Rf"]  = periodicElement("Rf",  "Rutherfordium", 104, 261, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Db"]  = periodicElement("Db",  "Dubnium",       105, 262, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Sg"]  = periodicElement("Sg",  "Seaborgium",    106, 266, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Bh"]  = periodicElement("Bh",  "Bohrium",       107, 264, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Hs"]  = periodicElement("Hs",  "Hassium",       108, 277, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Mt"]  = periodicElement("Mt",  "Meitnerium",    109, 268, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Ds"]  = periodicElement("Ds",  "Darmstadtium",  110, 269, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Rg"]  = periodicElement("Rg",  "Roentgenium",   111, 272, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Cn"]  = periodicElement("Cn",  "Copernicium",   112, 285, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Uut"] = periodicElement("Uut", "Ununtrium",     113, 284, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Fl"]  = periodicElement("Fl",  "Flerovium",     114, 289, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Uup"] = periodicElement("Uup", "Ununpentium",   115, 288, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Lv"]  = periodicElement("Lv",  "Livermorium",   116, MT_MASS, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Uus"] = periodicElement("Uus", "Ununseptium",   117, MT_MASS, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);

    table["Uuo"] = periodicElement("Uuo", "Ununictium",    118, MT_MASS, MT_DENSITY, MT_GROUP, MT_PERIOD, MT_MLTPNT,
                                   MT_BOILPNT, MT_IONENG, MT_ELECTRONEG, MT_CONFIG);


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
        return  "Help for molarity:\n"
                "Parameters:"
                "\n   -cmp (the compound, as a string)"
                "\n   -g (grams of the compound)"
                "\n   -l (the amount of the liquid, for mL add 'ml' or 'mL' to the end)"
                "\n   -M (the amount of moles that are had)"
                "\nOnly the parameters needed for the equation must be entered, the program will correct you if you "
                "enter the wrong thing\n";
    } else if (helpWith == "gramsOfCompound" || helpWith == "gramsofcompound") {
        return "This is the help screen for the grams of compound function\n";
    } else if (helpWith == "molality") {
        return "This is the help screen for the molality calculator\n";
    }

    return "Error displaying the help screen for this program, does the program have a help screen? "
            "Is it spelled correctly?\n";
}

/** @brief Gives various values for the inputted element based on the question and amount of the element
 *  @param elementName The name of the element to check
 *  @param amount The amount of the element
 *  @return The weight of an element in one mole
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
        cout << "whatIsWeight: Unknown elementName " << elementName << " please enter its mass per mole: ";
        cin >> value;
    }

    if (value == 0.0) {
        cout << "whatIsWeight: element weight not filled" << endl;
    }

    return value * amount;
}

/** @brief Gives the charge of an
 *
 */
int whatIsElectronAmount(string elementName, int amount) {
    //TODO handle different charges of elements
}

/** @brief Give the weight of a compound in grams per mole
 *  @return The weight of the given compound
 *  TODO add in support for more complex comounds (i.e. Ag(NO3)2)
 */
double gramsOfCompound(string compound) {
    cout << "Grams of compound with " << compound << endl;

    double weight = 0;
    string elementHolder = "start";
    string elementAmount = "start";
    int amountOfElement  = 1;

    bool firstDone = false;
    bool inParenth = false;
    string parenthHolder = "";
    for (string::iterator letter = compound.begin(); letter != compound.end(); ++letter) {
        /* Handles compounds within parenthesis (as in compounds that are their own deal on top of what they are in) */
        if (inParenth) {
            if (*(letter+1) == ')') {
                parenthHolder += *letter;
                inParenth = false;
                weight += gramsOfCompound(parenthHolder);
            } else {
                parenthHolder += *letter;
            }
        } else {
            /* This is the regular handling for character: It is important to not run what is in parenthesis twice */
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
            } else if (*letter == '(') {
                inParenth = true;
            } else if (*letter == ')') {
                //Right now nothing needs to be here, its just so that it doesn't freak out
            } else {
                cerr << "gramsOfCompound: error entering compounds with parameter " << *letter << endl;
            }
        }

        /* Handles the end of the compound */
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

/** @brief Find the amount of liquid within the string
 *  @return The amount of liquid in liters
 */
double findLiquidAmount(string input) {
    cout << "Find Liquid Amount with " << input << endl;

    //!< Hold the amount of liquid
    double liters = 0.0;
    //!< Hold the string for the actual amount
    string liquid = "";
    //!< The unit of measurment
    string unit;

    for (string::iterator liquidCycle = input.begin(); liquidCycle != input.end(); ++liquidCycle) {
        if (isdigit(*liquidCycle) || *liquidCycle == '.') {
            liquid += *liquidCycle;
        } else if (isalpha(*liquidCycle)) {
            unit += *liquidCycle;
        } else {
            cerr << "findLiquidAmount: Unknown operation required for input" << endl;
        }
    }

    liters = stod(liquid);

    if (unit == "mL" || unit == "ml") {
        liters /= 1000;
    } else if (unit == "L" || unit == "l") {
        liters *= 1;
    } else {
        cerr << "findLiquidAmount: Unknown unit " << unit << endl;
    }

    return liters;
}

/** @brief Calculate morality
 *
 */
double molarity(vector<string> parameterList) {
    cout << "Molarity" << endl;

    //!< Records the compound that we are dealing with
    string compound = " ";
    //!< Records the grams that we have in the mixture, starts negative so that we can check if it has been filled
    double grams = -10.0;
    //!< The Grams Per Mole in the given substance, starts negative so that we can check if it has been filled
    double gramsPerMole = -10.0;
    //!< The Amount of Liquid, starts at 1 to represent the molarity at 1L
    double liters = -10.0;
    //!< The moles of the compound
    double moles = -10.0;
    //!< The molarity of the substance
    double molarity = -10;

    //If the second element, the one after the command for this function, is help, show the help for this function
    if (parameterList[1] == "help" || parameterList[1] == "h" || parameterList[1] == "man") {
        cout << helpScreen("molarity");
        parameterList = input();
    }

    for (vector<string>::iterator element = parameterList.begin()+1; element != parameterList.end(); ++element) {
        if (*element == "cmp") {
            compound = *(element+1);
            gramsPerMole = gramsOfCompound(compound);
            ++element;
        } else if (*element == "g") {
            grams = stod(*(element+1));
            ++element;
        } else if (*element == "l") {
            liters = findLiquidAmount(*(element+1));
            ++element;
        } else if (*element == "M") {
            moles = stod(*(element+1));
            ++element;
        } else {
            cerr << "molarity: unknown parameter " << *element <<endl;
        }
    }

    if (grams == -10.0 || gramsPerMole == -10.0) {
        cerr << "molarity: grams or gramsPerMole value not filled" << endl;
        cout << helpScreen("molarity");
    } else {
        moles = grams / gramsPerMole;
    }

    if (moles == -10.0 || liters == -10.0) {
        if (moles == -10) {
            cerr << "molarity: moles not filled" << endl;
        } else {
            cerr << "molarity: liters not filled" << endl;
        }
        cout << helpScreen("molarity");
    } else {
        molarity = moles / liters;
    }

    if (molarity <= 0) {
        cerr << "molarity: could not calculate molarity correctly" << endl;
        return 0;
    }

    return molarity;
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

/** @breif
 *  @return
 */
string dotDiagram(vector<string> parameterList) {

}

/** @brief The main function, collects parameters and runs functions
 *
 */
int main() {
    cout << "Welcome, please enter parameters. For possible parameters, enter 'help' \\->\\" << endl;
    vector<string> parameters = input();

    /* Create an iterator so that what program to be run can be checked */
    vector<string>::iterator first = parameters.begin();

    cout << "Running program, ";

    if (*first == "testing") {
        testFN(parameters);
    } else if (*first == "molarity") {
        cout << molarity(parameters) <<"M" << endl;
    } else if (*first == "ksp") {

    } else if (*first == "molality") {

    } else if (*first == "gramsOfCompound" || *first == "gramsofcompound") {
        cout << gramsOfCompound(*(first+1));
    } else if (*first == "findLiquidAmount" || *first == "findliquidamount") {
        cout << findLiquidAmount(*(first+1));
    } else {
        cerr << "No functions ran\n";
    }

    return 0;
}