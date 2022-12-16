
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    
    if(argc!=2)
    {
        fprintf(stderr, "Usage: ./recover infile\n");
        return 1;
    }

    FILE*i=fopen(argv[1], "r");
    if(i==NULL)
    {
        fprintf(stderr, "Could not open %s.\n", argv[1]);
        return 2;
    }
    
    FILE* o = NULL;
    BYTE buffer[512];
    int jpeg=0;
    char filename[8]={0};
    while(fread(buffer, sizeof(BYTE)*512, 1, i)==1)
    {
        if(buffer[0]==0xFF&&buffer[1]==0xD8&&buffer[2]==0xFF&&(buffer[3]&0xF0)==0xE0)
        { 
            if(o != NULL)
            {
                fclose(o); 
            }
                sprintf(filename, "%03d.jpg", jpeg++);
                o = fopen(filename, "w");
        }
       
       if(o != NULL)
       {
            fwrite(buffer, sizeof(BYTE)*512, 1, o);
       }
    }
     if (o != NULL)
     {
      fclose(o);
     }
    
    
      fclose(i);
    
    return 0;
    
}