#ifndef PLAINTEXT_H
#define PLAINTEXT_H

#include <iostream>
#include <string>

class PlainText
{
protected:
	std::string _text;
	bool _isEncrypted;

	static int _numOfTexts;
public:
	PlainText(const std::string& text);
	//~PlainText(); no need since "new" isn't used
	bool isEncrypted() const;
	std::string getText() const;

	static int numOfTexts();
};

#endif