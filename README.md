# keyshow

`keyshow` is a very small cli program that will print the bytes received in `stdin` when you press a key.  All you need to do is:

1. run the program 
2. press a key
3. press "enter"

like so, if I press the "right arrow" then "enter"...

```bash
$ gcc -o keyshow main.c 
$ ./keyshow 
enter char: ^[[C
0x1B == 27
0x5B == 91
0x43 == 67
0xA == 10 (enter key)
```