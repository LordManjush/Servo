# Servo

A completely free save and load system.
Single header only. 
Usable for all types of projects.

(Under development)


To use first download the Servo.h file and add it into your project. Then include it in your code.

For now there is only a Basic type of save and load. I will add the others like writing and reading complex stuff.

Here is an example on the setup

```cpp
#include "Servo.h"

int main() {
    Servo::Basic::CreateFile("Example.examplefile");
    return 0;
}
```
The namespace Basics contain lots of basic stuff to save and load;
use ```Servo::Basic```
In basics you need to use vectors for example to save a bunch of strings you need to
```cpp
#include "Servo.h"

std::vector<string> input;

int main() {
    input.push_back("Won");
    input.push_back("Failed");
    input.push_back("Lord");
    Servo::Basic::Str_SaveToFile("Example.pkg", input, false);
    return 0;
}
```
The ```Servo::Basic::Str_SaveToFile(string, vector<string>, bool); ```
Contains takes three things 
* string -> fileName;
* bool -> to clear the file when pushback
 Make it false to stop it from clearing while pushback.


To load the data from the file use 
``` Servo::Basic::ReadFromFile();```

Example code 

```cpp
#include "Servo.h"

std::vector<std::string> output;

int main() {
    
    Servo::Basic::ReadFromFile("Example.pkg", outPut);
    return 0;
}
```
There is both bool and float save.
In bool the data is saved as 0 or 1.

Example Code Bool
```cpp
#include "Servo.h"

std::vector<bool> input;
int main() {
   // basic.CreateFile("Example.pkg");
   input.push_back(true);
   input.push_back(false);
   Servo::Basic::Bo_SaveToFile("Example.pkg", input, false);
   return 0;
}
```

Example Code Float
```cpp
#include "Servo.h"

std::vector<float> input;
int main() {
   // basic.CreateFile("Example.pkg");
   input.push_back(8008);
   input.push_back(101010101010101010);
   Servo::Basic::Bo_SaveToFile("Example.pkg", input, false);
   return 0;
}
```
The function adds all the data to the outPut.
To print the outPut just do.
```cpp
#include "Servo.h"

std::vector<std::string> output;

int main() {
   
       for(auto& str : output)
       {
           std::cout << str;
       }
    return 0;
}
```

Thats it 
