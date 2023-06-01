section		.text
	extern 	  printf
	global    main
          
main:
	  mov   edi, msg
	  call  printf
	  mov 	eax, 0
	  
section		.data	  
	msg db `Hello, Holberton\n`, 0xa, 0

