#include <cassert>
#include <string>
using namespace std::string_literals;

int main() {
    // Operaciones aritméticas con enteros decimales
    assert(1 + 1 == 2);
    assert(10 - 3 == 7);
    assert(10 * 3 == 30);
    assert(10 / 3 == 3); //Vemos que el elemento que devuelve esta fuera de los enteros, pero C++ lo aproxima a su valor entero

    // Unsigned
    assert(10u + 3u == 13u);
    assert(10u - 3u == 7u);
    assert(10u * 3u == 30u);
    assert(9u / 3u == 3u); //Vemos que el elemento que devuelve esta fuera de los enteros positivos, pero C++ lo aproxima a su valor entero

    // Operaciones lógicas con booleanos
    //Leyes de De Morgan expresadas con boolenos: 
    //not(A and B) == (not A or not B)
    assert(!(true and false) == (!true or !false));  // true == true
    assert(!(false and false) == (!false or !false)); // true == true
    assert(!(true and true) == (!true or !true));    // false == false
    //not(A or B) == (not A and not B)
    assert(!(true or false) == (!true and !false));  // false == false
    assert(!(false or false) == (!false and !false)); // true == true
    assert(!(true or true) == (!true and !true));    // false == false

    // Char
    assert('A' + 1 == 'B');
    assert((char)(255 + 1) == 0); // overflow char
    assert('A' == 65);   // ASCII de 'A'
    assert('B' > 'A');   // Comparación alfabética
    assert('a' != 'A');   // Diferencia entre mayúsculas y minúsculas
    assert('C' - 2 == 'A');
    assert('a' + ('A' - 'a') == 'A'); // Conversión de minúscula a mayúscula
    assert('a' - 32 == 'A');
    assert('D' - 'A' == 3);          // Posición relativa en alfabeto
    assert(('x' == 'x') and ('y' != 'z'));
    assert(('m' > 'l') or ('n' < 'a'));
    assert(!('X' < 'A'));

    // Enteros representados como HEXADECIMAL (se agrega el prefix 0x)
    assert(0xA + 0x5 == 0xF);     // 10 + 5 = 15
    assert(0x10 - 0x8 == 0x8);    // 16 - 8 = 8
    assert(0x3 * 0x4 == 0xC);     // 3 * 4 = 12
    assert(0xC / 0x3 == 0x4);     // 12 / 3 = 4
    //Desigualdades HEXADECIMAL
    assert(0xA > 0x9);          // 10 > 9
    assert(0x6 < 0x8);          // 6 < 8
    assert(0xF >= 0xE);         // 15 >= 14
    assert(0x5 <= 0x5);         // 5 <= 5
    assert(0x3 != 0x4);         // 3 != 4

    // Enteros representados como BINARIO (se agrega el prefix 0b)
    assert(0b1010 + 0b0101 == 0b1111);    // 10 + 5 = 15
    assert(0b10000 - 0b1000 == 0b1000);   // 16 - 8 = 8
    assert(0b11 * 0b10 == 0b110);         // 3 * 2 = 6
    assert(0b1100 / 0b11 == 0b100);       // 12 / 3 = 4
    //Desigualdades Binario
    assert(0b1010 > 0b1001);    // 10 > 9
    assert(0b0110 < 0b1000);    // 6 < 8
    assert(0b1111 >= 0b1110);   // 15 >= 14
    assert(0b0101 <= 0b0101);   // 5 <= 5
    assert(0b0011 != 0b0100);   // 3 != 4

    // --- Comparaciones entre binario y hexadecimal ---
    assert(0xF == 0b1111);      // 15 == 15
    assert(0xA > 0b1001);       // 10 > 9
    assert(0b0100 < 0x5);       // 4 < 5

    //Double
    assert(0.5 + 0.5 == 1.0);
    assert(0.25 + 0.25 == 0.5);
    assert(0.125 + 0.125 == 0.25);
    assert(1.0 - 0.5 == 0.5);
    assert(0.5 - 0.25 == 0.25);
    assert(0.25 - 0.125 == 0.125);
    assert(0.5 * 2.0 == 1.0);
    assert(0.25 * 4.0 == 1.0);
    assert(0.125 * 8.0 == 1.0);
    assert(1.0 / 2.0 == 0.5);
    assert(1.0 / 4.0 == 0.25);
    assert(1.0 / 8.0 == 0.125);
    // Casos donde la imprecisión del double se nota
    assert(0.1 + 0.2 != 0.3);
    assert(0.1 * 3 != 0.3);
    // Desigualdades
    assert(7.5 - 2.5 - 5.0 > -1.0); 
    assert(5.5 - 2.2 < 4.0);      
    assert(1.1 + 1.1 > 2.1);
    assert(1.1 + 1.1 != 2.3);  

    //String utilizando el std
    assert(std::string("Hola") + " " + std::string("Mundo") == std::string("Hola Mundo"));
    assert(std::string("Hola") + " Mundo" == "Hola Mundo"); //Combinacion de tipo Char con String
    assert(std::string("Hola") != "Mundo");
    assert("abc" == std::string("abc")); //Su representacion en cadena de chars es exactamente igual a su representacion en String
    assert(std::string("abc") < "bcd");
    assert(std::string("abc") <= "abc");
    assert(std::string("xyz") > "xy");
    assert(std::string("z") >= "y");
    //Comparaciones entre cadena de chars y String
    assert("123" < std::string("124"));
    assert("a" != std::string("A"));
    assert("A" == std::string("A"));
    assert(std::string("abc") + std::string("123") > "abc122");
    //Comparaciones con cadena vacía
    assert(std::string("") == "");     
    assert(std::string("") != "abc");        
    assert(std::string("") < "a");
    
    //String utilizando String Literals (suffix s)
    assert("Hola"s + " " + "Mundo"s == "Hola Mundo"s);
    assert("Hola"s " "s "Mundo"s == "Hola Mundo"s); //Se puede concatenar sin el signo de la suma dejando espacios en blanco
    assert("Hola"s != "Mundo"s);
    assert("abc" == "abc"s); //Su representacion en cadena de chars es exactamente igual a su representacion en string
    assert("abc"s < "bcd");
    assert("abc"s <= "abc");
    assert("xyz"s > "xy");
    assert("z"s >= "y");
    //Comparaciones entre cadena de chars y String
    assert("123" < "124"s);
    assert("a" != "A"s);
    assert("A" == "A"s);
    assert("abc"s + "123"s > "abc122");
    //Comparaciones con cadena vacía
    assert(""s == "");     
    assert(""s != "abc");        
    assert(""s < "a");

    //Strings que representan emojis
    // UTF-32 (char32_t)
    assert(U"😎 Carita con anteojos"s == U"\U0001F60E Carita con anteojos"s);
    assert(U"😇 Carita con aura"s == U"\U0001F607 Carita con aura"s);
    assert(U"🔥 Fuego"s == U"\U0001F525 Fuego"s);
    assert(U"💻 Computadora"s == U"\U0001F4BB Computadora"s);
    assert(U"🎉 Festejo"s == U"\U0001F389 Festejo"s);

    //Operaciones con String utilizando la funcionalidad length() 
    // std::u16string (UTF-16)
    assert(u"Hola mundo"s.length() == 10);
    assert(u"😊😊"s.length() == 4); // Cada emoji ocupa 2 espacios en UTF-16
    assert(u"🔥abc"s.length() == 5); // 🔥 = 2 unidades + 3 letras = 5

    // std::u32string (UTF-32)
    assert(U"Hola mundo"s.length() == 10);
    assert(U"😊😊"s.length() == 2); // Cada emoji ocupa 1 espacio en UTF-32
    assert(U"🔥abc"s.length() == 4); // 🔥 = 1 + 'a', 'b', 'c' = 4

    //Operaciones para comparar longitud de Strings
    // Igual longitud
    assert("Algoritmos"s.length() - "Estructura"s.length() == 0);   // 10 - 10 = 0
    assert("Hola mundo"s.length() - "Buenosdias"s.length() == 0); // 10 - 10 = 0

    // Diferencias positivas
    assert("Programar"s.length() - "C++"s.length() == 6);           // 9 - 3 = 6
    assert("Inteligencia"s.length() - "AI"s.length() == 10);       // 12 - 2 = 10

    // Diferencias negativas
    assert("Sol"s.length() - "Universo"s.length() == -5);          // 3 - 8 = -5
    assert("Bit"s.length() - "Palabra"s.length() == -4);           // 3 - 7 = -4

    // Suma de longitudes
    assert("Hola"s.length() + "Mundo"s.length() == 9);             // 4 + 5 = 9
    assert("Uno"s.length() + "Dos"s.length() + "Tres"s.length() == 10); // 3 + 3 + 4 = 10

    // Combinaciones
    assert("ABCDE"s.length() * 2 - "ABCDEFGHIJ"s.length() == 0);   // 5*2 - 10 = 0
    assert(("12345678"s.length() / 2) == 4);                        // 8 / 2 = 4

    return 0;
}