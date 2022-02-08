#include <iostream>
#include <map>
#include <bits/stdc++.h>
#include <string>
using namespace std;

std::map<std::string, std::string> englishMsgsMap =
    {
        {"OK", "Temprature is OK!"},
        {"NOT_OK", "Temperature out of range!"},
        {"LOW", "Temprature Approaching low!"},
        {"HIGH", "Temprature Approaching high!"}};
        // {"SOC_OK", "State of Charge is OK!"},
        // {"SOC_NOT_OK", "State of Charge out of range!"},
        // {"SOC_DISCHARGE", "SOC Approaching discharge!"},
        // {"SOC_PEAK", "SOC Approaching charge-peak!"},
        // {"CR_OK", "Charge Rate is OK!"},
        // {"CR_NOT_OK", "Charge Rate out of range!"},
        // {"CR_PEAK", "Charge rate Approaching peak!"}};

std::map<std::string, std::string> germanMsgsMap =
    {
        {"OK", "Temperatur ist in Ordnung!"},
        {"NOT_OK", "Temperatur außerhalb des Bereichs!"},
        {"LOW", "Temperatur nähert sich niedrig!"},
        {"HIGH", "Temperatur nähert sich hoch!"}};
        // {"SOC_OK", "Ladezustand ist OK!"},
        // {"SOC_NOT_OK", "Ladezustand außerhalb des Bereichs!"},
        // {"SOC_DISCHARGE", "SOC Entlassung bevor!"},
        // {"SOC_PEAK", "SOC Ladespitze nähert sich!"},
        // {"CR_OK", "Die Laderate ist in Ordnung!"},
        // {"CR_NOT_OK", "Laderate außerhalb des Bereichs!"},
        // {"CR_PEAK", "Laderate Nähert sich der Spitze!"}};