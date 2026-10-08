
bool FUN_100b4d3a0(long param_1,char *param_2)

{
  bool bVar1;
  
  if (param_2 == (char *)0x0) {
    bVar1 = false;
  }
  else if ((*param_2 == '\0') || (param_2[8] == '\0')) {
    if (*(int *)(param_1 + 8) == 0) {
      if (*(int *)(param_1 + 0xc) == 0) {
        if (*(int *)(param_1 + 0x10) == 0) {
          bVar1 = *(int *)(param_1 + 0x14) == 0;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

