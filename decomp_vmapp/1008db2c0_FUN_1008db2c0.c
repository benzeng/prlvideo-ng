
long FUN_1008db2c0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  iVar1 = FUN_100821ab0(*param_1);
  if (iVar1 == 0x17) {
    plVar3 = (long *)(*(long *)(param_1[1] + 8) + 8);
  }
  else {
    if (iVar1 != 0x16) {
      FUN_100887ce0(0x2e,0x84,0x98,"cms_lib.c",0x1ef);
      return 0;
    }
    plVar3 = (long *)(param_1[1] + 0x20);
  }
  if (*plVar3 == 0) {
    lVar2 = FUN_100884e10();
    *plVar3 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_1008a4610(&DAT_100be7660);
  if (lVar2 != 0) {
    iVar1 = FUN_1008852e0(*plVar3,lVar2);
    if (iVar1 == 0) {
      FUN_1008a4c40(lVar2,&DAT_100be7660);
      return 0;
    }
    return lVar2;
  }
  return 0;
}

