
char * _xmlBoolToText(int boolval)

{
  char *local_18;
  
  if (boolval == 0) {
    local_18 = "False";
  }
  else {
    local_18 = "True";
  }
  return local_18;
}

