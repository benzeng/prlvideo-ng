
long * FUN_1008d83e0(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10081ddd0(0x30,"ui_lib.c",0x51);
  if (plVar1 == (long *)0x0) {
    FUN_100887ce0(0x28,0x68,0x41,"ui_lib.c",0x53);
    plVar1 = (long *)0x0;
  }
  else {
    if (DAT_1011c2a30 == 0) {
      DAT_1011c2a30 = FUN_1008d9e90();
    }
    *plVar1 = DAT_1011c2a30;
    *(undefined4 *)(plVar1 + 5) = 0;
    plVar1[2] = 0;
    plVar1[1] = 0;
    FUN_10081f930(0xb,plVar1,plVar1 + 3);
  }
  return plVar1;
}

