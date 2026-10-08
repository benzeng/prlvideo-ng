
bool FUN_100ab9e10(char *param_1)

{
  char cVar1;
  
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while ('\0' < cVar1);
  return cVar1 == '\0';
}

