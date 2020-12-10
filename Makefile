all: queue
testqueue: queue.c testqueue.c
         gcc queue.c testqueue.c -o testqueue

clean: 
         rm testqueue
