#include <json.hpp>
#include <iostream>
#include <fstream>

using namespace std;
using json = nlohmann::json;

int main()
{
    // create an empty structure (null)
    json j;

    // add a number that is stored as double (note the implicit conversion of j to an object)
    j["pi"] = 3.141;

    // add a Boolean that is stored as bool
    j["happy"] = true;

    // add a string that is stored as std::string
    j["name"] = "Niels";

    // add another null object by passing nullptr
    j["nothing"] = nullptr;

    // add an object inside the object
    j["answer"]["everything"] = 42;

    // add an array that is stored as std::vector (using an initializer list)
    j["list"] = {1, 0, 2};

    // add another object (using an initializer list of pairs)
    j["object"] = {{"currency", "USD"}, {"value", 42.99}};
    cout << " ======================== \n";
    std::cout << j;

    // store a string in a JSON value
    json j_string = "this is a string";
    cout << " ======================== \n";

    // retrieve the string value
    auto cpp_string = j_string.get<std::string>();
    // retrieve the serialized value (explicit JSON serialization)
    std::string serialized_string = j_string.dump();
    // output of serialized value
    std::cout << j_string << " == " << serialized_string << std::endl;
}