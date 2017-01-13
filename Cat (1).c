//-----------------------------------------------------------------------------
//  Stephen Woodbury
//  swoodbur
//  CMSC101
//  ID # : 1429496
//  10/12/2016
//  PA2
//  Lex.c
//  Given an input file with unalphebetized words, Lex will sort the indices of
//  of the string array formed from the input file to where the array, if 
//  re-arranged according to the indices, will be alhebetized. After sorting, 
//  the array of strings will be writen into an output file using a List created
//  by Lex to put the strings in the array into alphebetical order. 
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>    //open
#include <unistd.h>   //close, read, write

#define MAX_LEN 160

int main(int argc, char* argv[])
{
    if( argc < 2 )
    {
        while(1)
        {
          char holder[2000000];
          int bytesRead = read( 1, holder, 2000000);
          write(2 , holder , bytesRead); 
        }
    }
  else
  {
    int i = 1;
    for(i; i<argc; i++)
    {
      int fileStatus = open(argv[i], O_RDONLY);
      if(fileStatus < 0)
      {
        perror(argv[i]);
      }
      
      char fileContent[2000000];
      int readSize = read(fileStatus, fileContent, 2000000);
      if( readSize < 0 )
      {
        return 1;
      }
      
      write(1, fileContent, readSize);
      
      if(close(fileStatus) < 0)
      {
        return 1;
      }  
    }
  }
  
  return(0);
}