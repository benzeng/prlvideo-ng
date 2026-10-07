
code * FUN_100454100(int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  
  if (param_2 == 2) {
    if (*param_1 != 3) {
      return (code *)0x0;
    }
    iVar1 = param_1[1];
    if (iVar1 == 0xff) {
      if (param_1[3] == 0) {
        return FUN_1004541c0;
      }
      if (param_1[3] == 3) {
        return FUN_100455720;
      }
    }
    pcVar3 = FUN_100456df0;
  }
  else {
    iVar1 = param_1[1];
    if (iVar1 == 0xff) {
      if (param_1[3] == 0) {
        return FUN_1004585c0;
      }
      if (param_1[3] == 3) {
        return FUN_100459d40;
      }
    }
    else if (iVar1 == 0xf) {
      if (param_1[3] == 0) {
        return FUN_100459570;
      }
    }
    else if ((iVar1 == 0x3f) && (param_1[3] == 0)) {
      return FUN_100458da0;
    }
    pcVar3 = FUN_10045a5a0;
  }
  pcVar2 = (code *)0x0;
  if (iVar1 == 0xff) {
    pcVar2 = pcVar3;
  }
  return pcVar2;
}

