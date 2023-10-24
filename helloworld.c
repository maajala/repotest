#include <stdio.h>
#include <string.h>

char ch ;
int main()
{

    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }

      for(int i=0; input[i] !=0; i++)
      { 
          ch = input[i];

      if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))

        if(ch>='A' && ch<='Z') 
        {
          ch = ch - 'A'+'a';//converting capital letter to small ones using + - algorthim
        }
        letterCount[ch-'a']++;// if letter is a filled add index 0 ; if b add index 1
      } 
        // Your Code should be implemented here
        // Iterate through the characters in the input
        // Check if the character is a letter (A-Z or a-z)
        // Increment the corresponding count in the array
    }
  printf("Distribution of letters in the input: \n");
  for(int i=0; i<26; i++)
    printf("%c: %d ",'A'+i,letterCount[i]);
    // More of your code here to
    // Display the letter counts

    return 0;
}