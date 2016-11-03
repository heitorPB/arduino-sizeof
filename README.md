# arduino-sizeof

Serial.print the size of most C data types.

C language defines the basic data types with *at least* N bits.
[1](https://en.wikipedia.org/wiki/C_data_types) The actual number of bits in
each data type depends on the compiler implementation you use. This code aims
to produce a table for reference.

Compile the code and upload it to your arduino board and open the serial port
monitor.


## Output

Using avr-gcc 5.3.0 and Arduino UNO board, the output is:

	Integer types:
	        sizeof(short):          2
	        sizeof(int):            2
	        sizeof(long int):       4
	        sizeof(long long int):  8
	
	        sizeof(int8_t):         1
	        sizeof(int16_t):        2
	        sizeof(int32_t):        4
	        sizeof(int64_t):        8
	
	        sizeof(int_least8_t):   1
	        sizeof(int_least16_t):  2
	        sizeof(int_least32_t):  4
	        sizeof(int_least64_t):  8
	
	Floating point types:
	        sizeof(float):          4
	        sizeof(double):         4
	        sizeof(long double):    4
	
	Other types:
	        sizeof(char):           1
	        sizeof(bool):           1
	        sizeof(void):           1
	        sizeof(void*):          2
	        sizeof(size_t):         2
	        sizeof(ptrdiff_t):      2

## Dependencies

Code uses standard avr-libc libraries and
[Wire](https://www.arduino.cc/en/Reference/Wire).


## License

This project is licensed under the MIT License
