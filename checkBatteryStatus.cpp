#include <iostream>
#include "checkBatteryStatus.h"
#include "convertToOtherlangMaps.h"
using namespace std;
std::string batteryWarnMsg[3] = {" ", " ", " "};

std::string isBatteryParameterWithinRange(float parameter, float lowerLimit, float upperLimit)
{
    std::string tempMsg = "NOT_OK";
    float calculateTolerance = ((upperLimit*5)/100);
    if (parameter >= lowerLimit && parameter <= upperLimit)
    {
        tempMsg = toleranceCheck(parameter, (lowerLimit+calculateTolerance), (upperLimit-calculateTolerance));
    }
    return tempMsg;
}

std::string toleranceCheck(float param, float lowerLimitApproch, float upperLimitApproch)
{
    return (param <= lowerLimitApproch) ? "LOW" : (param >= upperLimitApproch) ? "HIGH" : "OK";
}

std::string *isBatteryOk(float temp, float soc, float chargerate)
{
    batteryWarnMsg[0] = isBatteryParameterWithinRange(temp,TEMP_MIN,TEMP_MAX);
    batteryWarnMsg[1] = isBatteryParameterWithinRange(soc,SOC_MIN,SOC_MAX);
    batteryWarnMsg[2] = isBatteryParameterWithinRange(chargerate,CR_MIN,CR_MAX);
    return (batteryWarnMsg);
}

void printAlert(std::string *batWarnMsg, std::string selectUserLang)
{
    cout << "Print in :" + selectUserLang << "\n";
    for (int i = 0; i < 3; i++)
    {
        (selectUserLang.compare("EN") == 0) ? cout << englishMsgsMap.find(batWarnMsg[i])->second << "\n" : cout << germanMsgsMap.find(batWarnMsg[i])->second << "\n";
    }
}
