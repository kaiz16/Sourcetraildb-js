#include <json.hpp>
#include <iostream>
#include <fstream>

using namespace std;
using json = nlohmann::json;

int main()
{
   std::ifstream input("parsedJson.json");
   for (std::string line; std::getline(input, line);)
   {
      cout << " ======================== \n";
      // cout << line;
      auto j3 = json::parse(line);

      // cout << j3[0]["body"][0]["body"]["body"];
      // Printing elements of an array using
      // foreach loop
      // for (auto x : j3)
      // {
      //    cout << "--------------\n";
      //    cout << x["type"] << endl;
      // }

      for (const auto &item : j3.items())
      {
         // cout << item.key() << "\n";
         for (const auto &val : item.value().items())
         {
            cout << "  " << val.key() << ": " << val.value() << "\n";
            cout << "--------------\n";
         }
      }
   }
}

// {
//    std::ifstream infile("thefile.txt");
//    ifstream myReadFile;
//    myReadFile.open("parsedJson.txt");
//    char output[10000];
//    if (myReadFile.is_open())
//    {
//       while (!myReadFile.eof())
//       {
//          myReadFile >> output;
//          cout << output;
//       }
//    }
//    myReadFile.close();
//    return 0;
// }
