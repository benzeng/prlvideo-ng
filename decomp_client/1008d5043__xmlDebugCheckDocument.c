
int _xmlDebugCheckDocument(FILE *output,xmlDocPtr doc)

{
  FILE *local_b0;
  FILE *local_a8 [18];
  undefined4 local_18;
  int local_14;
  
  local_b0 = output;
  if (output == (FILE *)0x0) {
    local_b0 = *(FILE **)PTR____stdoutp_1021e1858;
  }
  FUN_1008d1ad4(local_a8);
  local_a8[0] = local_b0;
  local_18 = 1;
  FUN_1008d45e1(local_a8,doc);
  FUN_1008d1b87(local_a8);
  return local_14;
}

