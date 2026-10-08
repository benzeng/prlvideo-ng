
long FUN_100cb7900(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  iVar1 = FUN_100bf7220(*param_1);
  if (iVar1 == 0x17) {
    plVar3 = *(long **)(param_1[1] + 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
  }
  else {
    if (iVar1 != 0x16) {
      FUN_100c62ee0(0x2e,0x80,0x98,"cms_lib.c",0x1a4);
      return 0;
    }
    plVar3 = (long *)(param_1[1] + 0x18);
  }
  if (*plVar3 == 0) {
    lVar2 = FUN_100c60010();
    *plVar3 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_100c7fb90(&DAT_1022578b8);
  if (lVar2 != 0) {
    iVar1 = FUN_100c604e0(*plVar3,lVar2);
    if (iVar1 == 0) {
      FUN_100c801c0(lVar2,&DAT_1022578b8);
      return 0;
    }
    return lVar2;
  }
  return 0;
}

