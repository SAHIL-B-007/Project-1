#include <iostream>  
#include <fstream>

using namespace std; 
 
int main ()
{  
  ofstream offile("file_name.txt");
  
  if (offile.is_open())  
  {  
    offile << "Writing to a text file\n";  
    offile << "C++ file handling\n";  
    offile.close();  
  }  
  else
  {
    cout <<"Failed to open file.";  
  }
  return 0;  
}  
