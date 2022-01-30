#pragma once

#include <stdint.h>
#include <string>

namespace MyTools {

    // ������� ������ �� 0 �� 15
    enum ConsoleColor
    {
        CC_Black = 0,
        CC_Blue,
        CC_Green,
        CC_Cyan,
        CC_Red,
        CC_Magenta,
        CC_Brown,
        CC_LightGray,
        CC_DarkGray,
        CC_LightBlue,
        CC_LightGreen,
        CC_LightCyan,
        CC_LightRed,
        CC_LightMagenta,
        CC_Yellow,
        CC_White
    };

	//=============================================================================================

	void ClrScr();

	void GotoXY(double x, double y);

	uint16_t GetMaxX();

	uint16_t GetMaxY();

    void SetColor(ConsoleColor color);

	//=============================================================================================

	void OpenLogFile(const std::string& FN);

	void CloseLogFile();

	void WriteToLog(const std::string& str);

	void WriteToLog(const std::string& str, int n);

	void WriteToLog(const std::string& str, double d);

	//=============================================================================================

};