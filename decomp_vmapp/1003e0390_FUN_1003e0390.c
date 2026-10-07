
void FUN_1003e0390(char param_1)

{
  char *pcVar1;
  
  pcVar1 = "sequental";
  if (param_1 != '\0') {
    pcVar1 = "random";
  }
  DAT_101119870 = param_1;
  FUN_1008e3970("","DVDImage",0,"[DVD] is using flag %s access to device",pcVar1);
  return;
}

