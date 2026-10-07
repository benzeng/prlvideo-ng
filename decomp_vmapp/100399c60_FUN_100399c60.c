
char * FUN_100399c60(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(param_1 + 8 + (param_2 & 0xffffffff) * 0xc);
  switch(iVar1) {
  case 1:
  case 4:
    if (param_3 == 4) {
      return "";
    }
    if (param_3 == 3) {
      return ".xyz";
    }
    if (param_3 < 3) {
      pcVar2 = ".xy";
      if (iVar1 == 4) {
        pcVar2 = ".xyz";
      }
      return pcVar2;
    }
    break;
  case 2:
    pcVar2 = ".xyz";
    if (param_3 == 4) {
      pcVar2 = "";
    }
    return pcVar2;
  case 3:
    return ".xyz";
  }
  return (char *)0x0;
}

