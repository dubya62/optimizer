
optimizinator: rba compiler picir 
	python optimizer.py

.PHONY: rba compiler picir clone

clone:
	git clone https://github.com/dubya62/rule_based_automata.git
	git clone https://github.com/dubya62/compiler.git
	git clone https://github.com/TrishaCarter/PICIR.git

rba:
	git -C rule_based_automata pull
	cp rule_based_automata/*.py .

picir:
	git -C PICIR pull
	cp PICIR/decompiler.py .

compiler:
	git -C compiler pull
	cp compiler/*.py .


