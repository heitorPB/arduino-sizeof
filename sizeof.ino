#include <Wire.h>
#include <inttypes.h>

const unsigned int pinLed = 13;


template<typename T>
void printSize(String name, String tab = "\t")
{
	Serial.print(String("\tsizeof(") + name + String("): ") + tab);
	Serial.println(sizeof(T));
}


void setup()
{
	Serial.begin(115200);
	while (!Serial);
	pinMode(pinLed, OUTPUT);
}

void loop()
{
	digitalWrite(pinLed, HIGH);
	Serial.println("Integer types:");

	printSize<short>("short", "\t\t");
	printSize<int>("int", "\t\t");
	printSize<long int>("long int");
	printSize<long long int>("long long int");
	Serial.println("");
	printSize<int8_t> ("int8_t");
	printSize<int16_t>("int16_t");
	printSize<int32_t>("int32_t");
	printSize<int64_t>("int64_t");
	Serial.println("");
	printSize<int_least8_t> ("int_least8_t");
	printSize<int_least16_t>("int_least16_t");
	printSize<int_least32_t>("int_least32_t");
	printSize<int_least64_t>("int_least64_t");

	Serial.println("\nFloating point types:");
	printSize<float>("float", "\t\t");
	printSize<double>("double");
	printSize<long double>("long double");
	//printSize<long long double>("long long double"); // no long long double :(

	Serial.println("\nOther types:");
	printSize<char>("char", "\t\t");
	printSize<byte>("byte", "\t\t");
	printSize<bool>("bool", "\t\t");
	printSize<void>("void", "\t\t");
	printSize<void*>("void*", "\t\t");
	printSize<word>("word", "\t\t");
	printSize<size_t>("size_t");
	printSize<ptrdiff_t>("ptrdiff_t");

	Serial.println("\nArduino objects:");
	printSize<HardwareSerial>("Serial");

	Serial.println("\n\n");
	digitalWrite(pinLed, LOW);
	delay(1<<12);
}
