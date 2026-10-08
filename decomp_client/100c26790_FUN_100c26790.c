
long * FUN_100c26790(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 0xc) < param_2) {
    lVar1 = FUN_100c26860(param_1,param_2);
    plVar2 = (long *)0x0;
    if (lVar1 != 0) {
      plVar2 = (long *)FUN_100bf3540(0x18,"bn_lib.c",0x110);
      if (plVar2 == (long *)0x0) {
        FUN_100c62ee0(3,0x71,0x41,"bn_lib.c",0x111);
        FUN_100bf3910(lVar1);
        plVar2 = (long *)0x0;
      }
      else {
        *(undefined4 *)((long)plVar2 + 0x14) = 1;
        *(undefined4 *)(plVar2 + 2) = 0;
        plVar2[1] = 0;
        *plVar2 = 0;
        *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(param_1 + 8);
        *(int *)((long)plVar2 + 0xc) = param_2;
        *(undefined4 *)(plVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
        *plVar2 = lVar1;
      }
    }
    return plVar2;
  }
  plVar2 = (long *)FUN_100c26a40(param_1);
  return plVar2;
}

