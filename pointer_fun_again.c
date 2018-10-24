#include <stdio.h>
#include <string.h>


struct PlayStruct
{
  int int_value;
  double double_value;
  char a_string[64];
};

void print_struct( struct PlayStruct ps, struct PlayStruct *pps);
void change_struct( struct PlayStruct ps, struct PlayStruct *pps);
void print_string(char string_to_print[]);
void change_string(char a_string[], char *string[]);


 int main(int argc, char const *argv[])
 {

   struct PlayStruct play_struct = {7, 34.8, "hallo"};
   struct PlayStruct *play_struct_pointer = &play_struct;
   char string [10] = "string";
   char *string_pointer = string;

   print_struct(play_struct,play_struct_pointer);
   change_struct(play_struct,play_struct_pointer);
   print_struct(play_struct,play_struct_pointer);
   //the values who where changed in the function are still same couse  i decleared the struct in the main so the memory is still there

   print_string(play_struct.a_string);
   change_string(play_struct.a_string, &string_pointer);
   print_string(play_struct.a_string);
   print_string(string_pointer);
   return 0;
 }
 void print_struct( struct PlayStruct ps, struct PlayStruct *pps)
 {
   printf("Values of struct ps: %d, %f, %s\n",ps.int_value, ps.double_value, ps.a_string);
   printf("Values of struct pps: %d, %f, %s\n",pps->int_value, pps -> double_value, pps-> a_string);
 }
void change_struct( struct PlayStruct ps, struct PlayStruct *pps)
{
  ps.int_value = 1;
  ps.double_value = 2.4;
  strcpy(ps.a_string, "changed");

  pps->int_value = 1;
  pps->double_value = 2.4;
  strcpy(pps->a_string, "changed");
}
void print_string(char string[])
{
  printf("print string: %s\n",string);
}
void change_string(char a_string[], char *string[])
{
  a_string[2] = 0;
  string[1] = 0;
}
