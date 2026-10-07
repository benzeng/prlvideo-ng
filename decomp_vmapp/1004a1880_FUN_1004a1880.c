
char * FUN_1004a1880(char *param_1,byte *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  
  puVar1 = PTR_s_type____10111c938;
  _strlen(PTR_s_type____10111c938);
  std::string::__init(param_1,(ulong)puVar1);
  pcVar2 = (char *)std::string::append(param_1);
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  std::string::append(pcVar2,(ulong)param_2);
  return param_1;
}

