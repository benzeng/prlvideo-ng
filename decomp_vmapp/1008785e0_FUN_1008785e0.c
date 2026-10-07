
undefined8 FUN_1008785e0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    FUN_100887ce0(0x25,0x67,0x43,"dso_dlfcn.c",0xd3);
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_100885600(*(undefined8 *)(param_1 + 8));
    uVar3 = 1;
    if (0 < iVar1) {
      lVar2 = FUN_100885530(*(undefined8 *)(param_1 + 8));
      if (lVar2 == 0) {
        FUN_100887ce0(0x25,0x67,0x68,"dso_dlfcn.c",0xda);
        uVar3 = 0;
        FUN_1008852e0(*(undefined8 *)(param_1 + 8),0);
      }
      else {
        _dlclose(lVar2);
      }
    }
  }
  return uVar3;
}

