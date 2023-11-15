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
    Servo::Basic basic;
    basic.CreateFile("Example.examplefile");
    return 0;
}
```
The struct Basics contain lots of basic stuff to save and load;
use ```Servo::Basic```
In basics you need to use vectors for example to save a bunch of strings you need to
```cpp
#include "Servo.h"

std::vector<string> input;

int main() {
    Servo::Basic basic;
    basic.CreateFile("Example.examplefile");
    input.push_back("Won");
    input.push_back("Failed);
    input.push_back("Lord);
    basic.Str_SaveToFile("Example.pkg", input, false);
    return 0;
}
```
The ``` basic.Str_SaveToFile(string, vector<string>, bool); ```
Contains takes three things 
* string -> fileName;
* bool -> to clear the file when pushback
 Make it false to stop it from clearing while pushback.


To load the data from the file use 
``` basic.ReadFromFile();```

Example code 

```cpp
#include "Servo.h"

std::vector<std::string> output;

int main() {
    Servo::Basic basic;
    basic.ReadFromFile("Example.pkg", outPut);
    return 0;
}
```
The function adds all the data to the outPut.
To print the outPut just do
```cpp
#include "Servo.h"

std::vector<std::string> output;

int main() {
    Servo::Basic basic;
       for(auto& str : output)
       {
           std::cout << str;
       }
    return 0;
}
```

Thats it 
