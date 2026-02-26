#script to compile things

compile_scripts: footballScore.c, temperatureConversion.c
	gcc footballScore.c temperatureConversion.c -o footballscore
	@echo "done"

clean:
	rm -f footballscore
	rm -f temperatureConversion