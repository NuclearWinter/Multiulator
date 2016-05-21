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
if (input == "H") {
        commonConfigurations = {1, -1};
//        *placeIn = periodicElement(/*Symbol*///"H", /*Name*/"Hydrogen", /*Number*/1, /*Mass*/1.008,
///*Density @stp in g/L*/0.08988, /*Group*/1, /*Period*/1, /*Meltng Point (c)*/259.16*-1,
///*Boiling Point (c)*/252.879*-1, /*Ionization Energy (kJ/mol)*/1312.0,
///*Electronegativity*/2.20 , /*Main configurations*/commonConfigurations);

/*
return true;
} else if (input == "He") {

} else if (input == "Li") {

} else if (input == "Be") {

} else if (input == "B") {

} else if (input == "C") {

} else if (input == "N") {

} else if (input == "O") {

} else if (input == "F") {

} else if (input == "Ne") {

} else if (input == "Na") {

} else if (input == "Mg") {

} else if (input == "Al") {

} else if (input == "Si") {

} else if (input == "P") {

} else if (input == "S") {

} else if (input == "Cl") {

} else if (input == "Ar") {

} else if (input == "K") {

} else if (input == "Ca") {

} else if (input == "Sc") {

} else if (input == "Ti") {

} else if (input == "V") {

} else if (input == "Cr") {

} else if (input == "Mn") {

} else if (input == "Fe") {

} else if (input == "Co") {

} else if (input == "Ni") {

} else if (input == "Cu") {

} else if (input == "Zn") {

} else if (input == "Ga") {

} else if (input == "Ge") {

} else if (input == "As") {

} else if (input == "Se") {

} else if (input == "Br") {

} else if (input == "Kr") {

} else if (input == "Rb") {

} else if (input == "Sr") {

} else if (input == "Y") {

} else if (input == "Zr") {

} else if (input == "Nb") {

} else if (input == "Mo") {

} else if (input == "Tc") {

} else if (input == "Ru") {

} else if (input == "Rh") {

} else if (input == "Pd") {

} else if (input == "Ag") {

} else if (input == "Cd") {

} else if (input == "In") {

} else if (input == "Sn") {

} else if (input == "Sb") {

} else if (input == "Te") {

} else if (input == "I") {

} else if (input == "Xe") {

} else if (input == "Cs") {

} else if (input == "Ba") {

} else if (input == "La") {

} else if (input == "Ce") {

} else if (input == "Pr") {

} else if (input == "Nd") {

} else if (input == "Pm") {

} else if (input == "Sm") {

} else if (input == "Eu") {

} else if (input == "Gd") {

} else if (input == "Tb") {

} else if (input == "Dy") {

} else if (input == "Ho") {

} else if (input == "Er") {

} else if (input == "Tm") {

} else if (input == "Yb") {

} else if (input == "Lu") {

} else if (input == "Hf") {

} else if (input == "Ta") {

} else if (input == "W") {

} else if (input == "Re") {

} else if (input == "Os") {

} else if (input == "Ir") {

} else if (input == "Pt") {

} else if (input == "Au") {

} else if (input == "Hg") {

} else if (input == "Tl") {

} else if (input == "Pb") {

} else if (input == "Bi") {

} else if (input == "Po") {

} else if (input == "") {

} else if (input == "") {

}

1 - H - Hydrogen
2 - He - Helium
3 - Li - Lithium
4 - Be - Beryllium
5 - B - Boron
6 - C - Carbon
7 - N - Nitrogen
8 - O - Oxygen
9 - F - Fluorine
10 - Ne - Neon
11 - Na - Sodium
12 - Mg - Magnesium
13 - Al - Aluminum, Aluminium
14 - Si - Silicon
15 - P - Phosphorus
16 - S - Sulfur
17 - Cl - Chlorine
18 - Ar - Argon
19 - K - Potassium
20 - Ca - Calcium
21 - Sc - Scandium
22 - Ti - Titanium
23 - V - Vanadium
24 - Cr - Chromium
25 - Mn - Manganese
26 - Fe - Iron
27 - Co - Cobalt
28 - Ni - Nickel
29 - Cu - Copper
30 - Zn - Zinc
31 - Ga - Gallium
32 - Ge - Germanium
33 - As - Arsenic
34 - Se - Selenium
35 - Br - Bromine
36 - Kr - Krypton
37 - Rb - Rubidium
38 - Sr - Strontium
39 - Y - Yttrium
40 - Zr - Zirconium
41 - Nb - Niobium
42 - Mo - Molybdenum
43 - Tc - Technetium
44 - Ru - Ruthenium
45 - Rh - Rhodium
46 - Pd - Palladium
47 - Ag - Silver
48 - Cd - Cadmium
49 - In - Indium
50 - Sn - Tin
51 - Sb - Antimony
52 - Te - Tellurium
53 - I - Iodine
54 - Xe - Xenon
55 - Cs - Cesium
56 - Ba - Barium
57 - La - Lanthanum
58 - Ce - Cerium
59 - Pr - Praseodymium
60 - Nd - Neodymium
61 - Pm - Promethium
62 - Sm - Samarium
63 - Eu - Europium
64 - Gd - Gadolinium
65 - Tb - Terbium
66 - Dy - Dysprosium
67 - Ho - Holmium
68 - Er - Erbium
69 - Tm - Thulium
70 - Yb - Ytterbium
71 - Lu - Lutetium
72 - Hf - Hafnium
73 - Ta - Tantalum
74 - W - Tungsten
75 - Re - Rhenium
76 - Os - Osmium
77 - Ir - Iridium
78 - Pt - Platinum
79 - Au - Gold
80 - Hg - Mercury
81 - Tl - Thallium
82 - Pb - Lead
83 - Bi - Bismuth
84 - Po - Polonium
85 - At - Astatine
86 - Rn - Radon
87 - Fr - Francium
88 - Ra - Radium
89 - Ac - Actinium
90 - Th - Thorium
91 - Pa - Protactinium
92 - U - Uranium
93 - Np - Neptunium
94 - Pu - Plutonium
95 - Am - Americium
96 - Cm - Curium
97 - Bk - Berkelium
98 - Cf - Californium
99 - Es - Einsteinium
100 - Fm - Fermium
101 - Md - Mendelevium
102 - No - Nobelium
103 - Lr - Lawrencium
104 - Rf - Rutherfordium
105 - Db - Dubnium
106 - Sg - Seaborgium
107 - Bh - Bohrium
108 - Hs - Hassium
109 - Mt - Meitnerium
110 - Ds - Darmstadtium
111 - Rg - Roentgenium
112 - Cn - Copernicium
113 - Uut - Ununtrium
114 - Fl - Flerovium
115 - Uup - Ununpentium
116 - Lv - Livermorium
117 - Uus - Ununseptium
118 - Uuo - Ununoctium



*/