#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i;
  for(i = 1; i < argc; i++){
    int cnt = 0;
    while(argv[i][cnt] != '\0')
    {
    	char c = argv[i][cnt];
    	if(c >= 'A' && c <= 'Z')
    		c = (char)(97 + c - 'A');
    	else if(c >= 'a' && c <= 'z')
    		c = (char)(65 + c - 'a');
    	printf(1, "%c", c);
    	++cnt;
    }
    printf(1, " ", argv[i]);
  }
  printf(1, "\n");
  exit();
}
