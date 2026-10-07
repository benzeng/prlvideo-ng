
long * FUN_10084b840(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != 0) {
    plVar1 = (long *)FUN_10081ddd0(0x18,"bn_lib.c",0x110);
    if (plVar1 == (long *)0x0) {
      FUN_100887ce0(3,0x71,0x41,"bn_lib.c",0x111);
    }
    else {
      *(undefined4 *)((long)plVar1 + 0x14) = 1;
      *(undefined4 *)(plVar1 + 2) = 0;
      plVar1[1] = 0;
      *plVar1 = 0;
      lVar2 = FUN_10084b950(plVar1,param_1);
      if (lVar2 != 0) {
        return plVar1;
      }
      if ((*plVar1 != 0) && ((*(byte *)((long)plVar1 + 0x14) & 2) == 0)) {
        FUN_10081e1a0();
      }
      if ((*(uint *)((long)plVar1 + 0x14) & 1) == 0) {
        *(uint *)((long)plVar1 + 0x14) = *(uint *)((long)plVar1 + 0x14) | 0x8000;
        *plVar1 = 0;
      }
      else {
        FUN_10081e1a0(plVar1);
      }
    }
  }
  return (long *)0x0;
}

