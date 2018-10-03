#pragma once
#include "string.h"
#include "assert.h"

class String {
private:
	char* string = nullptr;
	uint allocated_memory = 0u;
public:
	String() {}

	String(const char* string) {
		assert(string!=nullptr)
		if(string != nullptr){
			allocated_memory = str_length(string)+1;
			this->string = new char[allocated_memory];
		}
	}

	String(const String& txt) : text(txt.text) {};

	String operator=(const char txt) {
		return text = (char)txt;
	}

	String operator=(const String& txt) {
		return text = txt.text;
	}

	bool operator==(const String& txt) const {
		return !strcmp(text, txt.text);
	}

	bool operator==(const char txt) const {
		return !strcmp(text, txt);
	}

};
