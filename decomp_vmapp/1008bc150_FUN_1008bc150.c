
int FUN_1008bc150(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_1 != 0) {
    param_3 = param_3 + 1;
    if (param_3 < 0) {
      param_3 = 0;
    }
    iVar1 = FUN_100885600(param_1);
    for (; param_3 < iVar1; param_3 = param_3 + 1) {
      lVar2 = FUN_100885620(param_1,param_3);
      if ((param_2 != 0) == 0 < *(int *)(lVar2 + 8)) {
        return param_3;
      }
    }
  }
  return -1;
}

