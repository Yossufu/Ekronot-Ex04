#include "CaesarText.h"

CaesarText::CaesarText(const std::string& text) : ShiftText(text, 3)
{
    this->_text = encrypt();
    this->_isEncrypted = true;
}

std::string CaesarText::encrypt(std::string& text)
{
    return ShiftText::encrypt(text, 3);
}

std::string CaesarText::decrypt(std::string& text)
{
    return ShiftText::decrypt(text, 3);
}

std::string CaesarText::encrypt()
{
    if (!this->_isEncrypted)
    {
        this->_text = ShiftText::encrypt(_text, 3);
        this->_isEncrypted = true;
    }
    return this->_text;
}

std::string CaesarText::decrypt()
{
    if (this->_isEncrypted)
    {
        this->_text = ShiftText::decrypt(this->_text, 3);
        this->_isEncrypted = false;
    }
    return this->_text;
}
