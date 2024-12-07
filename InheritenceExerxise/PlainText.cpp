#include "PlainText.h"

int _numOfTexts = 0;

PlainText::PlainText(const std::string& text) : _text(text), _isEncrypted(false)
{
	_numOfTexts++;
}

bool PlainText::isEncrypted() const
{
	return this->_isEncrypted;
}

std::string PlainText::getText() const
{
	return this->_text;
}

int PlainText::numOfTexts()//for some reason this is a problem
{
	return _numOfTexts;
}