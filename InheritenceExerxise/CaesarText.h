#ifndef CAESARTEXT_H
#define CAESARTEXT_H

#include <iostream>
#include <string>
#include "ShiftText.h"

class CaesarText : public ShiftText
{
public:
	CaesarText(const std::string& text);
	//~CaesarText();
	static std::string encrypt(std::string& text);
	static std::string decrypt(std::string& text);
	std::string encrypt();
	std::string decrypt();
};

#endif