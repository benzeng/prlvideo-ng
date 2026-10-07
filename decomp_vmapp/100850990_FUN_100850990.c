
long * FUN_100850990(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_10081ddd0(0x58,"bn_blind.c",0x8d);
  if (plVar1 == (long *)0x0) {
    FUN_100887ce0(3,0x66,0x41,"bn_blind.c",0x8e);
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
    lVar2 = FUN_10084b840(param_1);
    *plVar1 = lVar2;
    if (lVar2 == 0) goto LAB_100850a79;
  }
  if (param_2 != 0) {
    lVar2 = FUN_10084b840(param_2);
    plVar1[1] = lVar2;
    if (lVar2 == 0) goto LAB_100850a79;
  }
  lVar2 = FUN_10084b840(param_3);
  plVar1[3] = lVar2;
  if (lVar2 != 0) {
    if ((*(byte *)(param_3 + 0x14) & 4) != 0) {
      *(byte *)(lVar2 + 0x14) = *(byte *)(lVar2 + 0x14) | 4;
    }
    *(undefined4 *)(plVar1 + 7) = 0xffffffff;
    FUN_10081d470(plVar1 + 5);
    return plVar1;
  }
LAB_100850a79:
  if (*plVar1 != 0) {
    FUN_10084b4b0();
  }
  if (plVar1[1] != 0) {
    FUN_10084b4b0();
  }
  if (plVar1[2] != 0) {
    FUN_10084b4b0();
  }
  if (plVar1[3] != 0) {
    FUN_10084b4b0();
  }
  FUN_10081e1a0(plVar1);
  return (long *)0x0;
}

