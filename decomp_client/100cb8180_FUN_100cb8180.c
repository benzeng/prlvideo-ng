
undefined8 FUN_100cb8180(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FUN_100cb7060(param_2);
  uVar3 = 0;
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (lVar2 == 0) {
      lVar2 = FUN_100c83900();
      *plVar1 = lVar2;
      if (lVar2 == 0) {
        FUN_100c62ee0(0x2e,0x9b,0x41,"cms_io.c",0x4c);
        return 0;
      }
    }
    *(ulong *)(lVar2 + 0x10) = *(ulong *)(lVar2 + 0x10) & 0xffffffffffffffcf | 0x10;
    *param_1 = lVar2 + 8;
    uVar3 = 1;
  }
  return uVar3;
}

