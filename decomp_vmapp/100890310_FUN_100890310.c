
undefined8 FUN_100890310(long param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (param_2 == 0) {
    *(undefined8 *)(lVar1 + 0x1f0) = 0;
    *(undefined8 *)(lVar1 + 0x1e8) = 0;
  }
  else {
    if (param_2 != 8) {
      return 0xffffffff;
    }
    lVar2 = *(long *)(param_4 + 0x78);
    if (*(long *)(lVar1 + 0x1e8) != 0) {
      if (*(long *)(lVar1 + 0x1e8) != lVar1) {
        return 0;
      }
      *(long *)(lVar2 + 0x1e8) = lVar2;
    }
    if (*(long *)(lVar1 + 0x1f0) == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x1f0) != lVar1 + 0xf4) {
      return 0;
    }
    *(long *)(lVar2 + 0x1f0) = lVar2 + 0xf4;
  }
  return 1;
}

