
long FUN_100be7f70(uint *param_1)

{
  long lVar1;
  
  if (param_1[1] == 0x1000) {
    lVar1 = 0;
    if ((*param_1 & 0xffffff00) == 0x300) {
      lVar1 = 0;
      if (*(long *)(param_1 + 0x20) != 0) {
        return *(long *)(*(long *)(param_1 + 0x20) + 0x3e0);
      }
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x66);
    if (lVar1 == 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x5c) + 0x110);
    }
  }
  return lVar1;
}

