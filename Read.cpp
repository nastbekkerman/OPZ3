#pragma once
#include "Read.h"




	void Read::CheckSimvols(char Znak) {
		Operator o(0, Znak);
		if (Znak == OPENBRACKET) {
			o.SetPrioritet(1);
		}
		if (Znak == CLOSEBRACKET) {
			o.SetPrioritet(1);
		}
		if (Znak == PLUS) {
			o.SetPrioritet(2);
		}
		if (Znak == MINUS) {
			o.SetPrioritet(2);
		}
		if (Znak == MUL) {
			o.SetPrioritet(3);
		}
		if (Znak == DIV) {
			o.SetPrioritet(3);
		}

		if (!Simv.empty()&&(o.GetZnak() != '(')) {
			bool flag = false;
			if (o.GetZnak() == CLOSEBRACKET) {

				while (Simv.top().GetZnak() != OPENBRACKET) {
					primerOpz += Simv.top().GetZnak();
					Simv.pop();
				}
				Simv.pop();
				flag = true;
			}
			if (!flag) {
				if (((Simv.top().GetPrioritet() == o.GetPrioritet()) || (Simv.top().GetPrioritet() > o.GetPrioritet()))) {
					primerOpz += Simv.top().GetZnak();
					Simv.pop();
					if (!Simv.empty()) {
						if (Simv.top().GetPrioritet() == o.GetPrioritet()) {
							primerOpz += Simv.top().GetZnak();
							Simv.pop();
						}
					}
					Simv.push(o);
				
				}
				if ((Simv.top().GetPrioritet() < o.GetPrioritet())) {
					Simv.push(o);

				}
			}
		}
		else {
			
			Simv.push(o);
		}
	}

	void Read::ReadPrimer(std::string Primer) {
		int o = 0, c = 0;
		for (int i = 0; i < Primer.length(); i++) {
			if (o < c) {
				throw std::logic_error("Division by zerro");
			}

			if (Primer[i] == OPENBRACKET) {
				o++;
			}
			if (Primer[i] == CLOSEBRACKET) {
				c++;
			}

		}
		if (o != c) {
			throw std::logic_error("Wrong nubers of brackets");
		} //проверка на количество скобок

		for (int i = 0; i < Primer.length(); i++) {
			if (isdigit(Primer[i])) {
				primerOpz += Primer[i];
			}
			else {
				CheckSimvols(Primer[i]);
			}
		}
		if (!Simv.empty()) {
			for (int i = 0; i <= Simv.size(); i++) {
				primerOpz += Simv.top().GetZnak();
				Simv.pop();
			}
		}
	}

	std::string Read:: GetString() {
		return primerOpz;
	}

