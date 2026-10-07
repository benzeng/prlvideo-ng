
code * FUN_10045b8a0(int *param_1,int param_2)

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
        return FUN_10045b960;
      }
      if (param_1[3] == 3) {
        return FUN_10045ce20;
      }
    }
    pcVar3 = FUN_10045e2c0;
  }
  else {
    iVar1 = param_1[1];
    if (iVar1 == 0xff) {
      if (param_1[3] == 0) {
        return FUN_10045f920;
      }
      if (param_1[3] == 3) {
        return FUN_100461930;
      }
    }
    else if (iVar1 == 0xf) {
      if (param_1[3] == 0) {
        return FUN_100460e80;
      }
    }
    else if ((iVar1 == 0x3f) && (param_1[3] == 0)) {
      return FUN_1004603d0;
    }
    pcVar3 = FUN_100462400;
  }
  pcVar2 = (code *)0x0;
  if (iVar1 == 0xff) {
    pcVar2 = pcVar3;
  }
  return pcVar2;
}

