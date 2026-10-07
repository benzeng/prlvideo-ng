
int _xmlDebugCheckDocument(FILE *output,xmlDocPtr doc)

{
  FILE *local_b0;
  FILE *local_a8 [18];
  undefined4 local_18;
  int local_14;
  
  local_b0 = output;
  if (output == (FILE *)0x0) {
    local_b0 = *(FILE **)PTR____stdoutp_100ba2338;
  }
  FUN_10019e1ac(local_a8);
  local_a8[0] = local_b0;
  local_18 = 1;
  FUN_1001a0cb9(local_a8,doc);
  FUN_10019e25f(local_a8);
  return local_14;
}

