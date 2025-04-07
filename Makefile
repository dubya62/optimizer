
optimizinator: rba compiler picir 
	python optimizer.py

.PHONY: rba compiler picir

rba:
	git -C rule_based_automata pull
	cp rule_based_automata/*.py .

picir:
	git -C PICIR pull
	cp PICIR/decompiler.py .

compiler:
	git -C compiler pull
	cp compiler/*.py .


