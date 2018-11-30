#pragma once

#include <string>

std::string Replace(const std::string& text, const char replaceChar, const std::string& replaceWith);
std::string Split(std::string& text, const char c = ',');
std::string Remove(const std::string& text, const char charToRemove);