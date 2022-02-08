#include <iostream>
#include <assert.h>
#include "checkBatteryStatus.h"

void testBattery()
{
    assert((isBatteryParameterWithinRange(46,TEMP_MIN,TEMP_MAX)) == "NOT_OK");
    assert((isBatteryParameterWithinRange(41,TEMP_MIN,TEMP_MAX)) == "OK");
    assert((isBatteryParameterWithinRange(2,TEMP_MIN,TEMP_MAX)) == "LOW");
    assert((isBatteryParameterWithinRange(2.25,TEMP_MIN,TEMP_MAX)) == "LOW");
    assert((isBatteryParameterWithinRange(1,TEMP_MIN,TEMP_MAX)) == "LOW");
    assert((isBatteryParameterWithinRange(43,TEMP_MIN,TEMP_MAX)) == "HIGH");
    assert((isBatteryParameterWithinRange(42.75,TEMP_MIN,TEMP_MAX)) == "HIGH");
    assert((isBatteryParameterWithinRange(44,TEMP_MIN,TEMP_MAX)) == "HIGH");

    assert((isBatteryParameterWithinRange(90.3,SOC_MIN,SOC_MAX)) == "NOT_OK");
    assert((isBatteryParameterWithinRange(50,SOC_MIN,SOC_MAX)) == "OK");
    assert((isBatteryParameterWithinRange(24,SOC_MIN,SOC_MAX)) == "LOW");
    assert((isBatteryParameterWithinRange(23,SOC_MIN,SOC_MAX)) == "LOW");
    assert((isBatteryParameterWithinRange(20,SOC_MIN,SOC_MAX)) == "LOW");
    assert((isBatteryParameterWithinRange(80,SOC_MIN,SOC_MAX)) == "HIGH");
    assert((isBatteryParameterWithinRange(76,SOC_MIN,SOC_MAX)) == "HIGH");
    assert((isBatteryParameterWithinRange(77,SOC_MIN,SOC_MAX)) == "HIGH");

    assert((isBatteryParameterWithinRange(0.9,CR_MIN,CR_MAX)) == "NOT_OK");
    assert((isBatteryParameterWithinRange(0.6,CR_MIN,CR_MAX)) == "OK");
    assert((isBatteryParameterWithinRange(0.77,CR_MIN,CR_MAX)) == "HIGH");
    assert((isBatteryParameterWithinRange(0.79,CR_MIN,CR_MAX)) == "HIGH");

    std::string *testBatisOk = isBatteryOk(43, 77, 0.77);
    assert(testBatisOk[0] == "HIGH");
    assert(testBatisOk[1] == "HIGH");
    assert(testBatisOk[2] == "HIGH");
}

int main()
{
    //isBatteryOk(43.5, 78, 0.78);
    std::string* batWarnMsgInDU = isBatteryOk(43.5, 78, 0.78);
    printAlert(batWarnMsgInDU, "DU");

    std::string* batWarnMsgInEN = isBatteryOk(43.5, 78, 0.78);
    printAlert(batWarnMsgInEN, "EN");

    testBattery();
    return 0;
}
