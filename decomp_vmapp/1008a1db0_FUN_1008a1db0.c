
undefined8 FUN_1008a1db0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_100822ed0(param_2);
  if ((param_1 != 0) && (lVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1008a4610(&DAT_100be1a78);
      *(long *)(param_1 + 0xb0) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    lVar3 = *(long *)(lVar2 + 8);
    if (lVar3 == 0) {
      lVar3 = FUN_100884e10();
      *(long *)(lVar2 + 8) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
    uVar4 = FUN_1008852e0(lVar3,lVar1);
    return uVar4;
  }
  return 0;
}

