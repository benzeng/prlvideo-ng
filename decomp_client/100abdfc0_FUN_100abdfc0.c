
void FUN_100abdfc0(long param_1,byte param_2,ulong param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 local_1c;
  
  param_2 = param_2 & 1;
  if ((param_3 & 1) == 0) {
    if (param_2 == 0) {
      return;
    }
  }
  else if (param_2 != 0) {
    return;
  }
  *(byte *)(param_1 + 0x52) = param_2;
  if (2 < DAT_10230ffd0) {
    pcVar2 = "";
    pcVar1 = "in";
    if (param_2 != 0) {
      pcVar1 = "";
    }
    if (*(char *)(param_1 + 0x51) == '\0') {
      pcVar2 = "not ";
    }
    FUN_100df99c0("","ShellIntClient",3,"II icon has become %svisible (%sin coherence)",pcVar1,
                  pcVar2);
  }
  if (*(char *)(param_1 + 0x51) != '\0') {
    if (*(char *)(param_1 + 0x52) != '\0') {
      FUN_100abe090(param_1);
      return;
    }
    local_1c = 0x10;
    FUN_100a4a170(param_1 + 0x10,&local_1c,4);
  }
  return;
}

