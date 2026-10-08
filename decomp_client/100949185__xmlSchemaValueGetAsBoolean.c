
int _xmlSchemaValueGetAsBoolean(int *param_1)

{
  int local_14;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xf)) {
    local_14 = 0;
  }
  else {
    local_14 = param_1[4];
  }
  return local_14;
}

