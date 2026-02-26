#script to compile things

compile_scripts: footballScore.c
	gcc footballScore.c -o footballscore
	@echo "done"

clean:
	rm -f footballscore