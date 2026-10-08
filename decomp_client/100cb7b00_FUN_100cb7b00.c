
long FUN_100cb7b00(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  iVar1 = FUN_100bf7220(*param_1);
  if (iVar1 == 0x17) {
    plVar3 = (long *)(*(long *)(param_1[1] + 8) + 8);
  }
  else {
    if (iVar1 != 0x16) {
      FUN_100c62ee0(0x2e,0x84,0x98,"cms_lib.c",0x1ef);
      return 0;
    }
    plVar3 = (long *)(param_1[1] + 0x20);
  }
  if (*plVar3 == 0) {
    lVar2 = FUN_100c60010();
    *plVar3 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_100c7fb90(&DAT_102257c70);
  if (lVar2 != 0) {
    iVar1 = FUN_100c604e0(*plVar3,lVar2);
    if (iVar1 == 0) {
      FUN_100c801c0(lVar2,&DAT_102257c70);
      return 0;
    }
    return lVar2;
  }
  return 0;
}

