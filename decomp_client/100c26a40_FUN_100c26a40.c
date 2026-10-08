
long * FUN_100c26a40(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != 0) {
    plVar1 = (long *)FUN_100bf3540(0x18,"bn_lib.c",0x110);
    if (plVar1 == (long *)0x0) {
      FUN_100c62ee0(3,0x71,0x41,"bn_lib.c",0x111);
    }
    else {
      *(undefined4 *)((long)plVar1 + 0x14) = 1;
      *(undefined4 *)(plVar1 + 2) = 0;
      plVar1[1] = 0;
      *plVar1 = 0;
      lVar2 = FUN_100c26b50(plVar1,param_1);
      if (lVar2 != 0) {
        return plVar1;
      }
      if ((*plVar1 != 0) && ((*(byte *)((long)plVar1 + 0x14) & 2) == 0)) {
        FUN_100bf3910();
      }
      if ((*(uint *)((long)plVar1 + 0x14) & 1) == 0) {
        *(uint *)((long)plVar1 + 0x14) = *(uint *)((long)plVar1 + 0x14) | 0x8000;
        *plVar1 = 0;
      }
      else {
        FUN_100bf3910(plVar1);
      }
    }
  }
  return (long *)0x0;
}

