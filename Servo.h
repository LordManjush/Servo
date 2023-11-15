#include <iostream>
#include <fstream>
#include <vector>

namespace Servo
{
    struct Basic{
    public:
        void CreateFile(std::string FileName)
        {
            std::fstream file;
            file.open(FileName);
        }
        void ReadFromFile(std::string FileName, std::vector<std::string>& data)
        {
            std::fstream file;
            file.open(FileName, std::ios::in);
            data.clear();
            if(file.is_open())
            {
                std::string line;
                while (std::getline(file, line))
                {
                    line = line + "\n";
                    data.push_back(line);
                }
                file.close();
            }
        }
        
        void Str_SaveToFile(std::string FileName, std::vector<std::string> data, bool ClearAll)
        {
            std::fstream file;
            if(!ClearAll)
            {
                file.open(FileName, std::ios::app);
                file.clear();
            }
            if(ClearAll)
            {
                file.open(FileName, std::ios::out);
                file.clear();
            }

            if(file.is_open())
            {
                for (auto& s : data) {
                    file << s + "\n";
                }

                file.close();
            }
        }

        void Fl_SaveToFile(std::string FileName, std::vector<float> data, bool ClearAll)
        {
            std::fstream file;
            if(!ClearAll)
            {
                file.open(FileName, std::ios::app);
                file.clear();
            }
            if(ClearAll)
            {
                file.open(FileName, std::ios::out);
                file.clear();
            }

            if(file.is_open())
            {
                for (auto& s : data) {
                    file << std::to_string(s) + "\n";
                }

                file.close();
            }
        }

        void Bo_SaveToFile(std::string FileName, std::vector<bool> data, bool ClearAll)
        {
            std::fstream file;
            if(!ClearAll)
            {
                file.open(FileName, std::ios::app);
                file.clear();
            }
            if(ClearAll)
            {
                file.open(FileName, std::ios::out);
                file.clear();
            }

            if(file.is_open())
            {
                for (std::_Bit_reference s : data) {
                    file << std::to_string(s) + "\n";
                }

                file.close();
            }
        }
    };
}
