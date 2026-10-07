
undefined8 FUN_1008a1d30(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_100822ed0(param_2);
  if ((param_1 != 0) && (lVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0xb0);
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)FUN_1008a4610(&DAT_100be1a78);
      *(long **)(param_1 + 0xb0) = plVar2;
      if (plVar2 == (long *)0x0) {
        return 0;
      }
    }
    lVar3 = *plVar2;
    if (lVar3 == 0) {
      lVar3 = FUN_100884e10();
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
    uVar4 = FUN_1008852e0(lVar3,lVar1);
    return uVar4;
  }
  return 0;
}

