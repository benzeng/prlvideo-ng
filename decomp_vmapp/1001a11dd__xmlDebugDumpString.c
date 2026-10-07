
void _xmlDebugDumpString(FILE *output,xmlChar *str)

{
  FILE *local_20;
  int local_c;
  
  local_20 = output;
  if (output == (FILE *)0x0) {
    local_20 = *(FILE **)PTR____stdoutp_100ba2338;
  }
  if (str == (xmlChar *)0x0) {
    _fwrite("(NULL)",1,6,local_20);
  }
  else {
    for (local_c = 0; local_c < 0x28; local_c = local_c + 1) {
      if (str[local_c] == '\0') {
        return;
      }
      if ((str[local_c] == ' ') ||
         (((8 < str[local_c] && (str[local_c] < 0xb)) || (str[local_c] == '\r')))) {
        _fputc(0x20,local_20);
      }
      else if ((char)str[local_c] < '\0') {
        _fprintf(local_20,"#%X",(ulong)str[local_c]);
      }
      else {
        _fputc((uint)str[local_c],local_20);
      }
    }
    _fwrite("...",1,3,local_20);
  }
  return;
}

