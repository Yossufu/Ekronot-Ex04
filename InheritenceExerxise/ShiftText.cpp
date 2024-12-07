#include "ShiftText.h"

ShiftText::ShiftText(const std::string& text, int key): PlainText(text), _key(key)
{
    this->_text = encrypt();
    this->_isEncrypted = true;
}

std::string ShiftText::encrypt(std::string& text, int key)// Static method for encryption
{
    std::string result = text;
    for (int i = 0; i < result.length(); i++)
    {
        char& ch = result[i];
        if (std::islower(ch))// Only shift lowercase letters
        {
            ch = 'a' + (ch - 'a' + key + 26) % 26;
        }
    }
    return result;
}

std::string ShiftText::decrypt(std::string& text, int key)// Static method for decryption
{
    return encrypt(text, -key);// Decrypt by shifting backward
}

std::string ShiftText::encrypt()
{
    if (!this->_isEncrypted)
    {
        this->_isEncrypted = true;
        this->_text = ShiftText::encrypt(this->_text, this->_key);
    }
    return this->_text;
}

std::string ShiftText::decrypt()
{
    if (this->_isEncrypted)
    {
        this->_isEncrypted = false;
        this->_text = ShiftText::decrypt(this->_text, this->_key);
    }
    return this->_text;
}