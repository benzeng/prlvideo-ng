
void FUN_10027bc90(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if (*param_1 == iVar1) {
    param_1[0] = 0;
    param_1[1] = 0;
    if (0xff < param_1[3]) {
      FUN_10008d470(param_1 + 8);
      param_1[3] = 0;
    }
  }
  else {
    iVar2 = *param_1 - iVar1;
    _memmove(param_1 + 0x212,param_1 + (long)iVar1 * 4 + 0x212,(long)iVar2 << 4);
    *param_1 = iVar2;
    param_1[1] = 0;
  }
  return;
}

