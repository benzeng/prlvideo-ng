
long * FUN_1008e0ce0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_10081ddd0(0x28,"srp_vfy.c",0x10e);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar2 = FUN_100884e10();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_100884e10();
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      plVar1[4] = 0;
      plVar1[3] = 0;
      plVar1[2] = 0;
      if (param_1 == 0) {
        return plVar1;
      }
      lVar2 = FUN_10087d050(param_1);
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        return plVar1;
      }
      FUN_100884dd0(*plVar1);
      FUN_100884dd0(plVar1[1]);
    }
  }
  FUN_10081e1a0(plVar1);
  return (long *)0x0;
}

