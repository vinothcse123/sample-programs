
#include<iostream>
#include<fstream>
#include <errno.h>
int main()
{
   using namespace std;
   char buffer_char[100];
   string buffer_string;

   /* Open a file and read it*/

   ifstream file_obj;

   file_obj.open("file1.txt",ios::in | ios::out );

   if( file_obj.is_open() )
   {
      printf("\n File opened successfully ");

      /* Read a file using overloaded operator >> */

      while( !file_obj.eof() )
      {
         file_obj >> buffer_char;
         cout << "\n"<< buffer_char;
      }



      /* Manipulation on file position */

      printf("\n Moving the file pointer againg to start of file");

      file_obj.clear();

      file_obj.seekg(0,file_obj.beg);
      file_obj.tellg();
      printf("\n Current Position of file pointer  :: %d ",(int)file_obj.tellg() );

      memset(buffer_char,'\0',sizeof(buffer_char));




      /* Read a file using a getline */

      file_obj.getline(buffer_char,50); //istream getline
      printf("\n  :: %s ",buffer_char);

      file_obj.clear();
      file_obj.seekg(0);


      std::getline(file_obj,buffer_string); // string class getline
      cout<<"\n"<<buffer_string;

      cout<<"\n No of character read at last time : "<< file_obj.gcount();


      /* Closing a file */

      file_obj.close();



      /* Write to file*/

      ofstream file_os_obj("file1.txt");

      file_os_obj.write("HAI I have changed the content of file !!!",30);

      file_os_obj.close();

   }
   else
   {
      printf("\n Error occured in opening the file");
   }

   if( file_obj.is_open() )
   {
      file_obj.close();
   }

   return 0;
}
