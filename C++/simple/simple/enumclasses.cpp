/*
Enum classes
the 'shade' is the class/type and the value in the curly braces are
the attainable values of any variable delcared with the enum class/type
*/
enum class Shade { Dark, Dim, Light, Bright };
enum class Weight { Light, Medium, Heavy };

Shade color = Shade::Light;
Weight mass = Weight::Light;

/* To be able to print out the values of enum classes you have to use type casting
* the syntax goes like std::cout << static_cast<the_new_type>(the_enum_class_value eg shade::Light)
* To assign a new type to the enum class you also need to use type casting like this:
* new variable = static_cast<new variable type>(enum value)
*
* you can also use type casting to change the data type of a variable forcefully
*/
// void was used because it is not to return values


enum class Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

Day day = Day::Saturday;

