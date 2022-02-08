#ifndef SIMPLE_MONITOR_IN_CPP_ANUSHA_CHECKBATTERYSTATUS_H
#define SIMPLE_MONITOR_IN_CPP_ANUSHA_CHECKBATTERYSTATUS_H

constexpr float TEMP_MIN = 0;
constexpr float TEMP_MAX = 45;

constexpr float SOC_MIN = 20;
constexpr float SOC_MAX = 80;

constexpr float CR_MIN = 0.0;
constexpr float CR_MAX = 0.8;

std::string isBatteryParameterWithinRange(float parameter, float lowerLimit, float upperLimit);
std::string toleranceCheck(float param, float lowerLimitApproch, float upperLimitApproch);

std::string* isBatteryOk(float temp, float soc, float chargerate);
void printAlert(std::string *batWarnMsg, std::string selectUserLang);

#endif
