#pragma once

class String {
public:
	char* text;

	String() {
		text = (char)"";
	};

	String(const char txt) : text((char)txt) {};

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