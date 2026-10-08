
long * FUN_100c2bb90(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_100bf3540(0x58,"bn_blind.c",0x8d);
  if (plVar1 == (long *)0x0) {
    FUN_100c62ee0(3,0x66,0x41,"bn_blind.c",0x8e);
    return (long *)0x0;
  }
  plVar1[10] = 0;
  plVar1[9] = 0;
  plVar1[8] = 0;
  plVar1[7] = 0;
  plVar1[6] = 0;
  plVar1[5] = 0;
  plVar1[4] = 0;
  plVar1[3] = 0;
  plVar1[2] = 0;
  plVar1[1] = 0;
  *plVar1 = 0;
  if (param_1 != 0) {
    lVar2 = FUN_100c26a40(param_1);
    *plVar1 = lVar2;
    if (lVar2 == 0) goto LAB_100c2bc79;
  }
  if (param_2 != 0) {
    lVar2 = FUN_100c26a40(param_2);
    plVar1[1] = lVar2;
    if (lVar2 == 0) goto LAB_100c2bc79;
  }
  lVar2 = FUN_100c26a40(param_3);
  plVar1[3] = lVar2;
  if (lVar2 != 0) {
    if ((*(byte *)(param_3 + 0x14) & 4) != 0) {
      *(byte *)(lVar2 + 0x14) = *(byte *)(lVar2 + 0x14) | 4;
    }
    *(undefined4 *)(plVar1 + 7) = 0xffffffff;
    FUN_100bf2be0(plVar1 + 5);
    return plVar1;
  }
LAB_100c2bc79:
  if (*plVar1 != 0) {
    FUN_100c266b0();
  }
  if (plVar1[1] != 0) {
    FUN_100c266b0();
  }
  if (plVar1[2] != 0) {
    FUN_100c266b0();
  }
  if (plVar1[3] != 0) {
    FUN_100c266b0();
  }
  FUN_100bf3910(plVar1);
  return (long *)0x0;
}

