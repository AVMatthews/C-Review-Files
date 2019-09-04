list: main.c linked_list.c
	gcc -g -Wall -Werror -o list main.c linked_list.c -I

clean:
	/bin/rm -f list