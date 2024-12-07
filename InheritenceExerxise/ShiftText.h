#ifndef SHIFTTEXT_H
#define SHIFTTEXT_H

#include <iostream>
#include <string>
#include "PlainText.h"

class ShiftText : public PlainText
{
protected:
	int _key;
public:
	ShiftText(const std::string& text, int key);
	//~ShiftText();
	static std::string encrypt(std::string& text, int key);
	static std::string decrypt(std::string& text, int key);
	std::string encrypt();
	std::string decrypt();
};

#endif