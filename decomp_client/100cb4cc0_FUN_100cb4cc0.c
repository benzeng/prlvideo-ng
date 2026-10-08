
long * FUN_100cb4cc0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_100bf3540(0x30,"ui_lib.c",0x51);
  if (plVar1 == (long *)0x0) {
    FUN_100c62ee0(0x28,0x68,0x41,"ui_lib.c",0x53);
    plVar1 = (long *)0x0;
  }
  else {
    if (param_1 == 0) {
      if (DAT_102318470 == 0) {
        DAT_102318470 = FUN_100cb66d0();
      }
      *plVar1 = DAT_102318470;
    }
    else {
      *plVar1 = param_1;
    }
    *(undefined4 *)(plVar1 + 5) = 0;
    plVar1[2] = 0;
    plVar1[1] = 0;
    FUN_100bf50a0(0xb,plVar1,plVar1 + 3);
  }
  return plVar1;
}

