
void FUN_1003e0350(char param_1)

{
  char *pcVar1;
  
  pcVar1 = "exclusive";
  if (param_1 != '\0') {
    pcVar1 = "shared";
  }
  DAT_1011c8484 = param_1;
  FUN_1008e3970("","DVDImage",0,"[DVD] is using %s access to device",pcVar1);
  return;
}

