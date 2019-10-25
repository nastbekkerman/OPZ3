#pragma once
#include "OPZ.h"



OPZ::OPZ(std::string primer) {
		this->primer = primer;
	}
	void OPZ::Calculate() {
		Read Reader;
		Reader.ReadPrimer(primer);
		std::string opz = Reader.GetString();
		for (int i = 0; i < opz.length(); i++) {
			if (isdigit(opz[i])) {
				chisla.push(((int)opz[i]-'0'));
			}
			else {
				int a = chisla.top();
				chisla.pop();
				int b = chisla.top();
				chisla.pop();
				int otwet;
				if (opz[i] == MINUS) {
					otwet = b - a;
					chisla.push(otwet);
				}
				if (opz[i] == PLUS) {
					otwet = b + a;
					chisla.push(otwet);
				}
				if (opz[i] == MUL) {
					otwet = b * a;
					chisla.push(otwet);
				}
				if (opz[i] == DIV) {
					if (a == 0) {
						throw std::logic_error("Division by zerro");
					}
					otwet = b / a;
					chisla.push(otwet);
				}
			}

		}
		result = chisla.top();
	}
	int OPZ::GetResult() {
		return result;
	}


